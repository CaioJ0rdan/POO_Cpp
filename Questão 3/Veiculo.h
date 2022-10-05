#include <iostream>
#include <string>

using namespace std;

#ifndef VEICULO_H
#define VEICULO_H

class Veiculo{
private:
    string nome;
    int peso;
    int potencia;
public:

Veiculo(); // Construtor Vazio

Veiculo(string nome,int peso,int potencia); // Construtor com

string GetNome(); // Função que retorna o nome

void SetNome(string nome); // Função que altera o nome
    
int GetPeso(); // Função que retorna o peso

void SetPeso(int peso); //Função que altera o peso

int GetPotencia(); //Função que retorna a potencia

void SetPotencia(int potencia); //Função que altera a potencia

void print(); // Função par imprimir os valores

};


#endif //VEICULO_H