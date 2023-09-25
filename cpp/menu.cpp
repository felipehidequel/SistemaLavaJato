#include "menu.hpp"

char menu_principal()
{
    char escolha;
    cout << "SEJA BEM VINDO AO SISTEMA LAVAJATO DOS MENINOS OF PECUARIA" << endl;
    cout << "Escolha uma opção:" << endl;
    cout << "1 - Adicionar cliente" << endl;
    cout << "2 - Excluir cliente" << endl;
    cout << "3 - Listar veículos atendidos" << endl;
    cout << "4 - Buscar cliente" << endl;
    cout << "5 - Editar informações de cliente" << endl;
    cout << "6 - Consultar veículos em serviço" << endl;
    cout << "7 - Sair" << endl;
    cin >> escolha;
    return escolha;
}

string menu_servico()
{
    char escolha;
    string tipo_servico;

    while (true)
    {
        cout << "Escolha uma opção:" << endl;
        cout << "1 - Lavagem simples" << endl;
        cout << "2 - Lavagem com enceramento" << endl;
        cout << "3 - Polimento" << endl;
        cout << "4 - Higienização de ar-condicionado" << endl;
        cout << "5 - Higienização interna" << endl;
        cout << "6 - Limpeza e hidratação de couro" << endl;

        cin >> escolha;
        switch (escolha)
        {
        case '1':
            tipo_servico = "Lavagem simples";
            return tipo_servico;
        case '2':
            tipo_servico = "Lavagem com enceramento";
            return tipo_servico;
        case '3':
            tipo_servico = "Polimento";
            return tipo_servico;
        case '4':
            tipo_servico = "Higienização de ar-condicionado";
            return tipo_servico;
        case '5':
            tipo_servico = "Higienização interna";
            return tipo_servico;
        case '6':
            tipo_servico = "Limpeza e hidratação de couro";
            return tipo_servico;
        default:
            cout << "Digite um numero de 1 a 6" << endl;
        }
    }
}

char menu_altera_dados()
{
    char escolha;
    cout << "O que será alterado?" << endl;
    cout << "1 - Nome" << endl;
    cout << "2 - Telefone" << endl;
    cout << "3 - Ambos" << endl;
    cout << "4 - voltar" << endl;
    cin >> escolha;
    return escolha;
}

void switch_altera_dados(char escolha, string nome, string telefone, Cliente *cliente)
{
    switch (escolha)
    {
    case '1':
        cout << "Digite o novo nome: ";
        cin >> nome;
        cliente->setNome(nome);
        break;
    case '2':
        cout << "Digite o novo telefone: ";
        cin >> telefone;
        cliente->setTelefone(telefone);
        break;
    case '3':
        cout << "Digite o novo nome: ";
        cin >> nome;
        cliente->setNome(nome);
        cout << "Digite o novo telefone: ";
        cin >> telefone;
        cliente->setTelefone(telefone);
        break;
    case '4':
        return;
    default:
        cout << "Entrada invalida!" << endl;
        break;
    }
}