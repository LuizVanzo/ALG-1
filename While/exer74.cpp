#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int meses;
    float salarioC, salarioJ;


    cout << "Informe o salário de Carlos: "<<endl;
    cin >> salarioC; // joão 1/3 de carlos

    salarioJ = salarioC/3.0;
    meses = 0;

    while(salarioJ <= salarioC)
    {
        salarioC = salarioC + ((2.0/100.0)*salarioC);
        salarioJ = salarioJ + ((5.0/100.0)*salarioJ);
        meses++;
    }

    cout<<"O dinheiro de Carlos é: "<<salarioC<<endl;
    cout<<"O dinheiro de João é:"<<salarioJ<<endl;
    cout<<"Foram necessários "<<meses<<" meses para João ter o mesmo dinheiro ou maior que Carlos"<<endl;

}

