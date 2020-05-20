#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Says the size of the Half Square: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        for (int s = 0; s < size; s++) {
            cout << "#";
        }
        cout << "\n";
    }
}

