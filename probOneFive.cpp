using namespace std;
#include <fstream>
#include <iostream>
#include <iomanip>
int MAX_ARRAY = 1000;


void  printNumbers(string filename,int average, int array[]);

float arrayAvg(int array[]);


int main(){
  int numbers[MAX_ARRAY];
  string filename;
  int average = 0;
  ifstream data;
  cout << "file for array: ";
  cin >> filename;
  cout << endl;
  printNumbers(filename, average, numbers);
}

void printNumbers(string filename,int average, int array[]){
  int i = 0;
  ifstream data(filename);
  while (data){
    data >> array[i];
    cout << array[i] << endl;
    i++;
  }
  data.close();
  average = i;
  
}

float arrayAvg(int array[]){
  
}
