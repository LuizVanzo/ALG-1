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
        cout<<"* 1. Adi��o"<<endl;
        cout<<"* 2. Subtra��o"<<endl;
        cout<<"* 3. Multiplica��o"<<endl;
        cout<<"* 4. Divis�o"<<endl;
        cout<<"* 5. Sair do programa"<<endl;
        cout<<"****************************************************"<<endl;
        cin >> opcao;

        if(opcao < 1 || opcao > 5)
        {
            system("cls");
            cout<<"Op��o inv�lida!!, digite um nova op��o"<<endl;
        }
        else if(opcao == 5)
        {
            cout<< "Tchau";
        }
        else
        {
            cout<<"Digite o valor para o primeiro n�mero:"<<endl;
            cin >> n1;
            cout<<"Digite o valor para o segundo n�mero:"<<endl;
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
            cout<<"A subtra��o deu:  "<<sub<<endl;
            Limpar();
        }
        else if(opcao == 3)
        {
            multi = multiplicacao(n1,n2);
            cout<<"A multiplica��o deu:  "<<multi<<endl;
            Limpar();
        }
        else if(opcao == 4)
        {
            divi = divisao(n1,n2);
            cout<<"A divis�o deu:  "<<divi<<endl;
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




