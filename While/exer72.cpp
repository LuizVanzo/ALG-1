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
        cout << "Informe um número: "<<endl;
        cin >> n;
        if(n > 0 && n < 5000)
        {
        soma = soma + n;
        todos++;
        }else if(n != 0)
        {
         cout<<"informe um número válido"<<endl;
        }
    }while(n != 0);
    media = soma / todos;
    cout<<"Foram digitados "<<todos<< " números"<<endl;
    cout<<"A média é: "<<media<<endl;
    cout<<"A soma dos números é "<<soma;

}

