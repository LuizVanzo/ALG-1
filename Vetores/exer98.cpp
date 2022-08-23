#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int A[30], pares = 0, impar = 0;
    float media = 0;

    for (int i=0; i<30 ; i++)
    {
        A[i] = rand()%101;
        cout << "O "<< i+1 <<" valor gerado foi: "<< A[i] << endl;

        if(A[i] % 2 ==0)
        {
            pares++;
        }
        else
        {
            impar++;
        }

        media += A[i];
    }

    media /= 30.0;

    cout<<"A quatidade de valores Pares é: "<< pares <<endl;
    cout<<"A quatidade de valores Ímpares é: "<< impar <<endl;
    cout<<"A média de todos os valores foi: "<< media<<endl;







}


