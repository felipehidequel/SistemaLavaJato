#include "cliente.hpp"
#include "veiculo.hpp"

class SistemaLavaJato
{
private:
    list<Cliente> clientes;
    queue<Veiculo> veiculos;

public:
    SistemaLavaJato(/* args */);
    ~SistemaLavaJato();

    void AdicionaCliente(Cliente cliente, Veiculo veiculo);
    int ExcluirCliente(Cliente cliente);
    Cliente *BuscarCliente(int id);
    void EditarInfomacoes(int id, const string &novoNome);
};

SistemaLavaJato::SistemaLavaJato(/* args */)
{
}

SistemaLavaJato::~SistemaLavaJato()
{
}

void SistemaLavaJato::AdicionaCliente(Cliente cliente, Veiculo veiculo)
{
    clientes.push_back(cliente);
    veiculos.push(veiculo);
}

int SistemaLavaJato::ExcluirCliente(Cliente cliente)
{
    if (clientes.empty())
    {
        printf("LISTA VAZIA RAPAZ!\n");
        return 0;
    }
    clientes.remove(cliente);
    cout << "Cliente " << cliente.getNome() << " removido da lista" << endl;
    return 1;
}

Cliente *SistemaLavaJato::BuscarCliente(int id)
{
    for (auto &cliente : clientes)
    {
        if (cliente.getId() == id)
            return &cliente;
    }
    return nullptr;
}

void SistemaLavaJato::EditarInfomacoes(int id, const string &novoNome)
{
    for (auto &cliente : clientes)
    {
        if (cliente.getId() == id)
        {
            cliente.setNome(novoNome);
            return;
        }
    }
    cout << "Cliente não encontrado." << endl;
}
