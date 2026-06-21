//Update Client By Account Number # 
 
#include <iostream> 
#include <iomanip>
#include <string> 
#include <vector> 
#include <fstream> 
 
using namespace std; 
 
// Problem #37 
 
vector <string> SplitString(string S9, 
string Delim) 
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
  S9.erase(0, pos + 
Delim.length()); 
 } 
 
 if (S9 != "") 
 { 
  // it print last word of the string 
  vString.push_back(S9); 
 
 } 
 return vString; 
 
} 
 
 
 
 
 
  
 
struct stClinet 
{ 
 string AccountNumber = ""; 
 string PinCode = ""; 
 string Name = ""; 
 string Phone = ""; 
 double AccountBalance = 0; 
 bool MarkForDelete = false; 
}; 
 
string CounvertRecordToLine(stClinet Clinet, string Seperator = "#//#") 
{ 
 string stClinetRecord = ""; 
 
 stClinetRecord += Clinet.AccountNumber + Seperator; 
 stClinetRecord += Clinet.PinCode + Seperator; 
 stClinetRecord += Clinet.Name + Seperator; 
 stClinetRecord += Clinet.Phone + Seperator; 
 stClinetRecord += to_string(Clinet.AccountBalance); 
 
 return stClinetRecord; 
 
} 
 
// Problem #46 
 
stClinet CounvertLineToRecord(string Line, string Seperator = "#//#") 
{ 
 stClinet Clinet; 
 vector <string> vClinetData; 
 
 vClinetData = SplitString(Line, Seperator); 
 
 Clinet.AccountNumber = vClinetData[0]; 
 Clinet.PinCode = vClinetData[1]; 
 Clinet.Name = vClinetData[2]; 
 Clinet.Phone = vClinetData[3]; 
 Clinet.AccountBalance = stod(vClinetData[4]); // case string to duoble 
 
 return Clinet; 
 
} 
 
void PrintClinetRecord(stClinet Clinet) 
{ 
 //cout << "\n\nThe following is the extracted client record : \n\n"; 
 cout << "\n\nThe following are the client Delete : \n\n"; 
 
 cout << "Account Number  : " << Clinet.AccountNumber << endl; 
 cout << "PinCode         : " << Clinet.PinCode << endl; 
 cout << "Name            : " << Clinet.Name << endl; 
 cout << "Phone           : " << Clinet.Phone << endl; 
 cout << "Account Balance : " << Clinet.AccountBalance << endl; 
} 
 
// Problem #47 
 
const string ClientsFileName = "Clients.txt"; 
 
 
 
 
// Problem #48 
 
vector <stClinet> LoadClientsDataFromFile(string FileName) 
{ 
 vector <stClinet> vClient; 
 
 fstream MyFile; 
 
 MyFile.open(FileName, ios::in); 
 
 if (MyFile.is_open()) 
 { 
  string Line; 
  stClinet Clinet; 
 
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
 
string ReadClientAccountNumber() 
{ 
 string AccountNumber = ""; 
 
 cout << "\nPlease enter AccountNumber ? "; 
 cin >> AccountNumber; 
 
 return AccountNumber; 
} 
 
bool FindClientByAccountNumber(string AccountNumber, vector <stClinet> vClients, 
stClinet& Client) 
{ 
 //vector <stClinet> vClients = LoadClientsDataFromFile(ClientsFileName); 
 
 for (stClinet C : vClients) 
 { 
  if (C.AccountNumber == AccountNumber) 
  { 
   Client = C; 
   return true; 
  } 
 } 
 return false; 
} 
 
// Problem #50 
 
vector <stClinet> SaveClientsDataToFile(string FileName, vector <stClinet> vClients) 
{ 
 fstream MyFile; 
 
 MyFile.open(FileName, ios::out); //overwrite 
 
 string DataLine; 
 if (MyFile.is_open()) 
 { 
 
  for (stClinet C : vClients) 
  { 
   if (C.MarkForDelete == false) 
   { 
    // we only write record that are not marked for delete 
    DataLine = CounvertRecordToLine(C); 
    MyFile << DataLine << endl; 
   } 
  } 
  MyFile.close(); 
 } 
 return vClients; 
} 
 
// Problem #51 
 
stClinet ChangeClientRecord(string AccountNumber) 
{ 
 stClinet Client; 
 
 Client.AccountNumber = AccountNumber; 
 
 // Uasge of std::ws will extract allthe whitespace character 
 // whitespace  يخزن قد ألنه  اإلدخال  تجاوز يتم األحيان  بعض في - اإلدخال  تكرار عند  
 
 cout << "Enter PinCode ? "; 
 getline(cin >> ws, Client.PinCode); 
 
 cout << "Enter Name ? "; 
 getline(cin, Client.Name); 
 
 cout << "Enter Phone ? "; 
 getline(cin, Client.Phone); 
 
 cout << "Enter Account Balance ? "; 
 cin >> Client.AccountBalance; 
 
 return Client; 
 
} 
 
bool UpdateClientByAccountNumber(string AccountNumber, vector <stClinet>& 
vClients) 
{ 
 stClinet Client; 
 char Answer = 'n'; 
 
 if (FindClientByAccountNumber(AccountNumber, vClients, Client)) 
 { 
  PrintClinetRecord(Client); 
 
  cout << "\n\nAre you sure you want Update client ? n/y ? "; 
  cin >> Answer; 
 
  if (Answer == 'y' || Answer == 'Y') 
  { 
   for (stClinet& C : vClients) 
   { 
    if (C.AccountNumber == AccountNumber) 
    { 
     C = ChangeClientRecord(AccountNumber); 
     break; 
    } 
   } 
 
   SaveClientsDataToFile(ClientsFileName, vClients); 
 
   // Refresh Clients 
   vClients = LoadClientsDataFromFile(ClientsFileName); 
 
   cout << "\n\n Client Deleted Successfully. \n"; 
   return true; 
  } 
 } 
 else 
 { 
  cout << "\nClient with Account Number (" << AccountNumber << ") is NOT Found! \n"; 
  return false; 
 } 
 
 
} 
 
 
int main() 
{ 
 // Problem #51 
 
 vector <stClinet> vClients = LoadClientsDataFromFile(ClientsFileName); 
 
 string AccountNumber = ReadClientAccountNumber(); 
 UpdateClientByAccountNumber(AccountNumber, vClients); 
 
 system("pause>0"); 
} 