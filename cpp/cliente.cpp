#include "cliente.hpp"


Cliente::Cliente(int id, string nome, string telefone)
    : id(id), nome(nome), telefone(telefone) {
        id++;
    }

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
