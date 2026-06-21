#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
int RandomNumber(int From, int To)  
{ 
 int randNum = rand() % (To - From + 1) + From; 
  
 return randNum; 
} 
 
// Problem #1 
 
void FillMatrixWithRandomNumbers(int arr[3][3], short 
Rows, short Cols)  
{  
 for (short i = 0; i < Rows; i++)  
 { 
  for (short j = 0; j < Cols; j++) 
  {  
   //arr[i][j] = RandomNumber(1, 100);  
   arr[i][j] = RandomNumber(1, 10);  
  } 
 }  
} 
 
void PrintMatrix(int arr[3][3], short Rows, short Cols) 
{ 
 for (short i = 0; i < Rows; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  {  
   
   printf(" %0*d  ", 2, arr[i][j]); 
  } 
  cout << "\n";  
 } 
} 
 
// Problem #10 
 
int SumOfMatrix(int Matrix1[3][3], short Rows, short Cols) 
{ 
 int Sum  = 0; 
 for (short i = 0; i < Rows; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  { 
   Sum += Matrix1[i][j]; 
  } 
 } 
 return Sum; 
} 
  
int main() 
{   
 //Seeds the random number generator in C++, called only once     
 srand((unsigned)time(NULL)); 
  
 int Matrix1[3][3]; 
 
 // Problem #10 
 
 FillMatrixWithRandomNumbers(Matrix1, 3, 3); 
 cout << "\n Matrix 1 :\n"; 
 PrintMatrix(Matrix1, 3, 3); 
 
 cout << "\n Sum of matrix 1 is : " << SumOfMatrix(Matrix1, 3, 3) << endl; 
 
 system("pause>0"); 
} 