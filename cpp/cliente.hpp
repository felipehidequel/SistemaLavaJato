#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <string>
#include <vector>
#include "veiculo.hpp"

using namespace std;
/*Classe representa cliente*/
class Cliente
{
private:
    int id;
    string nome;
    string telefone;
    vector<Veiculo> veiculos;

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
    /*Adiciona um veiculo a lista de veiculos de um cliente*/
    void AdicionarVeiculo(Veiculo veiculo);
    /* Lista os veiculos de um cliente
    ** @param atendido: se atendido == 1, listar os veiculos atendidos,
    ** se atendido == 0, listar todos os veiculos não atendidos,
    ** se atendido == -1, listar todos os veiculos
    */
    void ListarVeiculos(int atendido) const;
    /*Imprime os atributos*/
    void Imprime() const;
    /* Se o nome passado for o do cliente,
    ** retorne 1*/
    int BuscarNome(string nome);
    /* Se o id passado for o do cliente,
    ** retorne 1*/
    int BuscarId(int id);
};

/*Imprime lista de clientes*/
void imprime_clientes(vector<Cliente> clientes);

#endif // CLIENTE_HPP