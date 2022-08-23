    #include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float contador, saldo, quadrado, dinheiro;

    cout << "Mês\tSaldo anterior\tJuros\t\tSaldo Atual\n";

    contador = 1.0;
    dinheiro = 1800.0;
    do{

        cout << contador << "º\t";

        cout <<  dinheiro << "\t\t";

        saldo = (1.5/100.0)*dinheiro;
        cout <<  saldo << "\t\t" ;

        dinheiro = dinheiro+saldo;
        cout <<  dinheiro << "\t\n" ;

        contador++;

    }while(dinheiro<=2000.0);


}
