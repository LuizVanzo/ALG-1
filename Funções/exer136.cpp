#include <iostream>

using namespace std;

float soma(float numero1, float numero2);
float subtracao(float numero1, float numero2);
float multiplicacao(float numero1, float numero2);
float divisao(float numero1, float numero2);
void Limpar();

int main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    float n1, n2, somaprin, sub, multi, divi;

    do
    {
        cout<<"****************************************************"<<endl;
        cout<<"* 1. Adição"<<endl;
        cout<<"* 2. Subtração"<<endl;
        cout<<"* 3. Multiplicação"<<endl;
        cout<<"* 4. Divisão"<<endl;
        cout<<"* 5. Sair do programa"<<endl;
        cout<<"****************************************************"<<endl;
        cin >> opcao;

        if(opcao < 1 || opcao > 5)
        {
            system("cls");
            cout<<"Opção inválida!!, digite um nova opção"<<endl;
        }
        else if(opcao == 5)
        {
            cout<< "Tchau";
        }
        else
        {
            cout<<"Digite o valor para o primeiro número:"<<endl;
            cin >> n1;
            cout<<"Digite o valor para o segundo número:"<<endl;
            cin >> n2;
        }

        if(opcao == 1)
        {
            somaprin = soma(n1,n2);
            cout<<"A soma deu:  "<<somaprin<<endl;
            Limpar();
        }
        else if(opcao == 2)
        {
            sub = subtracao(n1,n2);
            cout<<"A subtração deu:  "<<sub<<endl;
            Limpar();
        }
        else if(opcao == 3)
        {
            multi = multiplicacao(n1,n2);
            cout<<"A multiplicação deu:  "<<multi<<endl;
            Limpar();
        }
        else if(opcao == 4)
        {
            divi = divisao(n1,n2);
            cout<<"A divisão deu:  "<<divi<<endl;
            Limpar();
        }

    }
    while(opcao != 5);

}

float soma(float numero1, float numero2)
{
    float somando = numero1 + numero2;
    return somando;
}
float subtracao(float numero1, float numero2)
{
    float subtraindo = numero1 - numero2;
    return subtraindo;
}
float multiplicacao(float numero1, float numero2)
{
    float multiplicando = numero1 * numero2;
    return multiplicando;
}
float divisao(float numero1, float numero2)
{
    float dividindo = numero1 / numero2;
    return dividindo;
}
void Limpar()
{
    system("pause");
    system("cls");
}




