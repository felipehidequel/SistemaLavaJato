#include "utilities.hpp"

int compara_nome(Cliente n1, Cliente n2)
{
    string nome1 = n1.getNome();
    string nome2 = n2.getNome();
    return nome1.compare(nome2) < 0;
}

void imprime_clientes(vector<Cliente> clientes)
{
    for (auto x : clientes)
        cout << x.getNome() << x.getTelefone() << endl;
}