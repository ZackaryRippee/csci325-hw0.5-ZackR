/*
 *@file probOneFive.cpp
 *@author Zack Rippee
 *@date 2024-09-12
 *@brief Reads a text file, puts it into an array, then prints it and shows the average
 *
 */






#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;


const int MAX_ARRAY = 1000;

/*
 * Opens file and reads it into the array while also printing it (combined two functions)
 * @param string filename : name of the file it's reading from
 * @param int array : the array it's reading the file into
 * @pre setup array and name of file to open
 * @return int : returns the number of characters 
 * @post : used for calculating average
 */
int  printNumbers(string filename, int array[]);

/*
 * Calculates average of all the numbers in the array
 * @param int array : the array it gets the numbers to average from 
 * @param int total : total number of numbers in the array (to divide all the numbers added up)
 * @pre gets data into array and number of numbers in array
 * @return float : returns the average  
 * @post : finishes program                                                           
 */
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
