#include "cliente.hpp"
#include "veiculo.hpp"
#include <queue>

class sistemaLavaJato
{
private:
    Cliente *clientes;
    queue<Veiculo> veiculo;
public:
    sistemaLavaJato(/* args */);
    ~sistemaLavaJato();
    void CriaCliente(Cliente *cliente, Veiculo veiculo){}
};

sistemaLavaJato::sistemaLavaJato(/* args */)
{
}

sistemaLavaJato::~sistemaLavaJato()
{
}
