//Check Sparse Matrix
 
#include <iostream> 
#include <iomanip> 
using namespace std; 
 
void PrintMatrix(int arr[3][3], short Rows, short 
Cols) 
{ 
 for (short i = 0; i < Rows; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  {  
  cout << setw(3) << arr[i][j] << "     "; 
   //printf(" %0*d  ", 2, arr[i][j]); 
  } 
  cout << "\n";  
 } 
} 
 
// Problem #15 
 
short CountNumberInMatrix( int Matrix[3][3], int 
Number ,short Rows, short Cols) 
{ 
 short NumberCount = 0; 
 
 for (short i = 0; i < Rows; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  { 
   if (Matrix[i][j] == Number) 
    NumberCount++; 
  } 
 } 
 return NumberCount; 
} 
 
// Problem #16 
 
short IsSparseMatrix( int Matrix[3][3] ,short Rows, short Cols) 
{ 
 short MatrixSize = Rows * Cols ; 
 
 return (CountNumberInMatrix(Matrix, 0, 3, 3) >= (MatrixSize / 2)); 
} 
int main() 
{ 
 int Matrix[3][3] = { {0,0,12},{0,0,1}, {0,0,9} }; 
 // Problem #16 
 
 cout << "\n Matrix  :\n"; 
 PrintMatrix(Matrix, 3, 3); 
   
 if (IsSparseMatrix(Matrix, 3, 3)) 
  cout << "\n YES : it is Sparse.\n"; 
 else 
  cout << "\n No : it's NOT Sparse.\n"; 
 
 system("pause>0"); 
}