/*
Description: Write a program to print the square root of a number 
without using a built-in function. 
*/
#include <iostream> 
#include <cmath> 
 
using namespace std; 
 
int MySqrt(float Number) 
{ 
 return pow(Number , 0.5); 
} 
 
float ReadNumber() 
{ 
 float Number; 
 cout << "Pleas enter a number ? " << endl; 
 cin >> Number; 
 
 return Number; 
} 
 
int main() 
{ 
 float Number = ReadNumber(); 
 
 cout << "My Sqrt Result : " << MySqrt(Number) << endl; 
 cout << "C++ Sqrt Result : " << sqrt(Number) << endl; 
 
 
}