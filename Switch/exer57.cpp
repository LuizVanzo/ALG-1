#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int ddd;


    cout << "Digite o DDD Sendo eles(61,71,11,21,32,19,27 e 31)" << endl;
    cin >> ddd;

    switch(ddd)
    {
    case 61:
        cout <<"Seu DDD � de Bras�lia";
        break;
    case 71:
        cout <<"Seu DDD � de Salvador";
        break;
    case 11:
        cout <<"Seu DDD � de S�o Paulo";
        break;
    case 21:
        cout <<"Seu DDD � do Rio de Janeiro";
        break;
    case 32:
        cout <<"Seu DDD � de Juiz de Fora";
        break;
    case 19:
        cout <<"Seu DDD � de Campinas";
        break;
    case 27:
        cout <<"Seu DDD � de Vit�ria";
        break;
    case 31:
        cout <<"Seu DDD � de Belo Horizonte";
        break;
    default:
        cout<<"DDD n�o cadastrado!";
        break;
    }



}




