#include <iostream> 
#include <string> 
#include <iomanip> 
#include <vector> 
#include <fstream> 
 
using namespace std; 
 
// Problem #47 
 
const string ClientsFileName = "Clients.txt"; 
 
// Problem #45 
 
struct stClinet 
{ 
 string AccountNumber = ""; 
 string PinCode = ""; 
 string Name = ""; 
 string Phone = ""; 
 int AccountBalance = 0; 
 
}; 
 
// Problem #37 
 
vector <string> SplitString(string S9, string Delim) 
{ 
 vector <string> vString; 
 
 short pos = 0; 
 string sWord; // define a string variable 
 
 // use fine() function to get the position of the delimiters 
 while ((pos = S9.find(Delim)) != std::string::npos) 
 { // S9.find(delim)   الفراغ - الحد (  اوجد // 
 
  sWord = S9.substr(0, pos); 
 
 
  if (sWord != "") 
  { 
   vString.push_back(sWord); 
  }  // الحد +  األحرف عدد  الى 0( من  احذف // 
 
  // erase() until positon and move to next word 
  S9.erase(0, pos + Delim.length()); 
 } 
//  النص  من األخيرة  الكلمة  طباعة  //
 
 if (S9 != "") 
 { 
  // it print last word of the string 
  vString.push_back(S9); 
 
 } 
 return vString; 
 
} 
 
 
 
 
  
// Problem #46 
 
stClinet CounvertLineToRecord(string Line, string Separator = "#//#") 
{ 
 stClinet Clinet; 
 vector <string> vClinetData; 
 
 vClinetData = SplitString(Line, Separator); 
 
 Clinet.AccountNumber = vClinetData[0]; 
 Clinet.PinCode = vClinetData[1]; 
 Clinet.Name = vClinetData[2]; 
 Clinet.Phone = vClinetData[3]; 
 Clinet.AccountBalance = stod(vClinetData[4]); // case string to double 
 
 return Clinet; 
 
} 
 
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
 
void PrintClientRecord(stClinet Client) 
{ 
 cout << "| " << left << setw(15) << Client.AccountNumber; 
 cout << "| " << left << setw(10) << Client.PinCode; 
 cout << "| " << left << setw(30) << Client.Name; 
 cout << "| " << left << setw(12) << Client.Phone; 
 cout << "| " << left << setw(12) << Client.AccountBalance; 
 
} 
 
 
 
 
 
 
 
 
  
void PrintAllClientsData(vector <stClinet> vClients) 
{ 
 cout << "\n\t\t\t\t\t Client List (" << vClients.size() << ")  Client(s). "; 
 cout << "\n---------------------------------------------------------"; 
 cout << "-------------------------------------------\n" << endl; 
 
 cout << "| " << left << setw(15) << "Account Number"; 
 cout << "| " << left << setw(10) << "Pin Code "; 
 cout << "| " << left << setw(30) << "Client Name"; 
 cout << "| " << left << setw(12) << "Phone "; 
 cout << "| " << left << setw(12) << "Balance "; 
 
 cout << "\n---------------------------------------------------------"; 
 cout << "-------------------------------------------\n" << endl; 
 
 for (stClinet Client : vClients) 
 { 
  PrintClientRecord(Client); 
   
  cout << endl; 
 } 
 
 cout << "\n---------------------------------------------------------"; 
 cout << "-------------------------------------------\n" << endl; 
} 
 
int main() 
{ 
 // Problem #48 
  
 vector <stClinet> vClient = LoadClientsDataFromFile(ClientsFileName); 
  
 PrintAllClientsData(vClient); 
 
 system("pause>0"); 
}