#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float peso,pesopla;
    int cod;


    cout << "Digite o seu Peso" << endl;
    cin >> peso;

    cout << "Digite o Código do planeta desejado(1-Mercúrio,2-Vênus,3-Marte,4-Júpiter,5-Saturno e 6-Urano)" << endl;
    cin >> cod;

    switch(cod)
    {
    case 1:
        pesopla = (peso / 10.0) * 0.37;
        cout << "Seu peso em Mercúrio é "<< pesopla<<"Kg";
        break;
    case 2:
        pesopla = (peso / 10.0) * 0.88;
        cout << "Seu peso em Vênus é "<< pesopla<<"Kg";
        break;
    case 3:
        pesopla = (peso / 10.0) * 0.38;
        cout << "Seu peso em Marte é "<< pesopla<<"Kg";
        break;
    case 4:
        pesopla = (peso / 10.0) * 2.64;
        cout << "Seu peso em Júpiter é "<< pesopla<<"Kg";
        break;
    case 5:
        pesopla = (peso / 10.0) * 1.15;
        cout << "Seu peso em Saturno é "<< pesopla<<"Kg";
        break;
    case 6:
        pesopla = (peso / 10.0) * 1.17;
        cout << "Seu peso em Urano é "<< pesopla<<"Kg";
        break;
    default:
        cout<<"Código inválido!";
        break;
    }



}





