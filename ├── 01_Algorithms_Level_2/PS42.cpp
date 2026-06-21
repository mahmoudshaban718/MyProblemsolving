/*
Description: Write a program to count odd numbers inside a 
random array.  
*/

#include <iostream> 
#include <cstdlib> 
 
using namespace std; 
 
int RandomNumber(int From, int To) 
{ 
 
 int RandNum = rand() % (To - From + 1) + From; 
 return RandNum; 
} 
 
void FillArrayWithRandomNumbers(int arr[100], int& arrLength) 
{ 
 cout << "Enter number of elements : \n"; 
 cin >> arrLength; 
 
 for (int i = 0; i < arrLength; i++) 
  arr[i] = RandomNumber(1, 100); 
} 
 
void PrintArray(int arr[100], int arrLength) 
{ 
 for (int i = 0; i < arrLength; i++) 
  cout << arr[i] << " "; 
 
 cout << "\n"; 
} 
 
int OddCount(int arr[100],int arrLength) 
{ 
 int counter = 0; 
 
 for (int i = 0; i < arrLength; i++) 
 { 
  if (arr[i] % 2 != 0) 
  { 
   counter++; 
  } 
 } 
 return counter; 
} 
 
int main() 
{ 
 srand((unsigned)time(NULL)); 
 
 int arr[100], arrLength = 0; 
 
 FillArrayWithRandomNumbers(arr, arrLength); 
 
 cout << "\nArray Elements : \n"; 
 PrintArray(arr, arrLength); 
 
 cout << "\nOdd numbers count is : \n"; 
 cout << OddCount(arr, arrLength) << endl; 
} 
