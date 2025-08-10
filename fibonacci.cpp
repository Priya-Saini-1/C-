// Fibonacci series 
// Algorithm
// Step 1: START
// Step 2: input num and declare two variable last and next with values 0 and 1.
// Step 3: store sum of last and next in next and assign previous next to last , do it reapeatedly
// Step 4: print factorial
// Step 5: end
// Pseudo code
// Step 1: begin
// Step 2: input num
// Step 3: for ( int i = 1; i < n; i++ ){
//           print next
//           next = last + next;
//           last = next - last;
//         }
// Step 4: end
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of terms: "<<endl;
    cin>>n;
    int last = 0, next = 1;
    cout<<"Fibonacci series:"<<endl;
    cout<<last<<endl;
    for ( int i = 1; i < n; i++ ){
        cout<<next<<endl;
        next = last + next;
        last = next - last;
    }
    return 0;
}