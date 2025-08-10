// Check if Character is Alphabet or Not
// Problem: Input a character and check if it is an alphabet.

// Algorithm
// Step 1 : START
// Step 2: Input char
// Step 3: Check wheather it ia alphabet or not ( check if it is in the range or not )
// Step 4: print Output
// Step 5: END
// Pseudo Code
// Step 1 : begin
// Step 2: Input char
// Step 3: if(( ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ){
//     print Alphabet
// } else {
//      print Not Alphabet
// }
// Step 4: END

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:  "<<endl;
    cin>>ch;
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ){
        cout<<ch<<" is an Alphabet."<<endl;
    } else {
        cout<<ch<<" is not an alphabet."<<endl;
    }
    
    return 0;
}