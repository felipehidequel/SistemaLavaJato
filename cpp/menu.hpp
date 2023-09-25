#ifndef MENU_HPP
#define MENU_HPP
/*MENUS PARA O CODIGO CLIENTE*/

#include <iostream>
#include <string.h>
#include "cliente.hpp"

using namespace std;

/*Menu de opçãos para codigo cliente*/
char menu_principal();
/*Menu com tipos de serviços*/
string menu_servico();
/*Menu para alterar informações de um cliente*/
char menu_altera_dados();
/*Estrutura de switch case com opções para alterar dados de um cliente*/
void switch_altera_dados(char escolha, string nome, string telefone, Cliente *cliente);



#endif // MENU_HPP