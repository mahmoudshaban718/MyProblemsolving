 //Sum Each Row in Matrix  
 
#include <iostream> 
#include <iomanip> 
using namespace std; 
 
int RandomNumber(int From, int To)  
{ 
 //Function to generate a random number  
 int randNum = rand() % (To - From + 1) + From; 
  
 return randNum; 
} 
// Problem #1 
void FillMatrixWithRandomNumbers(int arr[3][3], 
short Rows, short Cols)  
{ 
 for (short i = 0; i < Rows; i++)  
 { 
  for (short j = 0; j < Cols; j++) 
  {  
   arr[i][j] = RandomNumber(1, 100);  
  } 
 }  
} 
 
void PrintMatrix(int arr[3][3], short Rows, short 
Cols) 
{ 
 for (short i = 0; i < Rows; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  {
 
 
 
   cout << setw(3) << arr[i][j] << "     "; 
  } 
   
  cout << "\n";  
 } 
} 
 
// Problem #2 
 
int RowSum(int arr[3][3], short RowNumber, short Cols) 
{ 
 int Sum = 0; 
 
 // Cols  األعمدة  في التكرار حلقة 
 
 for (short j = 0; j <= Cols -1 ; j++) 
 { 
  Sum += arr[RowNumber][j]; 
 } 
 return Sum; 
}
void PrintEachRowSum(int arr[3][3], short Rows, short Cols) 
{ 
 
 cout << "\nThe following are the sum of each row in the matrix : \n"; 
 
 // Row الصفوف في  التكرار حلقة 
 
 for (short i = 0; i < Rows; i++) 
 { 
  cout << " Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << 
endl; 
 } 
} 
int main()  
{  
    
 //Seeds the random number generator in C++, called only once     
 srand((unsigned)time(NULL)); 
  
 
 
 // Variables  9  = 3 * 3 = arr[3][3] 
 int arr[3][3]; 
  
 FillMatrixWithRandomNumbers(arr, 3, 3);  
 
 cout << "\n The following is a 3x3 random matrix:\n"; 
 PrintMatrix(arr, 3, 3); 
  
 // Problem #2 
 
 PrintEachRowSum(arr, 3, 3); 
 
 system("pause>0"); 
} 