#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int A[7], x, contx = 0;

    cout << "Informe o valor de X(0-10):"<<endl;
    cin >> x;

    for (int i=0; i<7 ; i++)
    {
        A[i] = rand()%11;
        cout <<  A[i] << endl;

        if(x == A[i])
        {
            contx++;
        }
    }

    cout<<"O valor de X se repete: "<< contx <<" vezes"<<endl;







}

