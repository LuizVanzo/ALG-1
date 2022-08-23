#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int idade, total, cargo, leitura, coord, adm, sup, analisup, masc, femi, totalsex, somaIdade, menor, medio, maior;
    float preSalario, porcentF, idadeMed;
    char sexo;

    coord = 0;
    adm = 0;
    sup = 0;
    analisup = 0;
    masc = 0;
    femi = 0;
    totalsex = 0;
    somaIdade = 0;
    menor =0;
    medio =0;
    maior = 0;

    do
    {
        cout<<"1 - Coordenador de TI"<<endl;
        cout<<"2 - Administrador de Rede"<<endl;
        cout<<"3 - Suporte Técnico"<<endl;
        cout<<"4 - Analista de Suporte Técnico"<<endl;
        cin >> cargo;

        cout<<"Qual sua pretensão salarial?(Apenas números)"<<endl;
        cin >> preSalario;

        if(cargo == 1)
        {
            if(preSalario <= 6971)
            {
                menor++;
            }
            else if(preSalario <= 9294)
            {
                medio++;
            }
            else if(preSalario <= 10954)
            {
                maior++;
            }
            coord++;
        }
        else if(cargo == 2)
        {
            if(preSalario <= 4489)
            {
                menor++;
            }
            else if(preSalario <= 5008)
            {
                medio++;
            }
            else if(preSalario <= 7087)
            {
                maior++;
            }
            adm++;
        }
        else if(cargo == 3)
        {
            if(preSalario <= 4739)
            {
                menor++;
            }
            else if(preSalario <= 6232)
            {
                medio++;
            }
            else if(preSalario <= 8981)
            {
                maior++;
            }
            sup++;
        }
        else if(cargo == 4)
        {
            if(preSalario <= 3405)
            {
                menor++;
            }else if(preSalario <= 4122)
            {
                medio++;
            }else if(preSalario <= 4564)
            {
                maior++;
            }
            analisup++;
        }

        cout<< "Qual o seu sexo?(M - Masculino, F - feminino)"<<endl;
        cin >> sexo;


        if(sexo == 'M' || sexo == 'm')
        {
            masc++;
            totalsex++;
        }
        else if(sexo == 'F' || sexo == 'f')
        {
            femi++;
            totalsex++;
        }

        cout<<"Qual a sua idade?"<<endl;
        cin >> idade;
        somaIdade = somaIdade + idade;

        cout<<"Deseja continuar a leitura de dados?(1 - Sim, 2 - Não)"<<endl;
        cin >> leitura;
    }
    while(leitura != 2);

    porcentF = (femi*100.0)/totalsex;
    idadeMed = somaIdade/totalsex;

    cout<<"O total de candidatos do sexo feminino é: "<< femi <<" e o percentual em relação ao total: "<<porcentF<<"%"<<endl;
    cout<<"A média de idade dos candidatos é de "<<idadeMed<<endl;
    cout<<"Total de inscritos para Coordenador de TI: "<<coord<<endl;
    cout<<"Total de inscritos para Administrador de Rede: "<<adm<<endl;
    cout<<"Total de inscritos para Suporte Técnico: "<<sup<<endl;
    cout<<"Total de inscritos para Analista de Suporte Técnico: "<<analisup<<endl;
    cout<<"O total de candidatos com pretensão salarial acima da Média foram: "<< maior<<endl;
}



