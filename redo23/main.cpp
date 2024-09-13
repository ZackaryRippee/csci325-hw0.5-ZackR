/*
 *@file probOneFive.cpp
 *@author Zack Rippee
 *@date 2024-09-12
 *@brief asks for array size and text file, Reads that text file, puts it into an array, then prints it and shows the average
 *
 */






#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;



/*
 * Opens file and reads it into the array while also printing it (combined two functions)
 * @param string filename : name of the file it's reading from
 * @param int* numbers : points to the dynamic array and puts numbers into it
 * @param int numSize : size of the dynamic arrau
 * @pre setup array and name of file to open
 * @return int : returns the number of characters 
 * @post : used for calculating average
 */
int  printNumbers(string filename, int* numbers, int numSize);

/*
 * Calculates average of all the numbers in the array
 * @param int* numbers : the array it gets the numbers to average from 
 * @param int total : total number of numbers in the array (to divide all the numbers added up)
 * @pre gets data into array and number of numbers in array
 * @return float : returns the average  
 * @post : finishes program                                                           
 */
float arrayAvg(int* numbers, int total);


int main(){
  int *numbers = NULL;
  string filename;
  ifstream data;
  int numSize = 0;
  cout << "Size of array? ";
  cin >> numSize;
  numbers = new int[numSize];
  cout << "file for array: ";
  cin >> filename;
  cout << endl;
  int total = printNumbers(filename, numbers, numSize);
  cout << endl << "Average of the array is " << arrayAvg(numbers , total) << endl;
  delete[] numbers;
}

int printNumbers(string filename, int* numbers, int numSize){
  int i = 0;
  ifstream data(filename);
  while (i < numSize && data >> numbers[i]){
    cout << numbers[i] << endl;
    i++;
  }
  data.close();
  return i;
  
}

float arrayAvg(int* numbers, int total){
  float average;
  for (int i = 0; i < total; i++){
    average = average + numbers[i];
  }
  average = average / total;
  return average;
}
