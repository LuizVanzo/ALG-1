#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    int contador, soma;


    cout << "Informe um n�mero: "<<endl;
    cin >> n;

    do
    {
        cout << "ERRO informe um n�mero v�lido "<<endl;
        cout << "Informe um n�mero: "<<endl;
        cin >> n;

    }
    while(n<=2 || n>=20);

    soma=0;
    contador=1;
    while(contador <=n)
    {
        if(contador % 2 == 0)
        {
            soma = soma + contador;
            cout << contador << endl;
        }
        contador++;
    }
    cout<<"Essa � a soma: "<<soma;

}
