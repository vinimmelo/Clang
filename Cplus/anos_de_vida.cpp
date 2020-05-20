#include "iostream"
using namespace std;

int main() {
    int dias, anos;
    cout << "Quantos dias você já viveu? ";
    cin >> dias;
    anos = dias / 365;
    cout << "Você já viveu " << anos << " anos";

    if (anos >= 18) {
        cout << "Você também já é maior de idade, parabéns!";
    }
}


