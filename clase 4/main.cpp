#include <iostream>

using namespace std;

int main(){
    //bool resultado =  !true;          falso
    //bool resultado = true && true;    verdadero
    // bool resultado = true || false;  verdadero
    // cout << resultado; 

    int edad = 0;
    cout << "Ingrese su edad: ";
    cin  >> edad;

    if (edad < 18){
        cout << "No sea payaso no es mayor de edad";
    }else if (edad > 40){
        cout << "sigue sin jalar";
    }else {
        cout << " ahora si";
    }
    
}