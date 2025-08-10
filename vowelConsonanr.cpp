// Check Vowel or Consonant
// Problem: Input a character and check whether it is a vowel or consonant.

// Algorithm
// Step 1 : START
// Step 2: Input char
// Step 3: Check wheather it ia vowel o not
// Step 4: print Output
// Step 5: END
// Pseudo Code
// Step 1 : begin
// Step 2: Input char
// Step 3: if( ch == 'a' || ch == 'A' ){
//     print vowel
// } else if( ch == 'e' || ch == 'E' ){
//      print vowel
// } else if( ch == 'i' || ch == 'I' ){
//      print vowel
// } else if( ch == 'o' || ch == 'O' ){
//      print vowel
// } else if( ch == 'u' || ch == 'U' ){
//      print vowel
// } else {
//      print Consonant
// }
// Step 4: END

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a Alphabet: "<<endl;
    cin>>ch;
    if( ch == 'a' || ch == 'A' ){
        cout<<ch<<" is a Vowel."<<endl;
    } else if( ch == 'e' || ch == 'E' ){
        cout<<ch<<" is a Vowel."<<endl;
    } else if( ch == 'i' || ch == 'I' ){
        cout<<ch<<" is a Vowel."<<endl;
    } else if( ch == 'o' || ch == 'O' ){
        cout<<ch<<" is a Vowel."<<endl;
    } else if( ch == 'u' || ch == 'U' ){
        cout<<ch<<" is a Vowel."<<endl;
    } else {
        cout<<ch<<" is a Consonant."<<endl;
    }
    
    return 0;
}