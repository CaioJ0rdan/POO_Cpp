#include "VeiculoCarga.h"

VeiculoCarga::VeiculoCarga(){
    carga = 0;
}

VeiculoCarga::VeiculoCarga(string nome,int peso,int potencia,int carga) : Veiculo(nome,peso,potencia){
    this->carga = carga;
}

int VeiculoCarga::GetCarga(){
    return carga;
}

void VeiculoCarga::SetCarga(int carga) {
    this->carga = carga;
}

float VeiculoCarga::peso_potencia(){
    return (GetPeso()+ GetCarga())/GetPotencia();
}

void VeiculoCarga::print(){
    cout << "Carga : " << carga << endl;
}
