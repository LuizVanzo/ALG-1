#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    int A[10], cont = 0;

    for (int i=0; i<10 ; i++)
    {
        A[i] = rand()%101;
        cout << "O "<< i+1 <<" valor gerado foi: "<< A[i] << endl;

        if(A[i] > 40)
        {
            cont++;
        }
    }

    cout<<"O valor é maior que 40: "<< cont <<" vezes"<<endl;







}

