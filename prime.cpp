// Check wheather the number is prime or not
// Algorithm
// Step 1: START
// Step 2: input num
// Step 3: Check it's divisibility from 2 to (num-1) by using loop
// Step 4: if it is divisible by any 
//              print not prime
//          else
//              print prime
// Step 5: end
// Pseudo code
// Step 1: begin
// Step 2: input num
// Step 3: for ( int i = 2; i < num; i ++ ){
//              if ( num % i == 0 ) {
//                  cout<<num<<" is not prime"<<endl;
//                  return 0;
//              } 
//          }
// Step 4: print prime if loop completes without matching the condition
// Step 5: end
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to check if it's prime or not: "<<endl;
    cin>>num;
    for ( int i = 2; i < num; i ++ ){
        if ( num % i == 0 ) {
            cout<<num<<" is not prime"<<endl;
            return 0;
        } 
    }
    cout<<num<<" is Prime."<<endl;
     
     return 0;
}