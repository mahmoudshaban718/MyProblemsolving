 //Convert Line Data to Record 
 
#include <iostream> 
#include <string> 
#include <iomanip> 
#include <vector> 
 
using namespace std; 
 
// Problem #45 
 
struct stClient 
{ 
 string AccountNumber = ""; 
 string PinCode = ""; 
 string Name = ""; 
 string Phone = ""; 
 int AccountBalance = 0; 
 
}; 
 
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
  } //  الحد +  األحرف عدد  الى 0( من  احذف // 
 
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
  
// Problem #46 
 
stClient CounvertLineToRecord(string Line, string Separator = "#//#") 
{ 
 stClient Client; 
 vector <string> vClientData; 
 
 vClientData = SplitString(Line, Separator); 
 
 Client.AccountNumber = vClientData[0]; 
 Client.PinCode = vClientData[1]; 
 Client.Name = vClientData[2]; 
 Client.Phone = vClientData[3]; 
 Client.AccountBalance = stod(vClientData[4]); // case string to double 
 
 return Client; 
 
} 
 
void PrintClientRecord(stClient Client) 
{ 
 cout << "\n\nThe following is the extracted client record : \n\n"; 
 
 cout << "Account Number  : " << Client.AccountNumber << endl; 
 cout << "PinCode         : " << Client.PinCode << endl; 
 cout << "Name            : " << Client.Name << endl; 
 cout << "Phone           : " << Client.Phone << endl; 
 cout << "Account Balance : " << Client.AccountBalance << endl; 
} 
 
int main() 
{ 
 // Problem #46 
  
 string stLine = "A150#//#1234#//#Mohammed AbuHadhoud#//#079999#//#5270.00000"; 
 cout << "\nLine Record is : \n"; 
 cout << stLine << endl; 
  
 stClient Client = CounvertLineToRecord(stLine); 
  
 PrintClientRecord(Client); 
  
 system("pause>0"); 
}