#include <iostream> 
#include <cmath> 
 
using namespace std; 
 
float MyABS(float Number) 
{ 
 if (Number > 0) 
  return Number; 
 else 
  return Number * -1; 
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
 
 cout << "My abs Result : " << MyABS(Number) << endl; 
 cout << "C++ abs Result : " << abs(Number) << endl; 
 
  
} 
 