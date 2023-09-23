#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
#include <string.h>
#include <vector>
#include "cliente.hpp"
#include "veiculo.hpp"

using namespace std;
/*Compara o nome de 2 clientes*/
int compara_nome(Cliente n1, Cliente n2);
/*Imprime lista de clientes*/
void imprime_clientes(vector<Cliente> clientes);

#endif