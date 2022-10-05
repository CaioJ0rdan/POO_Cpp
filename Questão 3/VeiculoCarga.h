#include <iostream>
#include <string>

#include "Veiculo.h"

using namespace std;

#ifndef VEICULOCARGA_H
#define VEICULOCARGA_H

class VeiculoCarga : virtual public Veiculo{
private:
    int carga;

public:

VeiculoCarga(); //Construtor Vazio

VeiculoCarga(string nome,int peso,int potencia,int carga); //Construtor com Paramêtro

int GetCarga(); // Função para retornar a carga

void SetCarga(int carga); // Função para alterar a carga

float peso_potencia(); // Função que calcula o peso por potência

void print(); // Função para Imprimir os valores

};

#endif //VEICULOCARGA_H