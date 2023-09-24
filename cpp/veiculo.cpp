#include "veiculo.hpp"

Veiculo::Veiculo(string marca, string modelo, string placa, string cor, string tipo_servico)
    : marca(marca), modelo(modelo), placa(placa), cor(cor), tipo_servico(tipo_servico)
{
    atendido = false;
}

string Veiculo::GetMarca() const
{
    return marca;
}
string Veiculo::GetModelo() const
{
    return modelo;
}
string Veiculo::GetPlaca() const
{
    return placa;
}
string Veiculo::GetCor() const
{
    return cor;
}
string Veiculo::GetTipoServico() const
{
    return tipo_servico;
}
void Veiculo::MarcarAtendido()
{
    atendido = true;
}
