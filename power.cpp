//  Power  a of base b
// Algorithm
// Step 1: START
// Step 2: input power and base
// Step 3: multiply base power times using loop
// Step 4: print value
// Step 5: end
// Pseudo code
// Step 1: begin
// Step 2: input base and power
// Step 3: for ( int i = 0; i < power; i++ ){
//          value *= base;
//    }
// Step 4: print value
// Step 5: end
#include <iostream>
using namespace std;

int main(){
    int power, base, value = 1;
    cout<<"Enter a number: "<<endl;
    cin>>base;
    cout<<"Enter the power: "<<endl;
    cin>>power;
    for ( int i = 0; i < power; i++ ){
        value *= base;
    }
    cout<<base<<" power "<<power<<" = "<<value<<endl;
    return 0;
}