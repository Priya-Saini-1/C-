// Strong Number 
// Algorithm
// Step 1; start
// Step 2; input num 
// Step 3; add factorial of digits using factorial function
// Step 4; if it is equal of original it's strong number else not
// Step 5; end
// Pseudo code
// Step 1; start
// Step 2; input num 
// Step 3;declare factorial function i.e. 
//          fact( int num ) {
//              int fact = 1;
//              for ( int i = 1; i <= num; i++ ){
//                  fact *= i;
//              }
//              return fact;
//          }
// Step 4;  while ( num != 0 ) {
//               r = num % 10;
//               sum = sum + fact(r);
//               num = num / 10;
//          }
// Step 5; if ( sum == t ){
//         print strong number
//     } else {
//        print not strong number
//         }
// Step 6; end
#include <iostream>
using namespace std;

int fact( int num ) {
    int fact = 1;
    for ( int i = 1; i <= num; i++ ){
        fact *= i;
    }
    return fact;
}

int main() {
    int num, sum = 0, digits = 0, t, r;
    cout << "Enter a number: ";
    cin >> num;
    t = num;

    while ( num != 0 ) {
        r = num % 10;
        sum = sum + fact(r);
        num = num / 10;
    }

    if ( sum == t)
        cout << t << " is an Strong number." << endl;
    else
        cout << t << " is not an Strong number." << endl;

    return 0;
}
