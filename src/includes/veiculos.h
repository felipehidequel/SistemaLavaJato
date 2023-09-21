#ifndef VEICULO_H
#define VEICULO_H

#include "veiculos.c"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct veiculos Veiculos;

Veiculo* add_veiculo(char *modelo, char *tipo_servico, char *placa, char *marca, char *cor, Cliente *cliente);
void listar_veiculos_atendidos();
void consultar_veiculos_atendidos(Veiculos* veiculos, int n);

#endif // VEICULO_H