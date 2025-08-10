//Check Even or Odd
// Problem: Take a number and check whether it is even or odd.

// Algorithm
// Step 1 : START
// Step 2: Input num
// Step 3: Check divisibility by 2
// Step 4: print Output
// Step 5: END
// Pseudo Code
// Step 1 : begin
// Step 2: Input num
// Step 3: if ( num % 2 == 0 )
//              Print even
//          else 
//              Print odd 
// Step 4: END

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if( num % 2 == 0 ){
        cout<<num<<" is Even."<<endl;
    } else {
        cout<<num<<" is Odd"<<endl;
    }
    
    return 0;
}