#include "VeiculoPasseio.h"

VeiculoPasseio::VeiculoPasseio() : Veiculo(){
    volumeinterno = 0;
}

VeiculoPasseio::VeiculoPasseio(string nome,int peso,int potencia,int volumeinterno) :
 Veiculo(nome,peso,potencia){
    this->volumeinterno = volumeinterno;
}

int VeiculoPasseio::GetVolumeinterno(){
    return volumeinterno;
}

void VeiculoPasseio::SetVolumeinterno(int volumeinterno) {
    this->volumeinterno = volumeinterno;
}


float VeiculoPasseio::peso_potencia(){
    return GetPeso()/GetPotencia();
}

void VeiculoPasseio::print(){
    cout << "Volume Interno :" << volumeinterno << endl;
}
