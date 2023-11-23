#include <iostream>
#include <string>

using namespace std;
int main() {
    string phrase = "Hello, World!";
    cout << "Frase: " << phrase << std::endl;

    string sentence = "OpenAI is a leading AI research lab.";
    cout << "Tamano de la cadena: " << sentence.size() << std::endl;
    cout << "¿Esta la cadena vacia? " << (sentence.empty() ? "Si" : "No") << std::endl;

    return 0;
}