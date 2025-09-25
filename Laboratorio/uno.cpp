#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, somma, differenza;

    cout << "Inserisci il primo numero: ";
    cin >> numero1;

    cout << "Inserisci il secondo numero: ";
    cin >> numero2;

    somma = numero1 + numero2;
    differenza = numero1 - numero2;

    cout << "La somma dei due numeri è: " << somma << endl;
    cout << "La differenza (primo - secondo) è: " << differenza << endl;

    return 0;
}
