#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y;
    int contador, soma, impar;



    do
    {
        cout << "Informe um n�mero: "<<endl;
        cin >> x;

        cout << "Informe outro n�mero: "<<endl;
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

    cout<<"A soma dos valores pares do intervalo de x e y � "<<soma<<endl;
    cout<<"A multiplica��o dos valores �mpares do intervalo de x e y � "<<impar;

}
