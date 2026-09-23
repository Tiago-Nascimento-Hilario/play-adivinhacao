
#include <iostream>
using namespace std;
#include <clocale> // Biblioteca para suporte a localização
#include <random>  // Biblioteca para geração de números aleatórios
#include <thread>
#include <chrono> // Biblioteca para manipulação de tempo

int main()
{

    setlocale(LC_ALL, "Portuguese");           // Configura a localização para português
    random_device rd;                          // Objeto para gerar números aleatórios
    mt19937 gerador(rd());                     // Inicializa o gerador de números aleatórios
    uniform_int_distribution<> distrib(1, 10); // Distribuição uniforme entre 1
    int numero_secreto = distrib(gerador);     // Gera um número aleatório entre 1 e 10
    int numero_informado;
    int tentativas = 0;

    while (tentativas <= 3)
    {

        cout << "********************************" << endl;
        cout << "* Bem vindo ao meu aplicativo! *" << endl;
        cout << "********************************" << endl;
        cout <<"" << endl;
        cout << "Você tem mais " << 3 - tentativas << " tentativas." << endl;
        cout <<"" << endl;
        cout << "Digite um número entre 1 e 10: ";
        cin >> numero_informado;
        if (numero_informado == numero_secreto)
        {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            tentativas = 4; // Sai do loop
        }
        else
        {
            cout << "Que pena! O número secreto era " << numero_secreto << endl;
        }
        this_thread::sleep_for(chrono::seconds(3)); // Pausa por 3 segundos
        system("clear"); // Limpa a tela do console (funciona no Windows)

        tentativas++;
    }

    return 0;
}
