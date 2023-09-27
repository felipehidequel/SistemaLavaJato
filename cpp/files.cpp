#include "cliente.hpp"
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

vector<Cliente> ler_dados()
{
    vector<Cliente> clientes;

    ifstream arquivo("dados_clientes.txt");

    if (!arquivo.is_open())
        throw runtime_error("Falha ao abrir o arquivo de dados de clientes.");

    string linha;
    while (getline(arquivo, linha))
    {
        // Divida a linha em partes com base no delimitador (vírgula, por exemplo)
        stringstream ss(linha);
        string id_str, nome, telefone;
        if (getline(ss, id_str, ',') && getline(ss, nome, ',') && getline(ss, telefone, ','))
        {
            try
            {
                int id = stoi(id_str);
                Cliente novo_cliente(id, nome, telefone);
                clientes.push_back(novo_cliente);
            }
            catch (const invalid_argument &e)
            {
                cerr << "Erro: ID inválido na linha: " << linha << endl;
            }
            catch (const exception &e)
            {
                cerr << "Erro ao processar a linha: " << linha << " - " << e.what() << endl;
            }
        }
        else
        {
            cerr << "Erro: Formato inválido na linha: " << linha << endl;
        }
    }

    arquivo.close();
    return clientes;
}
