#ifndef VEICULO_H
#define VEICULO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cliente; // Declaração avançada da estrutura Cliente
typedef struct cliente Cliente;
typedef struct veiculo Veiculo;

/* Cria uma lista vazia de veiculos */
Veiculo *vci_cria(void);
/* Adiciona um veiculo a uma lista ordenada por nome de modelo */
Veiculo *vci_add(Veiculo *v, char *marca, char *modelo, char *placa, char *cor, char *tipo_servico, Cliente *c);
/* Imprime uma lista de veiculos */
void vci_imprime(Veiculo *v);
/* verifica se uma lista de veiculos está vazia */
int vci_is_empty(Veiculo *v);
/* busca um veiculo em uma lista pela placa */
Veiculo *vci_busca(Veiculo *v, char *placa);
/* retira um veiculo de uma lista */
Veiculo *vci_retira(Veiculo *v, char *placa);
/* libera o espaço alocado para uma lista de veiculos */
void vci_libera(Veiculo *v);
Veiculo *excluir_vci_cliente(Veiculo *v, int id);


#endif // VEICULO_H