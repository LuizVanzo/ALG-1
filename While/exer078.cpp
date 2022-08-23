#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");


    int lermais, idade, pCasadas=0, pSolteiras=0, pViuvas=0, pDesquitadas=0, totalPessoas=0;
    char civil;

    float somaViuvas=0, mediaViuvas, porcentagemD;



    do
    {

        cout << "\nInforme a idade:";
        cin >> idade;

        cout << "Informe o estado civil (C-Casado; S-solteiro; V-viuvo; D-desquitado):";
        cin >> civil;
        civil = toupper(civil);

        if(civil=='C' || civil=='S' || civil=='V' || civil=='D')
        {

            totalPessoas++;

            switch(civil)
            {
            case 'C':
                pCasadas++;
                break;
            case 'S':
                pSolteiras++;
                break;
            case 'V':
                pViuvas++;
                somaViuvas += idade;
                break;
            case 'D':
                pDesquitadas++;
                break;
            }

        }
        else{
            cout << "Estado civil informado � inv�lido!\n";
        }



        cout << "Deseja ler informa��es de mais uma pessoa? (1-SIM ou 0-N�O):";
        cin>>lermais;

    }
    while(lermais!=0);

    if(pViuvas>0)
        mediaViuvas = somaViuvas / pViuvas;
    else
        mediaViuvas = 0;

    porcentagemD = (pDesquitadas * 100.0) / totalPessoas;

    cout << "Quatidade de pessoas casadas: " << pCasadas << endl;
    cout << "Quatidade de pessoas solteiras: " << pSolteiras << endl;
    cout << "M�dia de idade de pessoas vi�vas: " << mediaViuvas << endl;
    cout << "Porcentagem de pessoas desquitadas: " << porcentagemD << "%" << endl;


}

