#include<iostream>
#include<string.h>
using namespace std;
int main() {
   cout<<"Enter the message:\n";
   char msg[100];
   cin.getline(msg,100); //take the message as input
   int i, j, len,sel,key;
   cout << "Enter key: ";
   cin >> key; //take the key as input
   len = strlen(msg);
   cout<<"Enter your sel \n1. Encryption \n2. Decryption \n";
   cin>>sel;
   //Encryption
   if (sel==1){
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         //Lowercase
         if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if (ch > 'z') {
               ch = ch - 'z' + 'a' - 1;
            }  
            msg[i] = ch;
         }
         //Decryption
         else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
            msg[i] = ch;
         }
      }
      printf("Encrypted message: %s", msg);
   }
   //Decryption
   else if (sel == 2) {
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         //Lowercase
         if(ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if(ch < 'a'){
               ch = ch + 'z' - 'a' + 1;
            }
            msg[i] = ch;
         }
         //Uppercase
         else if(ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if(ch < 'A') {
               ch = ch + 'Z' - 'A' + 1;
            }
            msg[i] = ch;
         }
      }
      cout << "Decrypted message: " << msg;
   }
}