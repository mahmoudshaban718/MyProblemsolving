//Intersected Numbers in matrices
 
 
#include <iostream> nnnn
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
 
// Problem #17 
 
bool IsNumberInMatrix(int Matrix[3][3], int Number, 
short Rows, short Cols) 
{ 
 
 for (short i = 0; i < Rows; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  { 
   if (Matrix[i][j] == Number) 
    return true; 
  } 
 } 
 return false; 
 
} 
 
// Problem #18 
 
void PrintIntersectedNumbers(int Matrix1[3][3], int 
Matrix2[3][3], short Rows, short Cols) 
{ 
 int Number; 
 
 for (short i = 0; i <= Rows - 1; i++) 
 { 
  for (short j = 0; j < Cols; j++) 
  { 
   Number = Matrix1[i][j]; 
 
   if (IsNumberInMatrix( Matrix2 , Number , Rows , Cols)) 
   { 
    cout << setw(3) << Number << "   "; 
   } 
  } 
 } 
 
} 
  
int main() 
{ 
int Matrix[3][3] = { {77,5,12},{22,20,1}, {1,0,9} };  
int Matrix3[3][3] = { {5,80,90},{22,77,1}, {10,8,33} }; 
// Problem #18 
cout << "\n Matrix  :\n"; 
PrintMatrix(Matrix, 3, 3); 
cout << "\n Matrix 3 :\n"; 
PrintMatrix(Matrix3, 3, 3); 
cout << "\n Intersected Numbers are : \n\n"; 
PrintIntersectedNumbers(Matrix, Matrix3, 3, 3); 
system("pause>0"); 
}