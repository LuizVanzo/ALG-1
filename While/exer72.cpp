#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    int contador, soma, todos, media;


    contador=0;
    todos=0;
    do{
        cout << "Informe um n�mero: "<<endl;
        cin >> n;
        if(n > 0 && n < 5000)
        {
        soma = soma + n;
        todos++;
        }else if(n != 0)
        {
         cout<<"informe um n�mero v�lido"<<endl;
        }
    }while(n != 0);
    media = soma / todos;
    cout<<"Foram digitados "<<todos<< " n�meros"<<endl;
    cout<<"A m�dia �: "<<media<<endl;
    cout<<"A soma dos n�meros � "<<soma;

}

