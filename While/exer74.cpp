#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int meses;
    float salarioC, salarioJ;


    cout << "Informe o sal�rio de Carlos: "<<endl;
    cin >> salarioC; // jo�o 1/3 de carlos

    salarioJ = salarioC/3.0;
    meses = 0;

    while(salarioJ <= salarioC)
    {
        salarioC = salarioC + ((2.0/100.0)*salarioC);
        salarioJ = salarioJ + ((5.0/100.0)*salarioJ);
        meses++;
    }

    cout<<"O dinheiro de Carlos �: "<<salarioC<<endl;
    cout<<"O dinheiro de Jo�o �:"<<salarioJ<<endl;
    cout<<"Foram necess�rios "<<meses<<" meses para Jo�o ter o mesmo dinheiro ou maior que Carlos"<<endl;

}

