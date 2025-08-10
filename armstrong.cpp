// Armstrong number
// Algorithm
// Step 1: START
// Step 2: input num
// Step 3: Calculate number of digits and store in digits variable
// Step 4: Now add sum and the digit having power same as no of digits
// Step 5: check if it's equal to original no.
// Step 6: print output
// Step 7: end

// Pseudo code
// Step 1: begin
// Step 2: input num
// Step 3: while ( num != 0 ) {
//            digits++;
//            num = num / 10;
//         }
// Step 4: while ( num != 0 ) {
//                r = num % 10;
//               sum = sum + pow(r, digits);
//               num /= 10;
//           }
// Step 5: if sum = t 
//              print armstrong
//          else
//              print not armstrong
// Step 6: end
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, digits = 0, t, r;
    cout << "Enter a number: ";
    cin >> num;
    t = num;

    while ( num != 0 ) {
        digits++;
        num = num / 10;
    }
    num = t;

    while ( num != 0 ) {
        r = num % 10;
        sum = sum + pow(r, digits);
        num /= 10;
    }

    if ( sum == t)
        cout << t << " is an Armstrong number." << endl;
    else
        cout << t << " is not an Armstrong number." << endl;

    return 0;
}
