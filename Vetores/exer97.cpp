#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int B[80], maior, menor, maiori, menori;

    for (int i=0; i<80 ; i++)
    {
        B[i] = rand()%101;
        cout << "O "<< i <<" valor gerado foi: "<< B[i] << endl;

        if(i == 0)
        {
            maior = B[i];
            menor = B[i];
        }

        if(B[i] > maior)
        {
            maior = B[i];
            maiori = i;
        }
        if(B[i] < menor)
        {
            menor = B[i];
            menori = i;
        }
    }

    cout<<"Maior valor � "<< maior<<" e sua posi��o � "<< maiori <<endl;
    cout<<"Menor valor � "<< menor<<" e sua posi��o � "<< menori <<endl;

}


