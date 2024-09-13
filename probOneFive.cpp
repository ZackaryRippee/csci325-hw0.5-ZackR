using namespace std;
#include <fstream>
#include <iostream>
#include <iomanip>
int MAX_ARRAY = 1000;


int  printNumbers(string filename, int array[]);

float arrayAvg(int array[], int total);


int main(){
  int numbers[MAX_ARRAY];
  string filename;
  ifstream data;
  cout << "file for array: ";
  cin >> filename;
  cout << endl;
  int total = printNumbers(filename, numbers);
  cout << endl << "Average of the array is " << arrayAvg(numbers , total) << endl;
}

int printNumbers(string filename, int array[]){
  int i = 0;
  ifstream data(filename);
  while (data >> array[i]){
    cout << array[i] << endl;
    i++;
  }
  data.close();
  return i;
  
}

float arrayAvg(int array[], int total){
  float average;
  for (int i = 0; i < total; i++){
    average = average + array[i];
  }
  average = average / total;
  return average;
}
