// factorial of a number
// Algorithm
// Step 1: START
// Step 2: input num
// Step 3: multiply from 1 to num using loop
// Step 4: print factorial
// Step 5: end
// Pseudo code
// Step 1: begin
// Step 2: input num
// Step 3: for ( int i = 1; i <= num; i++ ){
//          fact *= i;
//    }
// Step 4: print fact
// Step 5: end
#include <iostream>
using namespace std;
int main() {
    int num, fact = 1;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    for ( int i = 1; i <= num; i++ ){
        fact *= i;
    }
    cout<<"Factorial of "<<num<<" = "<<fact<<endl;
    return 0;
}