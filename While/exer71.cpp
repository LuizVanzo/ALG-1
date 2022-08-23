#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y;
    int contador, soma, impar;



    do
    {
        cout << "Informe um número: "<<endl;
        cin >> x;

        cout << "Informe outro número: "<<endl;
        cin >> y;
    }
    while(x >= y);

    soma = 0;
    impar =1;
    while(x <=y)
    {
        if(x % 2 == 0)
        {
            soma = soma + x;
        }
        else
        {
            impar = impar * x;
        }
        x++;
    }

    cout<<"A soma dos valores pares do intervalo de x e y é "<<soma<<endl;
    cout<<"A multiplicação dos valores Ímpares do intervalo de x e y é "<<impar;

}
