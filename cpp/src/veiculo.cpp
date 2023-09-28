#include "veiculo.hpp"
#include "cliente.hpp"

Veiculo::Veiculo(string marca, string modelo, string placa, string cor, string tipo_servico, Cliente *cliente):
placa(placa), marca(marca), modelo(modelo), cor(cor), tipo_servico(tipo_servico), cliente(cliente) {}