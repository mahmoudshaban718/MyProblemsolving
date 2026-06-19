/*
Description: Write a program to fill an array with generated 
random keys. 
*/
#include <iostream> 
#include <cstdlib> 
using namespace std; 
int RandomNumber(int From, int To) 
{ 
 int RandNum = rand() % (To - From + 1) + From; 
 return RandNum; // 110 
} 
enum enCharTayp { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 
3, Digit = 4 }; 
 
char GetRandomCharacter(enCharTayp CharType) 
{ 
 switch (CharType) 
 { 
 
 case enCharTayp::SmallLetter: 
 { 
  return char(RandomNumber(97, 122));  
  break; 
 } 
 
 case enCharTayp::CapitalLetter: 
 { 
  return char(RandomNumber(65, 90)); 
  break; 
 } 
 
 case enCharTayp::SpecialCharacter: 
 { 
  return char(RandomNumber(33, 47)); 
  break; 
 } 
 
 case enCharTayp::Digit: 
 { 
  return char(RandomNumber(48, 57)); 
  break; 
 } 
 
 } 
} 
void PrintStringArray(string arr[100], int arrLength) 
{ 
 cout << "\nArray elements : \n\n"; 
 for (int i = 0; i < arrLength; i++) 
 { 
  cout << "Array [" << i << "] : "; 
  cout << arr[i] << "\n"; 
 } 
 cout << endl; 
} 
int ReadPositiveNumber(string Message) 
{ 
 int Number; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number; 
 } while (Number < 0); 
 
 return Number; 
} 

string GenerateWord(enCharTayp CharType, short Length) 
{ 
 string Word; 
 
 for (int i = 1; i <= Length; i++)  // 1 <= 4 ? | 2 <= 4 ... 
 { 
  Word += GetRandomCharacter(CharType); 
 } 
 return Word; 
} 
 
string GenerateKey() 
{ 
 string Key = ""; 
 
 Key = GenerateWord(enCharTayp::CapitalLetter, 4) + "-"; 
 Key = Key + GenerateWord(enCharTayp::CapitalLetter, 4) + "-"; 
 Key = Key + GenerateWord(enCharTayp::CapitalLetter, 4) + "-"; 
 Key = Key + GenerateWord(enCharTayp::CapitalLetter, 4); 
 
 return Key; 
} 
 
void FillArrayWithKeys(string arr[100] , int arrLength) 
{ 
 for (int i = 0; i < arrLength ; i++) 
 { 
  arr[i] = GenerateKey(); 
 } 
} 
 
int main() 
{ 
 srand((unsigned)time(NULL));
 
 
 string arr[100]; 
 int arrLength = 0; 
 arrLength = ReadPositiveNumber("How many keys do you want to generate ?"); 
 
 FillArrayWithKeys(arr, arrLength); 
 PrintStringArray(arr, arrLength); 
} 
