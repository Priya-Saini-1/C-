// Maximum of Three Numbers
// Problem: Input 3 numbers and find the largest one.
// Algorithm
//  Sttep 1 : START
//  Sttep 2 : input 3 numbers
//  Sttep 3 : compare all
//  Sttep 4 : Print geater one
//  Sttep 5 : END
//  Pseudo Code
//  Sttep 1: begin
//  Sttep 2: input first second and third
//  Sttep 3: if ( first > second ){
//              if ( first > third )
//                  print first is greater 
//            else
//                  print third is greater
//          } else {
//              if ( second > third )
//                  print second is greater
//              else
//                  print third is geater
//          }
//  Sttep 4: exit

#include<iostream>
using namespace std;

int main(){
    int first , second, third;
    cout<<"Enter three numbes"<<endl;
    cin>>first>>second>>third;

    if ( first > second ){
             if ( first > third )
                 cout<<first<<" is greater"<<endl;
             else
                 cout<<third<<" is greater"<<endl;
    } else {
             if ( second > third )
                 cout<<second<<" is greater"<<endl;
             else
                 cout<<third<<" is greater"<<endl;
         }
    return 0;
}