#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL)); // para gerar números diferentes a cada execução do programa


    int numeroGerado, numeroDigitado, tentativa;
    numeroGerado = rand() % 76; //intervalo 0..75
    tentativa  = 0;

    do{
        tentativa++;


        cout << "\nInforme um numero (" << tentativa << "ª tentativa):";
        cin >> numeroDigitado;

        if(numeroDigitado > numeroGerado)
            cout << "O valor digitado é maior que o número gerado!\n";
        if(numeroDigitado < numeroGerado)
            cout << "O valor digitado é menor que o número gerado!\n";


    }while(tentativa<6 && numeroDigitado!=numeroGerado);


    if(numeroDigitado == numeroGerado){
        cout << "Parabens, você acertou o número gerado na " << tentativa << "ª tentativa!\n";
    }
    else{
        cout << "Você não acertou :( O número gerado é: " << numeroGerado << endl;
    }
}

