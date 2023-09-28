#ifndef VEICULO_HPP
#define VEICULO_HPP

#include <iostream>
#include <string>
#include <list>
#include <queue>

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
    Cliente *cliente;    // Aponta para dono do veiculo

public:
    Veiculo() = default;
    Veiculo(string marca, string modelo, string placa, string cor, string tipo_servico, Cliente *cliente);
    ~Veiculo(){};
    /*SETTERS*/
    void SetMarca(string marca) { this->marca = marca; }
    void SetModelo(string modelo) { this->modelo = modelo; }
    void SetPlaca(string placa) { this->placa = placa; }
    void SetCor(string cor) { this->cor = cor; }
    void SetTipoServico(string tipo_servico) { this->tipo_servico = tipo_servico; }
    /*GETTERS*/
    string GetMarca() const{return marca;}
    string GetModelo() const{return modelo;}
    string GetPlaca() const{return placa;}
    string GetCor() const{return cor;}
    string GetTipoServico() const{return tipo_servico;}
};

#endif // VEICULO_HPP