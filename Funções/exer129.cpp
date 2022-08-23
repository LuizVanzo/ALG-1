#include <iostream>

using namespace std;

int fatorial(int numero);

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, resultado;

    cout<<"Digite o número que desejar fazer o fatorial!"<<endl;
    cin >> n;

    resultado = fatorial(n);

    cout<<"O Fatorial de "<<n<<" é "<<resultado<<endl;

}

int fatorial(int numero)
{
    int resul=numero;
    for(int i=1; i<numero; i++)
    {
        resul = resul*i;
    }
    return resul;
}



