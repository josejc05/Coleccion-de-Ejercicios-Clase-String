#include <iostream>
#include <string>

using namespace std;

string extraerSubcadena(const string& cadena, size_t inicio, size_t longitud) {
    return cadena.substr(inicio, longitud);
}

string insertarPrefijo(const string& cadena, const string& prefijo) {
    return prefijo + cadena;
}

int main() {
    const string textoOriginal = "Inteligencia Artificial";
    const string subcadenaExtraida = extraerSubcadena(textoOriginal, 13, 9);
    const string resultadoFinal = insertarPrefijo(textoOriginal, "La ");

    cout << "Cadena original: " << textoOriginal << '\n'
         << "Subcadena extraida: " << subcadenaExtraida << '\n'
         << "Resultado final: " << resultadoFinal << '\n';

    return 0;
}
