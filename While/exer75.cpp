#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int meses;
    float cidadeA, cidadeB;


    cidadeA = 90000;
    cidadeB = 200000;

    while(cidadeA <= cidadeB)
    {
        cidadeA = cidadeA + ((3.1/100.0)*cidadeA);
        cidadeB = cidadeB + ((1.5/100.0)*cidadeB);
        meses++;
    }

    cout<<"Popula��o final Cidade A: "<<cidadeA<<endl;
    cout<<"Popula��o final Cidade B:"<<cidadeB<<endl;
    cout<<"Foram necess�rios "<<meses<<" meses para Cidade A ter a mesma quantia de pessoas ou maior"<<endl;

}


