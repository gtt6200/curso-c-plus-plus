#include <iostream>

using namespace std; 

int main(){
    int a = 2;
    int b = 3;
    b += 1;
    int edades[] = {12,12,23,25,25,24,47,36};

    cout << sizeof (edades) / b << endl;
    for (int i : edades)
    {
       cout << i << " anos" << endl;
    }
    
}