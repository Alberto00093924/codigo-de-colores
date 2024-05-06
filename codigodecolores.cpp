#include <iostream>

using namespace std;

int main() {
     char letra;

     cout <<"Ingrese una letra:";
     cin >> letra;

     switch (letra) {
         case 'R':
            cout <<"Rojo"<< endl;
             break;
         case 'Y':
             cout <<"Amarillo"<< endl;
             break;
        case 'B':
            cout <<"Azul"<< endl;
             break;
        case 'W':
            cout <<"Blanco"<< endl;
            break;
        case 'K':
            cout <<"Negro"<< endl;
            break;
        case 'C':
            cout <<"Cian"<< endl;
            break;
        case 'G':
            cout <<"Verde"<< endl;
            break;
        default:
            cout <<"Letra no reconocida." << endl;
            break;
         }
       return 0;
}