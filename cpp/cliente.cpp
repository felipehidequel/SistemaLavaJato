#include "cliente.hpp"


Cliente::Cliente(int id, string nome, string telefone)
    : id(id), nome(nome), telefone(telefone) {}

void Cliente::AdicionarVeiculo(Veiculo veiculo){
    veiculos.push_back(veiculo);
}

void Cliente::ListarVeiculos() const{
    cout << "Veiculos de " << nome << ":" << endl;
    for(const auto& veiculo : veiculos){
        cout << " Marca: " << veiculo.GetMarca() << endl;
        cout << " Modelo: " << veiculo.GetModelo() << endl;
        cout << " Placa: " << veiculo.GetPlaca() << endl;
        cout << " Cor: " << veiculo.GetCor() << endl;
        cout << " Serviço: " << veiculo.GetTipoServico() << endl;
        cout << endl;
    }
}

int Cliente::BuscarNome(string nome){
    if (this->nome == nome){
        return 1;
    }
    return 0;
}

void Cliente::Imprime() const{
    cout << "NOME: " << nome << " TELEFONE: " << telefone << " ID: "<< id << endl;
}

void imprime_clientes(vector<Cliente> clientes)
{
    for (auto cliente : clientes)
        cliente.Imprime();
}