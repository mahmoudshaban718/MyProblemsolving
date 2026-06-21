/*
Description: Write a program to fill an array with random numbers 
from 1 to 100 and print it. 
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
 // & main  لترجع ( تخزن ) القيمة المدخلة في  
{ 
 cout << "Enter number of elements : \n"; 
 cin >> arrLength; 
 
 for (int i = 0 ; i < arrLength; i++)  
// index[0] == arr  مكان تخزين أول قيمة في 
  arr[i] = RandomNumber(1, 100); // [1] == arr أول قيمة عنصر في  
} 
 
void PrintArray(int arr[100], int arrLength)  
// main  استدعاء القيمة المخزنة في arrLength 
{ 
 for (int i = 0; i < arrLength; i++) 
  cout << arr[i] << " "; 
 
 cout << "\n"; 
} 
int main() 
{ 
 int arr[100], arrLength; 
 
 FillArrayWithRandomNumbers(arr, arrLength); 
 
 cout << "\nArray Elements : "; 
 PrintArray(arr, arrLength); 
}