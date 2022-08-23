#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int V[20], Aux[20], aux;

    for(int i=0; i<20 ; i++)
    {
        V[i] = rand()%101;
        cout <<  V[i];
        if(i != 19)
        {
            cout<<", ";
        }
    }
    aux = V[0];
    cout<<endl;

    for(int i=0; i<20 ; i++)
    {
        Aux[i] = V[i+1];
        V[20] = aux;
        cout <<  Aux[i];
        if(i != 19)
        {
            cout<<", ";
        }
    }




}




