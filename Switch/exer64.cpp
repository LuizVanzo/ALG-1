#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float peso,pesopla;
    int cod;


    cout << "Digite o seu Peso" << endl;
    cin >> peso;

    cout << "Digite o C�digo do planeta desejado(1-Merc�rio,2-V�nus,3-Marte,4-J�piter,5-Saturno e 6-Urano)" << endl;
    cin >> cod;

    switch(cod)
    {
    case 1:
        pesopla = (peso / 10.0) * 0.37;
        cout << "Seu peso em Merc�rio � "<< pesopla<<"Kg";
        break;
    case 2:
        pesopla = (peso / 10.0) * 0.88;
        cout << "Seu peso em V�nus � "<< pesopla<<"Kg";
        break;
    case 3:
        pesopla = (peso / 10.0) * 0.38;
        cout << "Seu peso em Marte � "<< pesopla<<"Kg";
        break;
    case 4:
        pesopla = (peso / 10.0) * 2.64;
        cout << "Seu peso em J�piter � "<< pesopla<<"Kg";
        break;
    case 5:
        pesopla = (peso / 10.0) * 1.15;
        cout << "Seu peso em Saturno � "<< pesopla<<"Kg";
        break;
    case 6:
        pesopla = (peso / 10.0) * 1.17;
        cout << "Seu peso em Urano � "<< pesopla<<"Kg";
        break;
    default:
        cout<<"C�digo inv�lido!";
        break;
    }



}





