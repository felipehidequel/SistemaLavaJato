#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
#include <list>
#include "veiculo.hpp"

using namespace std;
/*Classe representa cliente*/
class Cliente
{
private:
    int id;
    string nome;
    string telefone;

public:
    Cliente() = default;
    Cliente(int id, string nome, string telefone);

    /*setters*/
    void setNome(string nome) { this->nome = nome; }
    void setTelefone(string telefone) { this->telefone = telefone; }
    /*getters*/
    string getNome() { return nome; }
    string getTelefone() { return telefone; }
    int getId() { return id; }
};

#endif // CLIENTE_HPP