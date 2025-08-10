// Pentaanacci series 
// Algorithm
// Step 1: START
// Step 2: input num and declare other 5 variable set values 0, 1, 1, 1 and 1.
// Step 3: store sum of all in next and assign each others value , do it reapeatedly using loop
// Step 4: print t2
// Step 5: end
// Pseudo code
// Step 1: begin
// Step 2: input num, set t1, t2, t3, t4, t5 as 0, 1, ,1 ,1 and 1 respectively
// Step 3:for ( int i = 1; i < n; i++ ){
//               next = t1 + t2 + t3;
//               t1 = t2;
//               t2 = t3;
//               t3 = t4;
//               t4 = t5;
//               t5 = next;
//               print t2
//          }
// Step 4: end
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;
    int t1 = 0, t2 = 1, t3 = 1, t4 = 1, t5 = 1, next;
    cout<<"Pentanacci series:"<<endl;
    cout<<t1<<endl;
    for ( int i = 1; i < n; i++ ){
        cout<<t2<<endl;
        next = t1 + t2 + t3 + t4 + t5;
        t1 = t2;
        t2 = t3;
        t3 = t4;
        t4 = t5;
        t5 = next;
    }
    return 0;
}