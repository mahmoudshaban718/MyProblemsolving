//Find Client By Account Number # 
 
#include <iostream> 
#include <iomanip>
#include <string> 
#include <vector> 
#include <fstream> 
 
using namespace std; 
 
// Problem #37 
 
vector <string> SplitString(string S9, string Delim) 
{ 
 vector <string> vString; 
 
 short pos = 0; 
 string sWord; // define a string variable 
 
 // use fine() function to get the position of the delimiters 
 while ((pos = S9.find(Delim)) != 
std::string::npos) 
 {   // الفراغ - الحد (  اوجد // S9.find(delim)
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

// Problem #45 
struct stClient 
{ 
 string AccountNumber = ""; 
 string PinCode = ""; 
 string Name = ""; 
 string Phone = ""; 
 int AccountBalance = 0; 
}; 
 
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
 
void PrintClinetRecord(stClient Clinet) 
{ 
 cout << "\n\nThe following is the extracted client record : \n\n"; 
 
 cout << "Account Number  : " << Clinet.AccountNumber << endl; 
 cout << "PinCode         : " << Clinet.PinCode << endl; 
 cout << "Name            : " << Clinet.Name << endl; 
 cout << "Phone           : " << Clinet.Phone << endl; 
 cout << "Account Balance : " << Clinet.AccountBalance << endl; 
} 
 
// Problem #48 
 
vector <stClient> LoadClientsDataFromFile(string FileName) 
{ 
 vector <stClient> vClient; 
 
 fstream MyFile; 
 
 MyFile.open(FileName, ios::in); 
 
 if (MyFile.is_open()) 
 { 
  string Line; 
  stClient Clinet; 
 
  while (getline(MyFile, Line)) 
  { 
   Clinet = CounvertLineToRecord(Line); 
   vClient.push_back(Clinet); 
  } 
 
  MyFile.close(); 
 } 
 return vClient; 
} 

// Problem #49 
 
const string ClientsFileName = "Clients.txt"; 
 
bool FindClientByAccountNumber(string AccountNumber, stClient& Client) 
{ 
 vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName); 
 
 for (stClient C : vClients) 
 { 
  if (C.AccountNumber == AccountNumber) 
  { 
   Client = C; 
   return true; 
  } 
 } 
 return false; 
} 
 
string ReadClientAccountNumber() 
{ 
 string AccountNumber = ""; 
 
 cout << "\nPlease enter AccountNumber ? "; 
 cin >> AccountNumber; 
 
 return AccountNumber; 
} 
 
int main() 
{ 
 // Problem #49 
 
 stClient Client; 
 string AccountNumber = ReadClientAccountNumber(); 
 
 if (FindClientByAccountNumber(AccountNumber, Client)) 
 { 
  PrintClinetRecord(Client); 
 } 
 else 
 { 
  cout << "\nClient with Account Number (" << AccountNumber << ") is NOT Found! \n"; 
 } 
 
 system("pause>0"); 
} 
