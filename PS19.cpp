#include <iostream> 
#include <cstdlib> 
 
using namespace std; 
 
int RandomNumber(int From, int To) 
{ 
// rand() int  87513 مثلا   عادة يكون الرقم كبير  يعطي رقم عشوائي = حجمه مثل 
 int RandNum = rand() % (To - From + 1) + From;  
// 87513 % "10" ( 10 - 1 +1 ) = 3 + 1 = 4 
 return RandNum; // 4 
 
} 
int main() 
{ 
 srand((unsigned)time(NULL)); 
 
 
 cout << RandomNumber(1, 10) << endl;  
 cout << RandomNumber(1, 10) << endl; 
 cout << RandomNumber(1, 10) << endl; 
}