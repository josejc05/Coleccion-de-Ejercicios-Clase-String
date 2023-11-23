#include <iostream>
#include <string>

using namespace std;
int main() {
    string str1 = "Hola ";
    string str2 = "mundo!";
    
    string str3 = str1;
    str3.append(str2);
    
    cout << "Cadena resultante: " << str3 << endl;

    return 0;
}
