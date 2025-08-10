// Check Leap Year
// Problem: Input a year and check whether it is a leap year.
// Step 1 : START
// Step 2: Input year
// Step 3: if it is divisile by 4 and not by 100 or if divisible by 400
//              print leap year
// Step 4: else
//              print not leap yaer
// Step 5: END
// Pseudo Code
// Step 1 : begin
// Step 2: Input yaer
// Step 3: if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0  )
//              Print leap year
//          else 
//              Print not leap year
// Step 4: END
#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter Year: "<<endl;
    cin>>year;
    if ( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ){
            cout<<"Leap year"<<endl;
    } else {
        cout<<"Not a leap year"<<endl;
    }
    return 0;
}