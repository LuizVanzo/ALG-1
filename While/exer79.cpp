#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));


    int opcao, contador;
    float nota1, nota2, nota3, media, nota, peso, pond, pesodiv;

    do
    {
        cout<<"1 - M�dia Aritm�tica"<<endl;
        cout<<"2 - M�dia Ponderada"<<endl;
        cout<<"3 - Sair"<<endl;
        cin >> opcao;

        if(opcao == 1)
        {
            cout<<"Digite a primeira nota"<<endl;
            cin >> nota1;
            cout<<"Digite a segunda nota"<<endl;
            cin >> nota2;

            media = (nota1+nota2)/2.0;
            cout <<"A M�dia Aritm�tica �: "<<media<<endl;
            system("pause");
        }
        else if(opcao == 2)
        {
            contador =1;
            pond =0;
            pesodiv =0;
            while(contador <=3)
            {
                cout<<"Digite a nota"<<endl;
                cin >> nota;
                cout<<"Digite o peso nota"<<endl;
                cin >> peso;
                pond = pond + (nota*peso);
                pesodiv = pesodiv + peso;
                contador++;
            }
            media = pond/pesodiv;
            cout <<"A M�dia Ponderada �: "<<media<<endl;
            system("pause");
        }
        else if(opcao >= 4)
        {
            cout<<"ERRO!!!"<<endl;
            cout<<"Digite uma op��o v�lida"<<endl;
            system("pause");
        }
        system("cls");
    }
    while(opcao != 3);


}



