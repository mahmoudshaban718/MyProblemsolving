//Count Number in Matrix
 
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
int main() 
{ 
 int Matrix[3][3] = { {9,1,12},{0,9,1}, {0,9,9} }; 
 // Problem #15 
 
 cout << "\n Matrix  :\n"; 
 PrintMatrix(Matrix, 3, 3); 
 
 int Number; 
 cout << "\n Enter the number to count in matrix ? "; 
 cin >> Number; 
  
 cout <<"\n Number " << Number << " Count in matrix is "  
  << CountNumberInMatrix(Matrix,Number, 3, 3) << endl; 
   
 system("pause>0"); 
} 