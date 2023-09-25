#include <iostream>
#include "cliente.hpp"
#include "veiculo.hpp"
#include "utilities.hpp"
#include "menu.hpp"
#include <algorithm>

int main()
{
    vector<Cliente> clientes;
    int id = 0; // token para cliente
    char escolha = '0';
    int cont;

    while (escolha != '7')
    {
        string nome, telefone;                          // atributos clientes
        string marca, modelo, placa, cor, tipo_servico; // atributos veiculos
        bool mais_um_veiculo = true;
        Cliente novo_cliente;

        escolha = menu_principal();
        switch (escolha)
        {
        case '1': // adicionar cliente
            cout << "Digite o nome do cliente: ";
            cin >> nome;
            cout << "Digite o telefone do cliente: ";
            cin >> telefone;
            novo_cliente = Cliente(id, nome, telefone);
            id++;
            do
            {
                cout << "Digite a marca do veiculo: ";
                cin >> marca;
                cout << "Digite o modelo do veiculo: ";
                cin >> modelo;
                cout << "Digite a placa do veiculo: ";
                cin >> placa;
                cout << "Digite a cor do veiculo: ";
                cin >> cor;
                tipo_servico = menu_servico();

                Veiculo new_veiculo(marca, modelo, placa, cor, tipo_servico);
                novo_cliente.AdicionarVeiculo(new_veiculo);

                cout << "Deseja cadastrar mais um veiculo? (s/N)" << endl;
                cin >> escolha;
                mais_um_veiculo = (escolha == 'S' || escolha == 's');
            } while (mais_um_veiculo);
            clientes.push_back(novo_cliente);

            break;
        case '2': // excluir cliente
            if (clientes.size() != 0)
            {
                imprime_clientes(clientes);
                cout << "Informe o nome do cliente que deseja excluir: ";
                cin >> nome;
                for (int i = 0; i < clientes.size(); i++)
                {
                    if (clientes[i].BuscarNome(nome))
                    {
                        clientes[i].Imprime();
                        cout << "Deseja mesmo remover esse cliente?(s/N)" << endl;
                        cin >> escolha;
                        if (escolha == 's' || escolha == 'S')
                        {
                            clientes.erase(clientes.begin() + i);
                            cout << nome << " removido da lista de clientes! " << endl;
                        }
                        break;
                    }
                }
                cout << "Cliente não encontrado!" << endl
                     << "Retornando ao menu principal..." << endl;
            }
            else
                cout << "Lista de clientes vazia!" << endl;
            break;
        case '3': // listar veiculos atendidos
            for (auto cliente : clientes)
            {
                cliente.ListarVeiculos(1);
            }
            break;
        case '4': // buscar cliente
            cont = 0;
            cout << "Informe o nome do cliente: " << endl;
            cin >> nome;
            for (auto cliente : clientes)
            {
                if (cliente.BuscarNome(nome))
                {
                    cliente.Imprime();
                    cont++;
                }
            }
            if (cont != 0)
                cout << "Cliente não encontrado!" << endl;
            break;
        case '5': // editar informações de cliente
            imprime_clientes(clientes);
            cout << "Informe o ID do cliente que deseja editar as informações:" << endl;
            cin >> id;
            for (auto &cliente : clientes)
            {
                if (cliente.BuscarId(id))
                {
                    escolha = menu_altera_dados();
                    switch_altera_dados(escolha, nome, telefone, &cliente);                    
                }
                else
                    cout<< "Cliente não encontrado" << endl;
            }
            break;
        case '6': // consultar veiculos em serviço
            for (auto cliente : clientes)
            {
                cliente.ListarVeiculos(0);
            }
            break;
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