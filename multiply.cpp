// Multiply any number by any without using " * " and other function or multiplication using goto
// Algorithm
// Step 1; start
// Step 2; input two number
// Step 3;  add first number , second num times using goto with condition so that it does not become infinty loop
// Step 4; print multiplied value
// Pseudo code
// Step 1; begin
// Step 2; input num , num2
// Step 3; multiply += num , and num2-- till num2 = 1 using goto
// Step 4; print multiply
// Step 5; end
#include <iostream>
using namespace std;

int main(){
    int num, num2, i = 1, multiply = 0;
    cout<<"Enter a number to multiply"<<endl;
    cin>>num;
    cout<<"Enter another number:"<<endl;
    cin>>num2;
    label:
    multiply += num;

    if( num2 != 1){
        num2--;
        goto label;
    }
    
    // goto label;
        cout<<"After multiplication : "<<multiply<<endl;
    return 0;
}