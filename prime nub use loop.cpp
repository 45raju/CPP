#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cout << "Enter an integer: ";
    cin >> num;

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime && num > 1 ? "Prime" : "Not Prime") << endl;

    return 0;
}

