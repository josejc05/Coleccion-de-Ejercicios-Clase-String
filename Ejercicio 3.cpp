#include <iostream>
#include <string>

using namespace std;

int main() {
    string saludo = "Hola, ¿cómo has estado?";
    string respuesta = "Bien, gracias. ¿Y tú?";
    string respuesta2 = "Muy bien, ¿has tenido un buen día?";
    string respuesta3 = "Sí, ha sido productivo. ¿Y tú?";
    string despedida = "Genial. ¡Hasta luego!";

    string conversacion = saludo + " " + respuesta + " " + respuesta2 + " " + respuesta3 + " " + despedida;

    cout << "Conversación: " << conversacion << endl;

    return 0;
}
