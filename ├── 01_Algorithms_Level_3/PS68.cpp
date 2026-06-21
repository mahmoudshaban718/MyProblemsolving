 //Number Exists In Matrix
 
 
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
 
int main() 
{ 
 int Matrix[3][3] = { {77,5,12},{22,20,1}, {1,0,9} }; 
  
 // Problem #17 
   
 cout << "\n Matrix  :\n"; 
 PrintMatrix(Matrix, 3, 3); 
  
 int Number; 
 cout << "\n Enter the number to look for in matrix ?  "; 
 cin >> Number; 
  
 if (IsNumberInMatrix(Matrix, Number, 3, 3)) 
  cout << "\n YES : it is there.\n"; 
 else 
  cout << "\n No : it's NOT there.\n"; 
 
 system("pause>0"); 
}