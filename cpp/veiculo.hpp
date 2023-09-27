#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;
/* Classe representa veiculo */
class Veiculo
{
private:
    string marca;        // Fabricante do veiculo
    string modelo;       // Nome do modelo
    string placa;        // placa do veiculo
    string cor;          // cor
    string tipo_servico; // tipo de serviço ser realizado no lavajato
    int clienteID;

public:
    Veiculo() = default;
    Veiculo(string marca, string modelo, string placa, string cor, string tipo_servico);
    ~Veiculo(){};
    /*GETTERS*/
    string GetMarca() const;
    string GetModelo() const;
    string GetPlaca() const;
    string GetCor() const;
    string GetTipoServico() const;
};

#endif // VEICULO_HPP