#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int codigo;


    cout << "Digite o C�digo de Origem " << endl;
    cin >> codigo;

    switch(codigo)
    {
    case 1:
        cout <<"A sua proced�ncia vem do Sul";
        break;
    case 2:
        cout <<"A sua proced�ncia vem do Norte";
        break;
    case 3:
        cout <<"A sua proced�ncia vem do Leste";
        break;
    case 4:
        cout <<"A sua proced�ncia vem do Oeste";
        break;
    case 5:
    case 6:
        cout <<"A sua proced�ncia vem do Nordeste";
        break;
    case 7:
    case 8:
    case 9:
        cout <<"A sua proced�ncia vem do Sudeste";
        break;
    case 10 ... 20:
        cout <<"A sua proced�ncia vem do Centro-Oeste";
        break;
    case 21 ... 30:
        cout <<"A sua proced�ncia vem do Nordeste";
        break;
    default:
        cout<<"N�o encontrado!";
        break;
    }



}





