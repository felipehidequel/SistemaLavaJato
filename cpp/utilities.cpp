#include "utilities.hpp"

int compara_nome(Cliente n1, Cliente n2)
{
    string nome1 = n1.getNome();
    string nome2 = n2.getNome();
    return nome1.compare(nome2) < 0;
}

char menu_principal(){
    char escolha;
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