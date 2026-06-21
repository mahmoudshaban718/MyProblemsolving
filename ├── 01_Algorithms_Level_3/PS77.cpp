//Fibonacci Series with Recursion # 
 
 
#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
// Problem #22 
 
void PrintFibonacciUsingRecurssion( short Number ,int Prev1 ,int Prev2) 
{ 
 int  FebNumber = 0; 
 
  if ( Number > 0) 
  { 
   FebNumber = Prev2 + Prev1; 
 
   Prev2 = Prev1; 
   Prev1 = FebNumber; 
 
   cout << FebNumber << "   "; 
 
   PrintFibonacciUsingRecurssion(Number -1 , Prev1  , Prev2); 
  } 
 
} 
 
int main() 
{ 
 // Problem #22 
  
 PrintFibonacciUsingRecurssion(10, 0, 1); 
 
 system("pause>0"); 
}