#include <iostream>

using namespace std;

#define LIN 3
#define COL 3

int main()
{
    setlocale(LC_ALL, "portuguese");

    int M[LIN][COL], menor,menorL, menorC;

    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
            cout<<"Informe um valor para a Matriz"<<endl;
            cin >> M[l][c];
            if(l==0 && c==0)
            {
                menor = M[l][c];
            }
            if(menor > M[l][c])
            {
                menor = M[l][c];
                menorL = l;
                menorC = c;
            }
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
    cout<<"O menor elemento da matriz é "<< menor<<" e sua posição na matriz é M["<<menorL<<"]["<<menorC<<"]"<<endl;

}
