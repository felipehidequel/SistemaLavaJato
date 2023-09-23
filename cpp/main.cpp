#include <iostream>
#include "cliente.hpp"
#include "veiculo.hpp"
#include "utilities.hpp"
#include <algorithm>

int main()
{
    vector<Cliente> clientes;
    int id = 0; // token para cliente
    char escolha = '0';

    while (escolha != '7')
    {
        string nome, telefone;                          // atributos clientes
        string marca, modelo, placa, cor, tipo_servico; // atributos veiculos
        bool mais_um_veiculo = true;
        Cliente novo_cliente;

        cin >> escolha;
        switch (escolha)
        {
        case '1': // adicionar cliente
            cin >> nome;
            cin >> telefone;
            novo_cliente = Cliente(id, nome, telefone);
            do
            {
                cin >> marca;
                cin >> modelo;
                cin >> placa;
                cin >> cor;
                cin >> tipo_servico;

                Veiculo new_veiculo(marca, modelo, placa, cor, tipo_servico);
                novo_cliente.AdicionarVeiculo(new_veiculo);

                cout << "Deseja cadastrar mais um veiculo? (s/N)" << endl;
                cin >> escolha;
                mais_um_veiculo = (escolha == 'S' || escolha == 's');
            } while (mais_um_veiculo);
            clientes.push_back(novo_cliente);

            break;
        // case '2': // excluir cliente
        //     break;
        // case '3': // listar veiculos atendidos
        //     break;
        // case '4': // buscar cliente
        //     break;
        // case '5': // editar informações de cliente
        //     break;
        // case '6': // consultar veiculos em serviço
        //     break;
        case '7': // sair
            cout << "Saindo..." << endl;
            break;
        default:
            cout << "Entrada Invalida!" << endl;
            break;
        }
        sort(clientes.begin(), clientes.end(), compara_nome);
    }
    return 0;
}