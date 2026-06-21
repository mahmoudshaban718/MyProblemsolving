#include <iostream> 
#include <string> 
#include <iomanip> 
#include <vector> 
#include <fstream> 
 
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
 // whitespace  األحيان  بعض في - اإلدخال  تكرار عند   يخزن قد ألنه اإلدخال  تجاوز يت
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
  
// Problem #47 
 
const string ClientsFileName = "Clients.txt"; 
 
void AddDataLineToFile(string FileName, string strDataLine) 
{ 
 fstream MyFile; 
 char Revision = 'y'; 
 
 MyFile.open(FileName, ios::out | ios::app); 
 
 if (MyFile.is_open()) 
 { 
  MyFile << strDataLine << endl; 
  MyFile.close(); 
 } 
} 
 
void AddNewClient() 
{ 
 stClient Client; 
 Client = ReadNewClient(); 
 
 AddDataLineToFile(ClientsFileName, CounvertRecordToLine(Client)); 
} 
 
void AddClients() 
{ 
 char AddMore = 'Y'; 
 
 do 
 { 
  system("cls"); 
  cout << "Adding New Client : \n\n"; 
  AddNewClient(); 
 
  cout << "\nClient Added Successfully , do you want to add more clients ? "; 
  cin >> AddMore; 
 
 } while (toupper(AddMore) == 'Y'); 
 
} 
 
int main() 
{ 
 // Problem #47 
 
 AddClients(); 
 
  
 system("pause>0"); 
}