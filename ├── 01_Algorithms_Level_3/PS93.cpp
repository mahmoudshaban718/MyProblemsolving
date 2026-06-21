 //Replace Words # 
 
#include <iostream> 
#include <string> 
#include <iomanip> 
#include <vector> 
using namespace std; 
 
// Problem #42 
 
string 
ReplaceWordInStringUsingBuiltInFunction(string 
S12, string StringToReplace, string sRepalceTo) 
{   
 
 short pos = S12.find(StringToReplace); 
 
 
 while (pos != std::string::npos) 
 {   
  S12 = S12.replace(pos, 
StringToReplace.length(), sRepalceTo); 
   
  pos = S12.find(StringToReplace); 
//find next    
 } 
 
 return S12; 
} 
 
int main() 
{ 
 // Problem #42 
 
string S12 = "Welcome to Jordan , Jordan is a nice country"; 
string StringToReplace = "Jordan"; 
string ReplaceTo = "USA"; 
 
cout << "\nOrigial String\n" << S12; 
cout << "\n\nString After Replace:"; 
cout << "\n" << ReplaceWordInStringUsingBuiltInFunction(S12, 
StringToReplace, ReplaceTo); 
 
 
 system("pause>0"); 
}