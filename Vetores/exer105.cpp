#include <iostream>
#include <ctime>
using namespace std;

#define TAM 7

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int V[TAM], valor, contV=0, contGerador=0, cont60=0, pares =0, aux;
    bool repetido, trocou;

    for(int i=0; i<TAM; i++)
    {
        do
        {
            cout<<"Digite o "<< i+1<<" valor do vetor"<<endl;
            cin >> valor;
            contGerador++;
            repetido = false;

            for(int j=0; j<contV; j++)
            {
                if(V[j] == valor)
                    repetido = true;
            }

            if(repetido == false)
            {
                V[i] = valor;
                contV++;
            }

        }
        while(repetido == true);
    }
    for(int i=0; i < TAM; i++)
    {
        if(V[i] > 60)
        {
            cont60++;
        }

        if(V[i] % 2 == 0)
        {
            pares++;

        }
    }
    int P[pares], idxPar = 0;

    for(int i=0; i < TAM; i++)
    {
        if(V[i] % 2 == 0)
        {
            P[idxPar] = V[i];
            idxPar++;
        }
    }
    do
    {
        trocou = false;
        for(int i=0; i < pares; i++)
        {
            if(P[i] > P[i+1])
            {
                aux = P[i];
                P[i] = P[i+1];
                P[i+1] = aux;
                trocou = true;
            }
        }
    }while(trocou == true);


    cout<<"Existem "<< cont60 <<" valores maiores que 60 no vetor"<<endl;
    for(int i=0; i <= pares; i++)
    {
        cout<<P[i];
        if(i != pares )
        {
            cout<<", ";
        }
    }


}
