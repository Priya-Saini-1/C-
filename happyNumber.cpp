// Happy Number : epeatedly summing the squares of its digits eventually leads to 1
// 19 is a Neon number: 
#include <iostream>
using namespace std;
int main(){
    int num, r, t, sum = 0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    t = num;
    if ( num <= 9 && num >= 2 && num != 7 ){
        cout<<num<<" not happy number"<<endl;
        return 0;
    } else {
        while (sum / 10 != 0 )
        {
        while ( num != 0){
            r = num % 10;
            sum += r*r;
            num /= 10;
        }
        num = sum;
        }
    }
    
    if ( sum == 1 ){
        cout<<t<<" is happy number"<<endl;
    } else {
        cout<<t<<" is not a happy number"<<endl;
    }
    return 0;
}