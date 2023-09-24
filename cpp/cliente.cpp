#include "cliente.hpp"

Cliente::Cliente(int id, string nome, string telefone)
    : id(id), nome(nome), telefone(telefone) {}

void Cliente::AdicionarVeiculo(Veiculo veiculo)
{
    veiculos.push_back(veiculo);
}

void Cliente::ListarVeiculos(int atendido) const
{
    int cont = 0;
    switch (atendido)
    {
    case 1:
        cont = 0;
        for (const auto &veiculo : veiculos)
        {
            cout << nome << " " << telefone << endl;
            if (veiculo.GetAtendido())
            {
                cout << veiculo.GetMarca() << " " << veiculo.GetModelo() << endl;
                cout << " Placa: " << veiculo.GetPlaca() << endl;
                cout << " Cor: " << veiculo.GetCor() << endl;
                cout << " Serviço: " << veiculo.GetTipoServico() << endl;
                cout << endl;
                cont++;
            }
        }
        if (cont == 0)
            cout << "Nenhum veiculo atendido!" << endl;
        break;
    case 0:
        cont = 0;
        for (const auto &veiculo : veiculos)
        {
            cout << nome << " " << telefone << endl;
            if (!(veiculo.GetAtendido()))
            {
                cout << veiculo.GetMarca() << " " << veiculo.GetModelo() << endl;
                cout << " Placa: " << veiculo.GetPlaca() << endl;
                cout << " Cor: " << veiculo.GetCor() << endl;
                cout << " Serviço: " << veiculo.GetTipoServico() << endl;
                cout << endl;
                cont++;
            }
        }
        if (cont == 0)
            cout << "Todos os veiculos foram atendidos" << endl;
        break;
    default:
        for (const auto &veiculo : veiculos)
        {
            cout << nome << " " << telefone << endl;
            cout << veiculo.GetMarca() << " " << veiculo.GetModelo() << endl;
            cout << " Placa: " << veiculo.GetPlaca() << endl;
            cout << " Cor: " << veiculo.GetCor() << endl;
            cout << " Serviço: " << veiculo.GetTipoServico() << endl;
            if (veiculo.GetAtendido())
                cout << "ATENDIDO" << endl;
            else
                cout << "NÃO ATENDIDO" << endl;
            cout << endl;
        }
        break;
    }
}

int Cliente::BuscarNome(string nome)
{
    if (this->nome == nome)
    {
        return 1;
    }
    return 0;
}

int Cliente::BuscarId(int id)
{
    if (this->id == id)
    {
        return 1;
    }
    return 0;
}

void Cliente::Imprime() const
{
    cout << "NOME: " << nome << " TELEFONE: " << telefone << " ID: " << id << endl;
}

void imprime_clientes(vector<Cliente> clientes)
{
    for (auto cliente : clientes)
        cliente.Imprime();
}