#include <iostream>
#include <ctime>
using namespace std;

#define LIN 3
#define COL 6

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));


    int M[LIN][COL], valor;

    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
            M[l][c] = rand()%51;
        }

    }


    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
            cout << M[l][c] << "\t";
        }
        cout << endl;
    }

    cout<<"Informe um valor para multiplicar a matriz"<<endl;
    cin >> valor;

    cout<<"Matriz com os valores multiplicados por "<<valor<<endl;
    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
            M[l][c] *= valor;
            cout << M[l][c] << "\t";
        }
        cout << endl;
    }



}
