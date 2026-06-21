/*
Description: Write a program to copy elements of a first array into 
a second array and print it.
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
for (int i = 0 ; i < arrLength; i++) 
arr[i] = RandomNumber(1, 100);   
} 
void PrintArray(int arr[100], int arrLength)  
{ 
for (int i = 0; i < arrLength; i++) 
cout << arr[i] << " "; 
cout << "\n"; 
} 
void CopyArray(int arrSource[100],int arrDestination[100], int arrLength) 
{ 
for (int i = 0; i < arrLength; i++) 
arrDestination[i] = arrSource[i]; 
} 
int main() 
{ 
srand((unsigned)time(NULL)); 
int arr[100], arrLength; 
FillArrayWithRandomNumbers(arr, arrLength); 
int arr2[100]; 
CopyArray(arr, arr2, arrLength); // arr == arr2 
cout << "\nArray 1 Elements : \n"; 
PrintArray(arr, arrLength); 
cout << "\nArray 2 Elements after copy : \n"; 
PrintArray(arr2, arrLength); 
}