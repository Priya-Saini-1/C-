// Check wheather the number is perfect or not
// Algorithm
// Step 1: START
// Step 2: input num and divide by 2
// Step 3: add numbers divisible by given number by using loop from 1 to num / 2
// Step 4: if sum is equal to original number 
//              print perfect number
//          else
//              print not perfect number
// Step 5: end
// Pseudo code
// Step 1: begin
// Step 2: input num and divide it by 2
// Step 3: for ( int i = 1; i <= num; i ++ ){
//               if ( (num*2) % i == 0 ) {
//                   sum += i;
//               } 
//           }
// Step 4: if ( sum == num*2 ) {
//               cout<<sum<<" is a perfect number"<<endl;
//           } else {
//               cout<<num*2<< sum<<" is not a perfect number"<<endl;
//           }
// Step 5: end
#include <iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout<<"Enter a number to check if it's perfect or not: "<<endl;
    cin>>num;
    num /= 2;
    for ( int i = 1; i <= num; i ++ ){
        if ( (num*2) % i == 0 ) {
            sum += i;
        } 
    }
    if ( sum == num*2 ) {
        cout<<sum<<" is a perfect number"<<endl;
    } else {
        cout<<num*2<< sum<<" is not a perfect number"<<endl;
    }
     
     return 0;
}