 //Convert Record to Line  # 
 
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
 
stClient ReadNewClient() 
{ 
 stClient Client; 
 
 cout << "Enter Account Number ? "; 
 
 // Usage of std::ws will extract all the whitespace character 
  
 getline(cin >> ws, Client.AccountNumber); 
 
 cout << "Enter PinCode ? "; 
 getline(cin, Client.PinCode); 
 
 cout << "Enter Name ? "; 
 getline(cin, Client.Name); 
 
 cout << "Enter Phone ? "; 
 getline(cin, Client.Phone); 
 
 cout << "Enter Account Balance ? "; 
 cin >> Client.AccountBalance; 
 
 return Client; 
 
} 
 
string CounvertRecordToLine(stClient Client, string Separator = "#//#") 
{ 
 string stClientRecord = ""; 
 
 stClientRecord += Client.AccountNumber + Separator; 
 stClientRecord += Client.PinCode + Separator; 
 stClientRecord += Client.Name + Separator; 
 stClientRecord += Client.Phone + Separator; 
 stClientRecord += to_string(Client.AccountBalance); 
 
 return stClientRecord; 
} 
  
int main() 
{ 
// Problem #45 
cout << "\nPlease Enter Client Data : \n\n"; 
stClient Client; 
Client = ReadNewClient(); 
cout << "\n\nClient Record for Saving is: \n"; 
cout << CounvertRecordToLine(Client); 
system("pause>0"); 
}