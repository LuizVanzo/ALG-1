#include <iostream>
#include <ctime>

using namespace std;

#define TAM 5

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int X[TAM], Y[TAM], Z[TAM], W[TAM], S[TAM*2];
    int contPar=0, contImpar=0, cont30=0;
    int aux;
    bool trocou;

    ///--------------X--------------

    //gerar X
    for(int i=0; i<TAM; i++)
    {
        X[i] = rand()%51;
    }


    //ordenar X
    do
    {
        trocou = false;

        for(int i=0; i<TAM-1; i++)
        {
            if(X[i] > X[i+1]) //trocar
            {
                aux = X[i];
                X[i] = X[i+1];
                X[i+1] = aux;
                trocou = true;
            }
        }

    }
    while(trocou == true);

    //mostrar X
    cout << "X: ";
    for(int i=0; i<TAM; i++)
    {
        cout << X[i] << ", ";
    }
    cout << endl;


    ///--------------Y--------------

    //gerar Y
    for(int i=0; i<TAM; i++)
    {
        Y[i] = rand()%51;
    }


    //ordenar Y
    do
    {
        trocou = false;

        for(int i=0; i<TAM-1; i++)
        {
            if(Y[i] < Y[i+1]) //trocar
            {
                aux = Y[i];
                Y[i] = Y[i+1];
                Y[i+1] = aux;
                trocou = true;
            }
        }

    }
    while(trocou == true);

    //mostrar Y
    cout << "Y: ";
    for(int i=0; i<TAM; i++)
    {
        cout << Y[i] << ", ";
    }
    cout << endl;


    ///--------------Z,W,S--------------


    contPar=0, contImpar=0, cont30=0;
    for(int i=0; i<TAM; i++)
    {
        if(X[i]%2==0) //par
        {
            W[contPar] = X[i];
            contPar++;
        }

        if(X[i]%2 != 0) //impar
        {
            Z[contImpar] = X[i];
            contImpar++;
        }

        if(X[i] > 30)
        {
            S[cont30] = X[i];
            cont30++;
        }

        if(Y[i] > 30)
        {
            S[cont30] = Y[i];
            cont30++;
        }

    }



    //mostrar Z
    cout << "Z: ";
    for(int i=0; i<contImpar; i++)
    {
        cout << Z[i] << ", ";
    }
    cout << endl;

    //mostrar W
    cout << "W: ";
    for(int i=0; i<contPar; i++)
    {
        cout << W[i] << ", ";
    }
    cout << endl;

    //mostra S
    cout << "S: ";
    for(int i=0; i<cont30; i++)
    {
        cout << S[i] << ", ";
    }
    cout << endl;


}
