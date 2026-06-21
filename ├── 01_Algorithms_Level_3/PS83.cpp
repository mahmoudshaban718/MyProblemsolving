//Join String
#include <iostream> 
#include <string> 
#include <iomanip> 
#include <vector> 
using namespace std; 
// Problem #39 
string JoinString(vector <string> vString, string Delim) 
{ 
    string S1 = ""; 
for (string& s : vString) 
{ 
S1 = S1 + s + Delim; 
} 

return S1.substr(0, S1.length() - Delim.length());
} 
 
int main() 
{  
// Problem #39 
 
vector<string> vString2 = { "Mohammed","Faid","Ali","Maher" }; 
cout << "\nVector after join: \n"; 
cout << JoinString(vString2, "###"); 
system("pause>0"); 
} 