#include <iostream>
#include <ctime>
using namespace std;

#define LIN 5
#define COL 5

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));


    int M[LIN][COL], somal4=0, somac2=0, somaprin=0, somasecun=0, somatotal=0;

    for(int l=0; l<LIN; l++)
    {
        for(int c=0; c<COL; c++)
        {
            M[l][c] = rand()%10;
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
            if(l == 3)
            {
                somal4 += M[l][c];
            }
            if(c == 1)
            {
                somac2 += M[l][c];
            }
            somatotal+= M[l][c];
        }
    }
    for(int i=0; i<5; i++)
    {
        somaprin += M[i][i];
    }
    for(int l=0; l<LIN; l++)
    {
            somasecun+= M[l][(COL-1-l)];
    }


    cout<<"A soma da Linha quatro é "<< somal4<<endl;
    cout<<"A soma da Coluna dois é "<< somac2<<endl;
    cout<<"A soma da Diagonal principal é "<< somaprin<<endl;
    cout<<"A soma da Diagonal secundária é "<< somasecun<<endl;
    cout<<"A soma de toda matriz é "<< somatotal<<endl;


}

