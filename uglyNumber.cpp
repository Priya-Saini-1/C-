#include <iostream>
using namespace std;

bool isUgly(int num) {
    if (num <= 0) return false;

    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;

    return num == 1;
}

int main() {
    int number;
    cout << "Enter a number to check if it's Ugly: ";
    cin >> number;

    if (isUgly(number))
        cout << number << " is an Ugly number." << endl;
    else
        cout << number << " is not an Ugly number." << endl;

    return 0;
}
