#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));


    int x, numero, contador, menor, maior, soma, media;

    do
    {
        cout<<"Informe um n�mero entre 0 e 10"<<endl;
        cin >> x;
    }
    while(x < 0 || x > 10);

    contador = 1;
    soma = 0;
    while(x >= contador)
    {
        numero = rand()%101;
        if(contador == 1)
        {
        menor = numero;
        maior = numero;
        }
        if(numero < menor)
        {
            menor = numero;
        }
        else if(numero > maior)
        {
            maior = numero;
        }
        contador++;
        soma = soma + numero;
    }
    media = soma/x;
    cout<<"O Menor n�mero �: "<<menor<<endl;
    cout<<"O Maior n�mero �: "<<maior<<endl;
    cout<<"A m�dia �: "<<media<<endl;
}


