// Palindrome number
// Algorithm
/// Step 1: START
// Step 2: input num
// Step 3: add digits of number
// Step 4: check if it's equal to original no.
// Step 5: print output
// Step 6: end

// Pseudo code
// Step 1: begin
// Step 2: input num, t = num
// Step 3: while ( num != 0 ) {
//                r = num % 10;
//               sum = sum + pow(r, digits);
//               num /= 10;
//           }
// Step 4: if sum = t 
//              print palindrome
//          else
//              print not palindrome
// Step 5: end
#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, r, t;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    t = num;
    while(num != 0 ){
        r = num % 10;
        sum = sum * 10 + r;
        num = num / 10;
    }
    if ( sum == t ) {
        cout<<t<<" is palindrome number."<<endl;
    } else {
        cout<<t<<" is not palindrome number."<<endl;
    }
    return 0;
}