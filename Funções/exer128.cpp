#include <iostream>
#include <ctime>


using namespace std;

#define TAM 20


void mostraVetor(int vetor[], int tam);
void resulV(int vetor[], int vetorZ[], int tam);

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));


    int V[TAM], Z[TAM];

    for(int i=0; i<TAM; i++)
    {
        V[i] = rand() % 21;
    }
    mostraVetor(V, TAM);

    resulV(V,Z, TAM);

    mostraVetor(Z, TAM);


}

void mostraVetor(int vetor[], int tam)
{
    cout << endl;
    for(int i=0; i<tam; i++)
    {
        cout << vetor[i] << ", ";
    }
    cout << endl;
}

void resulV(int vetor[], int vetorZ[], int tam)
{
   for(int i=0; i<tam; i++)
    {
        vetorZ[i] = vetor[i]*vetor[i];
    }
}


