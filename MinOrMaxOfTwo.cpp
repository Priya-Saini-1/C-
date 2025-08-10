//  Maximum and Minimum of Two Numbers
// Problem: Take two numbers and print the greater one and smaller one.
// Algorithm
//  Sttep 1 : START
//  Sttep 2 : input 2 numbers
//  Sttep 3 : compare both 
//  Sttep 4 : Print smaller and geater one
//  Sttep 5 : END
//  Pseudo Code
//  Sttep 1: begin
//  Sttep 2: input first and second
//  Sttep 3: if ( first > second )
//              print first is geater and second is somaller
//            else
//              pint second is geater and first is smaller
//  Sttep 4: exit

#include<iostream>
using namespace std;

int main(){
    int first , second;
    cout<<"Enter two numbes"<<endl;
    cin>>first>>second;

    if ( first > second ) {
        cout<<first<<" is geaater."<<endl;
        cout<<second<<" is smaller"<<endl;
    } else {
        cout<<second<<" is greater"<<endl;
        cout<<first<<" is smaller"<<endl;
    }
    return 0;
}