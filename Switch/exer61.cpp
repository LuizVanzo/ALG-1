#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int num, num2, calc;
    char op;


    cout << "Digite o primeiro número" << endl;
    cin >> num;

    cout << "Digite o segundo número" << endl;
    cin >> num2;

    cout << "Digite a operação aritmética" << endl;
    cin >> op;

    switch(op)
    {
    case '+':
        calc = num + num2;
        cout<<num<<" + "<<num2<<" = "<< calc;
        break;
    case '-':
        calc = num - num2;
        cout<<num<<" - "<<num2<<" = "<< calc;
        break;
    case '*':
        calc = num * num2;
        cout<<num<<" * "<<num2<<" = "<< calc;
        break;
    case '/':
        calc = num / num2;
        cout<<num<<" / "<<num2<<" = "<< calc;
        break;
    default:
        cout<<"ERRO!";
        break;
    }



}




