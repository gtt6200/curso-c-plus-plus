#include <iostream>

using namespace std;

int main() {
    string a = "su edad es: ";
    int edad = 14;
    const char letra = 'A';
    int lista_edades[] = {12,14,100,28};
    lista_edades[2] = 99;
    cout << a << endl;
    cout << edad << endl;
    cout << lista_edades[2] << endl;
    cout << letra;
}