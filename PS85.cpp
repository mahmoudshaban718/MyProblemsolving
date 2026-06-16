  //Print Each Word In String  # 
 
#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std; 
 
// Problem #23 
 
string ReadString() 
{ 
 string S1 = " "; 
 
 cout << "Pleas Enter your string ? \n"; 
 getline(cin, S1); 
 
 return S1; 
} 
 
// Problem #35 
 
void PrintEachWordInString(string S9) 
{ 
 string delim = " "; // Delimiter  
 
 cout << "\nYour string words are : \n\n"; 
 short pos = 0; 
 string sWord; // define a string variable 
 
 // use fine() function to get the position of the delimiters 
 while ((pos = S9.find(delim)) != 
std::string::npos) 
 {  //S9.find(delim)   الفراغ - الحد (  اوجد 
 
  sWord = S9.substr(0, pos); 
 
  if (sWord != "") 
  { 
   cout << sWord << endl; 
  }   //الحد +  األحرف عدد  الى 0( من  احذف  
 
  // erase() until positon and move to next word 
  S9.erase(0, pos + delim.length()); 
 }  

 if (S9 != "") 
 { 
  // it print last word of the string 
  cout << S9 << endl; 
 } 
} 
 
int main() 
{  
 // Problem #35 
 
 PrintEachWordInString(ReadString()); 
 system("pause>0"); 
}