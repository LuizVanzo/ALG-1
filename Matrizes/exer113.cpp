#include <iostream>
#include <ctime>
using namespace std;

#define LIN 3
#define COL 4

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));


    int M[LIN][COL], aux;

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

    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
           aux = M[0][c];
           M[0][c] = M[2][c];
           M[2][c] = aux;

        }
    }

    cout<<"Matriz invertida"<<endl;

    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
            cout << M[l][c] << "\t";
        }
        cout << endl;
    }
}

