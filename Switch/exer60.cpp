#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int num;


    cout << "Digite o m�s do ano em n�meros" << endl;
    cin >> num;

    switch(num)
    {
    case 1:
        cout <<"Janeiro";
        break;
    case 2:
        cout <<"Fevereiro";
        break;
    case 3:
        cout <<"Mar�o";
        break;
    case 4:
        cout <<"Abril";
        break;
    case 5:
        cout <<"Maio";
        break;
    case 6:
        cout <<"Junho";
        break;
    case 7:
        cout <<"Julho";
        break;
    case 8:
        cout <<"Agosto";
        break;
    case 9:
        cout <<"Setembro";
        break;
    case 10:
        cout <<"Outubro";
        break;
    case 11:
        cout <<"Novembro";
        break;
    case 12:
        cout <<"Dezembro";
        break;
    default:
        cout<<"Erro de Digita��o";
        break;
    }



}
