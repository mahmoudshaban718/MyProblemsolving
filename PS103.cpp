 //Reverse Words  
 
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
 while ((pos = S9.find(Delim)) != std::string::npos) 
 {   
 
  sWord = S9.substr(0, pos); 
 
 
  if (sWord != "") 
  { 
   vString.push_back(sWord); 
  }    
  // erase() until positon and move to next word 
  S9.erase(0, pos + Delim.length()); 
 } 
  
 if (S9 != "") 
 { 
  // it print last word of the string 
  vString.push_back(S9); 
 
 } 
 return vString; 
 
} 
  
// Problem #41 
 
string ReverseWordsInString(string S11) 
{ 
 vector<string> vString; 
 string S2 = ""; 
 
 vString = SplitString(S11, " "); 
 
 // declare iterator 
 vector<string>::iterator iter = vString.end(); 
 
 // Pointer  باستخدام Vector عناصر  على المرور  
 while (iter != vString.begin()) 
 { 
  --iter; 
  S2 += *iter + " "; 
 } 
 
 S2 = S2.substr(0, S2.length() - 1); //remove last space. 
 
 return S2; 
} 
 
int main() 
{ 
 // Problem #41 
 
string S11 = ReadString(); 
cout << "\n\nString after reversing words:"; 
cout << "\n" << ReverseWordsInString(S11); 
 
 system("pause>0"); 
}