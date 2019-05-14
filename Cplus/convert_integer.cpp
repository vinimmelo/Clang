#include <iostream>
using namespace std;


int convertToNumber() {
    char digit;
    cout << "Enter a one-digit number: ";
    digit = cin.get();
    int sum = digit - 48;
    cout << "Integer: " << sum << endl;

}

int main() {
    convertToNumber();
}
