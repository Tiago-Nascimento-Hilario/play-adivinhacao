
#include <iostream>
using namespace std;
#include <clocale> // Biblioteca para suporte a localização
#include <random> // Biblioteca para geração de números aleatórios


int main(){

    setlocale(LC_ALL, "Portuguese"); // Configura a localização para português
   
    system("cls"); // Limpa a tela do console (funciona no Windows)
    cout << "********************************" << endl;
    cout << "* Bem vindo ao meu aplicativo! *" << endl;
    cout << "********************************" << endl;


    int numero_secreto = 7;
    int numero_informado;


    cout << "Digite um número entre 1 e 10: ";
    cin >> numero_informado;
    if (numero_informado == numero_secreto){
        cout << "Parabéns! Você acertou o número secreto!" << endl;
    } else {
        cout << "Que pena! O número secreto era " << numero_secreto << endl;
    }

    return 0;

}
