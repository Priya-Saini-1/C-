// Check Positive, Negative, or Zero
// Problem: Input a number and determine if it is positive, negative, or zero

// Algorithm
// Step 1 : START
// Step 2: Input num
// Step 3: Check whether it is greater, smaller or equal to zero
// Step 4: print Output
// Step 5: END
// Pseudo Code
// Step 1 : begin
// Step 2: Input num
// Step 3: if ( num > 0 )
//              Print positive
//          else if ( num < 0 )
//              Print negative
//          else 
//              Print zero
// Step 4: END

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if( num > 0 ){
        cout<<num<<" is Positive."<<endl;
    } else if ( num < 0 ) {
        cout<<num<<" is Negative."<<endl;
    } else {
        cout<<num<<", It's a zero."<<endl;
    }    
    return 0;
}