#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float preco,desc;
    int cod;


    cout << "Digite o pre�o do produto" << endl;
    cin >> preco;

    cout << "Digite o C�digo da condi��o de pagamento(1,2,3 ou 4)" << endl;
    cin >> cod;

    switch(cod)
    {
    case 1:
        desc = preco - ((10.0/100.0) * preco);
        cout << "� vista em dinheiro, recebe 10% de desconto ficando um total de " << desc;
        break;
    case 2:
        desc = preco - ((5.0/100.0) * preco);
        cout << "� vista no cart�o de cr�dito, recebe 5% de desconto ficando um total de " << desc;
        break;
    case 3:
        desc = preco / 2;
        cout<< "Em duas vezes, pre�o normal de etiqueta sem juros ficando um total de "<< desc;
        break;
    case 4:
        desc = (preco*0.10)*3;
        cout<<"Em tr�s vezes, pre�o normal de etiqueta mais juros de 10%, o juros ficar� de "<< desc;
        break;

    default:
        cout<<"ERRO!";
        break;
    }



}




