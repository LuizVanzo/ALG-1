#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    srand(time(NULL)); // para gerar n�meros diferentes a cada execu��o do programa


    int numeroGerado, numeroDigitado, tentativa;
    numeroGerado = rand() % 76; //intervalo 0..75
    tentativa  = 0;

    do{
        tentativa++;


        cout << "\nInforme um numero (" << tentativa << "� tentativa):";
        cin >> numeroDigitado;

        if(numeroDigitado > numeroGerado)
            cout << "O valor digitado � maior que o n�mero gerado!\n";
        if(numeroDigitado < numeroGerado)
            cout << "O valor digitado � menor que o n�mero gerado!\n";


    }while(tentativa<6 && numeroDigitado!=numeroGerado);


    if(numeroDigitado == numeroGerado){
        cout << "Parabens, voc� acertou o n�mero gerado na " << tentativa << "� tentativa!\n";
    }
    else{
        cout << "Voc� n�o acertou :( O n�mero gerado �: " << numeroGerado << endl;
    }
}

