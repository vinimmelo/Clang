#include <iostream>
using namespace std;


int main() {
    int size;
    cout << "Says the size of the Half Square: ";
    cin >> size;
    for (int i = size; i > 0; i--) {
        for (int s = 0; s < i; s++) {
            cout << "#";
        }
        cout << "\n";
    }
}
