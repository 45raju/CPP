#include <iostream>
using namespace std;

int sumOfSquares(int num) {
    int sum = 0;
    while (num) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 1 && num != 4) {
        num = sumOfSquares(num);
    }

    cout << (num == 1 ? "Happy number" : "Not a happy number") << endl;
    return 0;
}

