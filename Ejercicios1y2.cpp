#include <iostream>
#include <string>

using namespace std;
void mostrarFrase(const string& frase) {
    cout << "Frase: " << frase << endl;
}

void mostrarInfoCadena(const string& cadena) {
    cout << "Tamano de la cadena: " << cadena.size() << endl;
    cout << "¿Esta la cadena vacia? " << (cadena.empty() ? "Si" : "No") << endl;
}

int main() {
    string phrase = "Hello, World!";
    mostrarFrase(phrase);
    
    string sentence = "OpenAI is a leading AI research lab.";
    mostrarInfoCadena(sentence);

    return 0;
}
