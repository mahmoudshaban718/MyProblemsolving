 //Split String  
 
#include <iostream> 
#include <string> 
#include <iomanip> 
#include <vector> 
 
using namespace std; 
 
// Problem #23 
string ReadString() 
{ 
 string S1 = " "; 
 
 cout << "Pleas Enter your string ? \n"; 
 getline(cin, S1); 
 return S1; 
} 
 
// Problem #37 
 
vector <string> SplitString(string S9, string 
Delim) 
{ 
 vector <string> vString; 
 
 short pos = 0; 
 string sWord; // define a string variable 
 
 // use fine() function to get the position of the delimiters 
 while ((pos = S9.find(Delim)) != 
std::string::npos) 
 { // S9.find(delim)   الفراغ - الحد (  اوجد // 
 
  sWord = S9.substr(0, pos); 
 
 
  if (sWord != "") 
  { 
   vString.push_back(sWord); 
  }//   الحد +  األحرف عدد  الى 0( من  احذف // 
 
  // erase() until positon and move to next word 
  S9.erase(0, pos + Delim.length()); 
 } 
 // النص  من األخيرة  الكلمة  طباعة  //
 
 if (S9 != "") 
 { 
  // it print last word of the string 
  vString.push_back(S9); 
 
 } 
 return vString; 
 
} 
int main() 
{  
// Problem #37 
vector <string> vString; 
vString = SplitString(ReadString(), " "); 
cout << "Tokens = " << vString.size() << endl; 
for (string& s : vString) 
{ 
cout << s << endl; 
} 

   system("pause>0");
}
 