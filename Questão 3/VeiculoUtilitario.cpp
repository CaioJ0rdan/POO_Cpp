#include "VeiculoUtilitario.h"

    VeiculoUtilitario::VeiculoUtilitario() : Veiculo(),VeiculoCarga(),VeiculoPasseio(){

    }

float VeiculoUtilitario::peso_potencia(){
    return this->peso_potencia();
}

void VeiculoUtilitario::print(){
    Veiculo::print();
    VeiculoPasseio::print();
    VeiculoCarga::print();
    
}

VeiculoUtilitario::VeiculoUtilitario(string nome,int peso,int potencia,int volumeinterno,int carga) :
 Veiculo(nome,peso,potencia),VeiculoCarga(nome,peso,potencia,carga),VeiculoPasseio(nome,peso,potencia,volumeinterno){

}