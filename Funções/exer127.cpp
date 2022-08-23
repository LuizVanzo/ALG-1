#include <iostream>

using namespace std;

float reajuste(float salarioNovo, float percent);

int main()
{
    setlocale(LC_ALL, "portuguese");

    float salario, percentual ,novosala;

    cout<<"Qual seu sálario ?"<<endl;
    cin >> salario;

    cout<<"Qual é o percentual de reajuste?"<<endl;
    cin >> percentual;

    novosala = reajuste(salario, percentual);

    cout << "Seu sálario novo é de: " << novosala << endl;

}


float reajuste(float salarioNovo, float percent)
{
    float reajustado = salarioNovo + ((percent*salarioNovo)/100.0);
    return reajustado;
}


