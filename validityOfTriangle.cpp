// Check Valid Triangle
// Problem: Input three angles and check whether they form a valid triangle (sum = 180).

// Algorithm
// Step 1 : START
// Step 2: Input three angles
// Step 3: Check sum of them is equal to 180 o not
// Step 4: print Output
// Step 5: END
// Pseudo Code
// Step 1 : begin
// Step 2: Input fist, second and third
// Step 3: if ( first + second + third == 180 )
//              Print valid triangle
//          else 
//              Print not valid triangle
// Step 4: END

#include<iostream>
using namespace std;
int main(){
    int first , second, third;
    cout<<"Enter three numbes"<<endl;
    cin>>first>>second>>third;
    if( first + second + third == 180 ){
        cout<<"They form a valid triangle"<<endl;
    } else {
        cout<<"They do not form a valid triangle"<<endl;
    }
    
    return 0;
}