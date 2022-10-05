#include <iostream>
#include <string>

#include "VeiculoCarga.h"
#include "VeiculoPasseio.h" 

using namespace std;

#ifndef VEICULOUTILITARIO_H
#define VEICULOUTILITARIO_H

class VeiculoUtilitario :  public VeiculoPasseio,public VeiculoCarga{

public:

VeiculoUtilitario(); //Construtor Vazio 

VeiculoUtilitario(string nome,int peso,int potencia,int volume,int carga); // Construtor com Paramêtro

float peso_potencia(); // Função que calcula o peso pela potência

void print(); // Função para imprimir os valores

};

#endif //VEICULOUTILITARIO_H


