
#include <iostream>
using namespace std;


int main() {
    int hash[256] = {0};

    string str;
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
       hash[str[i]]++;
    }
    cout << "Character frequencies:" << endl;
    cout<<"enter the number of queries: ";
   int q;
   cin>> q;

   while (q--) 
   {

         cout << "Enter a character to query its frequency: ";
       char c;
       cin >> c;
       cout << hash[c] << endl;
   }
  
   
    

    return 0;
}
