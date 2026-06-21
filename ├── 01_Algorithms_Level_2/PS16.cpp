/*
Description: Write a program to print all possible words 
combination from AAA to ZZZ. 
*/
#include <iostream> 
 
using namespace std; 
 
void PrintWordsFromAAAtoZZZ() 
{ 
 cout << "\n"; 
 string Word = ""; 
 
 for (int i = 65; i <= 90 ; i++) // 65 <= 90 ? | 66 <= 90 ? ..... 
 { 
  for (int j = 65; j <= 90 ; j++)  // 65 <= 90 ? | 66 <= 90 ? 
 
  { 
 
   for (int k = 65; k <= 90; k++) // 65 <= 90 ? | 66 <= 90 
 
   { 
    Word = Word + char(i);  // A ... 
    Word = Word + char(j);  // A | B ... 
    Word = Word + char(k);  // A , B ... | A , B 
 
    cout << Word << endl;  // AAA | AAB .... | ZZZ 
 
    Word = "";  //  ء ال شي "  فارغ "  الى  المتغير إرجاع 
 
   } 
  } 
  cout << "\n______________________________\n"; 
 } 
} 
 
int main() 
{ 
 PrintWordsFromAAAtoZZZ(); 
} 
