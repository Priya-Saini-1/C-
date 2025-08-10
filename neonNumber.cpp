// Neon Number : the sum of digits of its square is equal to the number itself.
// 9 is a Neon number: 
// Algorithm
// Step 1; start
// Step 2; input num 
// Step 3; square of num
// Step 4; add digits of num
// Step 5; check if it is equal to original or not 
// Step 6; print neon or not
// Step 7; end
// Pseudo code
// Step 1; start
// Step 2; input num 
// Step 3; square of num
// Step 4; while ( num != 0){
//         r = num % 10;
//         sum += r;
//         num /= 10;
//     }
// Step 5; if ( sum == t ){
//         print neon 
//     } else {
//        print not neon
//         }
// Step 6; end

#include <iostream>
using namespace std;
int main(){
    int num, r, t, sum = 0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    t = num;
    num *= num;
    while ( num != 0){
        r = num % 10;
        sum += r;
        num /= 10;
    }
    if ( sum == t ){
        cout<<t<<" is neon number"<<endl;
    } else {
        cout<<t<<" is not a neon number"<<endl;
    }
    return 0;
}