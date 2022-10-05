#include <iostream>
#include <string>

#include "Veiculo.h"
using namespace std;

#ifndef VEICULOPASSEIO_H
#define VEICULOPASSEIO_H

class VeiculoPasseio : virtual public Veiculo{
private:

int volumeinterno;

public:

VeiculoPasseio(); // Construtor Vazio

VeiculoPasseio(string nome,int peso,int potencia,int volumeinterno); // Construtor com Parâmetro

int GetVolumeinterno(); // Função que retorna o volume interno

void SetVolumeinterno(int volumeinterno); // Função para alterar o volume interno 

float peso_potencia(); // Função que calcula o peso pela potencia

void print(); // Função para imprimir os valores 

};


#endif //VEICULOPASSEO_H