#include "Veiculo.h"

Veiculo::Veiculo(){
    nome  = "";
    peso = 0;
    potencia = 0;
}

Veiculo::Veiculo(string nome,int peso,int potencia){
    this->nome = nome;
    this->peso = peso;
    this->potencia = potencia;
}

string Veiculo::GetNome(){
    return nome;
}

void Veiculo::SetNome(string nome) {
    this->nome = nome;
}

    
int Veiculo::GetPeso(){
    return peso;
}

void Veiculo::SetPeso(int peso) {
    this->peso = peso;
}

    
int Veiculo::GetPotencia(){
    return potencia;
}

void Veiculo::SetPotencia(int potencia) {
    this->potencia = potencia;
}

void Veiculo::print(){
    cout << "Nome :" <<  nome << endl<< "Peso :"<< peso << endl << "Potencia :" << potencia << endl;
}