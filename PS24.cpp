#include <iostream> 
#include <cstdlib> 
using namespace std; 
 
 
int RandomNumber(int From, int To) 
{ 
 
 int RandNum = rand() % (To - From + 1) + From; 
 return RandNum;  
} 
 
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)  // & main   لترجع ( تخزن ) القيمة المدخلة ف

{ 
 cout << "Enter number of elements : \n"; 
 cin >> arrLength; 
 
 for (int i = 0 ; i < arrLength; i++) // index[0] == arr  مكان تخزين أول قيمة في
 
  arr[i] = RandomNumber(1, 100);  // [1] == arr   أول قيمة عنصر  في

} 
 
void PrintArray(int arr[100], int arrLength) // main   استدعاء القيمة arrLength المخزنة في

{ 
 for (int i = 0; i < arrLength; i++) 
  cout << arr[i] << " "; 
 
 cout << "\n"; 
} 
 
int MaxNumberInArray(int arr[100], int arrLength) 
{ 
 int Max = 0; 
 for (int i = 0; i < arrLength; i++) 
 { 
  if (arr[i] > Max) 
  { 
   Max = arr[i]; 
  } 
 } 
 return Max; 
} 
 
int main() 
{ 
 srand((unsigned)time(NULL)); 
 
 int arr[100], arrLength; 
 
 FillArrayWithRandomNumbers(arr, arrLength); 
 
 cout << "\nArray Elements : "; 
 PrintArray(arr, arrLength); 
 
 cout << "\nMax Number is : " << 
  MaxNumberInArray(arr, arrLength) << endl; 
}