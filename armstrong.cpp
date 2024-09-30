#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    do {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    } while (num1 != num2);

    cout << "GCD = " << num1 << endl;

    return 0;
}

