#include "sistemaLavaJato.hpp"

void sistemaLavaJato::CriaCliente(Cliente *cliente, Veiculo veiculo){
    this->clientes = cliente;
    clientes->proximo = nullptr;

}