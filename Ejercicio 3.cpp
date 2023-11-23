#include <iostream>
#include <string>

using namespace std;

string concatenarCadenas(const string& str1, const string& str2) {
    return str1 + str2;
}

int main() {
    string saludo = "Hola ";
    string mundo = "mundo!";
    string resultado = concatenarCadenas(saludo, mundo);

    cout << "Cadena resultante: " << resultado << endl;

    return 0;
}
