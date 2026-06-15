#include <iostream> 
#include <cstdlib> 
#include <cmath> 
 
using namespace std; 
 
enum enPrimNotPrime { Prime = 1, NotPrime = 2 }; 
 
enPrimNotPrime CheckPrime(int Number) 
{ 
 int M = round((double) Number/ 2); 
 
 for (int Counter = 2; Counter <= M; Counter++) 
 { 
 
  if (Number % Counter == 0) 
   return enPrimNotPrime::NotPrime; 
 } 
 return  enPrimNotPrime::Prime;; 
} 
 
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
 
void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int 
arrLength, int& arr2Length) 
{ 
 int Counter = 0; 
 
 for (int i = 0; i < arrLength; i++) 
 { 
  if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime) 
  { 
   arrDestination[Counter] = arrSource[i]; 
   Counter++; 
  } 
 } 
 arr2Length = --Counter; //  لأن العداد كان زائد واحد 
} 
 
int main() 
{ 
 srand((unsigned)time(NULL)); 
 
 int arr[100], arrLength; 
 
 FillArrayWithRandomNumbers(arr, arrLength); 
 
 int arr2[100] , arr2Length = 0; 
 CopyOnlyPrimeNumbers(arr, arr2, arrLength , arr2Length); 
 
 cout << "\nArray 1 Elements : \n"; 
 PrintArray(arr, arrLength); 
 
 cout << "\nPrime Numbers in Array 2 : \n"; 
 PrintArray(arr2, arr2Length); 
}
