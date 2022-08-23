#include <iostream>

using namespace std;

float reajuste(float salarioNovo);

int main()
{
    setlocale(LC_ALL, "portuguese");

    float salario, novosala;

    cout<<"Qual seu sálario ?"<<endl;
    cin >> salario;

    novosala = reajuste(salario);

    cout << "Seu sálario novo é de: " << novosala << endl;

}


float reajuste(float salarioNovo)
{
    float reajustado = salarioNovo + ((15.0*salarioNovo)/100.0);
    return reajustado;
}

