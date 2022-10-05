#include <iostream>
#include <string>
#include "VeiculoUtilitario.h"

using namespace std;

int main(){

    VeiculoUtilitario Exemplo1("Corolla",640,127,360,90);

    VeiculoUtilitario* Exemplo2 =  new VeiculoUtilitario();

    Exemplo2->SetNome("Hilux");
    Exemplo2->SetPeso(1200);
    Exemplo2->SetPotencia(149);
    Exemplo2->SetVolumeinterno(740);
    Exemplo2->SetCarga(760);

    Exemplo1.SetCarga(Exemplo2->GetCarga()/2);

    cout << "Dados do Exemplo 1 : " << endl;
    Exemplo1.print();
    cout << endl;
    cout << "Dados do Exemplo 2 : " << endl;
    Exemplo2->print();
    
    delete Exemplo2;

    return 0;
}