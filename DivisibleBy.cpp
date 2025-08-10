//  Divisible by 5 and 11
// Problem: Input a number and check if it is divisible by both 5 and 11.

// Algorithm
// Step 1 : START
// Step 2: Input num
// Step 3: Check divisibility by 5 and 11
// Step 4: print Output
// Step 5: END
// Pseudo Code
// Step 1 : begin
// Step 2: Input num
// Step 3: if ( num % 5 == 0 && num % 11 == 0 )
//              Print divisible by both
//          else 
//              Print not divisble by both 
// Step 4: END

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if( num % 5 == 0 && num % 11 == 0 ){
        cout<<num<<" is divisible by both 5 and 11."<<endl;
    } else {
        cout<<num<<" is not divisible by both 5 and 11."<<endl;
    }
    
    return 0;
}