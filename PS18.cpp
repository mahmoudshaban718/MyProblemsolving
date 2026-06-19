/*
Description: Write a program to encrypt a text then decrypt it 
using a simple key encryption algorithm. 
*/
#include <iostream> 
#include <string> 
 
using namespace std; 
 
string ReadText() 
{ 
 string Text; 
 cout << "Pleas enter Text ? \n"; 
 getline(cin, Text); // Saeed 
 return Text; 
} 
 
string EncryptText(string Text, short EncryptionKey) 
{ 
 // Text = Saeed 
 // EncryptionKey = 2  
 
 for (int i = 0; i <= Text.length(); i++)   
 {  // Text.length() (  ( س إنديك تجزئة النص حرف حرف : موقع الحرف 
 
  Text[i] = char((int) Text[i] + EncryptionKey);  
 // Text[i] == (int) Text[S] == Text[83] + 2 == (char) Text[85] << U[0]; 
 
 } 
 return Text; // Ucggf 
} 
 
string DecryptionText(string Text, short EncryptionKey) 
{ 
 for (int i = 0; i <= Text.length(); i++)   
 { 
  Text[i] = char((int)Text[i] - EncryptionKey);  
 // Text[i] == (int) Text[U] == Text[85] - 2 == (char) Text[83] << S[0];  
 } 
 return Text;  // Saeed 
} 
 
int main() 
{ 
 const short EncryptionKey = 2; 
 
 string Text = ReadText(); 
 string TextAfterEncryption = EncryptText(Text, EncryptionKey); 
 string TextAfterDecryption = DecryptionText(TextAfterEncryption, 
EncryptionKey); 
 
  
 cout << endl << "Text Before Encryption : " << Text << endl; 
 cout << "Text After Encryption : " << TextAfterEncryption << endl; 
 cout << "Text After Decryption : " << TextAfterDecryption << endl; 
}