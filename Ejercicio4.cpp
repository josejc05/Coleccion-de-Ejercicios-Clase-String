#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence = "El lenguaje C++ es poderoso.";
    string sub_str = "C++";

    size_t pos = sentence.find(sub_str);

    if (pos != string::npos) {
        cout << "Subcadena encontrada en la posicion: " << pos << endl;
        sentence.replace(pos, sub_str.length(), "Python");
        cout << "Cadena resultante: " << sentence << endl;
    } else {
        cout << "Subcadena no encontrada." << endl;
    }

    return 0;
}
