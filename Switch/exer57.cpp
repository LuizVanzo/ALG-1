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
        cout <<"Seu DDD é de Brasília";
        break;
    case 71:
        cout <<"Seu DDD é de Salvador";
        break;
    case 11:
        cout <<"Seu DDD é de São Paulo";
        break;
    case 21:
        cout <<"Seu DDD é do Rio de Janeiro";
        break;
    case 32:
        cout <<"Seu DDD é de Juiz de Fora";
        break;
    case 19:
        cout <<"Seu DDD é de Campinas";
        break;
    case 27:
        cout <<"Seu DDD é de Vitória";
        break;
    case 31:
        cout <<"Seu DDD é de Belo Horizonte";
        break;
    default:
        cout<<"DDD não cadastrado!";
        break;
    }



}




