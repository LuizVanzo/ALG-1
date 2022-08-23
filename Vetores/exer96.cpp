#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int zero = 0, maior, menor, maiori, menori;
    float A[12], B[12], media = 0;

    for (int i=0; i<12 ; i++)
    {
        cout << "Digite a temperatura em Celsius  do "<< i+1 << " mês" << endl;
        cin >> A[i];

        if(A[i] < 0)
        {
            zero++;
        }

        if(i == 0)
        {
            maior = A[i];
            menor = A[i];
        }

        if(A[i] > maior)
        {
            maior = A[i];
            maiori = i;
        }
        if(A[i] < menor)
        {
            menor = A[i];
            menori = i;
        }

        media+= A[i];
    }

    media /= 12;
    cout<<"A temperatura foi negativa: "<< zero <<" meses"<<endl;
    cout<< "A maior temperatura foi no " << maiori+1 << " mês, tendo "<< maior <<endl;
    cout<< "A menor temperatura foi no " << menori+1 << " mês, tendo "<< menor <<endl;
    cout<<"A média anual foi: "<< media<<endl;

    for (int i=0; i<12 ; i++)
    {
      B[i] = A[i] + ((3.0/100.0) * A[i]);
      cout<< " A temperaturas do mês "<< i+1 <<" com mais 3% é "<< B[i]<<endl;
    }







}


