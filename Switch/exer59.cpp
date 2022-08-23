#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float preco,desc;
    int cod;


    cout << "Digite o preço do produto" << endl;
    cin >> preco;

    cout << "Digite o Código da condição de pagamento(1,2,3 ou 4)" << endl;
    cin >> cod;

    switch(cod)
    {
    case 1:
        desc = preco - ((10.0/100.0) * preco);
        cout << "À vista em dinheiro, recebe 10% de desconto ficando um total de " << desc;
        break;
    case 2:
        desc = preco - ((5.0/100.0) * preco);
        cout << "À vista no cartão de crédito, recebe 5% de desconto ficando um total de " << desc;
        break;
    case 3:
        desc = preco / 2;
        cout<< "Em duas vezes, preço normal de etiqueta sem juros ficando um total de "<< desc;
        break;
    case 4:
        desc = (preco*0.10)*3;
        cout<<"Em três vezes, preço normal de etiqueta mais juros de 10%, o juros ficará de "<< desc;
        break;

    default:
        cout<<"ERRO!";
        break;
    }



}




