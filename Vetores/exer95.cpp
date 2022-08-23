#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int B[50], maior, menor;

    for (int i=0; i<50 ; i++)
    {
        B[i] = rand()%101;
        cout << "O "<< i+1 <<" valor gerado foi: "<< B[i] << endl;

        if(i == 0)
        {
            maior = B[i];
            menor = B[i];
        }

        if(B[i] > maior)
        {
            maior = B[i];
        }
        if(B[i] < menor)
        {
            menor = B[i];
        }
    }

    cout<<"O maior valor gerado foi: "<< maior <<endl;
    cout<<"O menor valor gerado foi: "<< menor <<endl;


}


