#include <iostream>
#include "cliente.hpp"
#include "veiculo.hpp"

int main() {
    // Criação de clientes
    Cliente cliente1(1, "João", "123456789");
    Cliente cliente2(2, "Maria", "987654321");

    // Criação de veículos
    Veiculo veiculo1("Fiat", "Uno", "123ZAP", "Amarelo", "Lavar");
    Veiculo veiculo2("Ford", "Focus", "456XYZ", "Azul", "Reparar");
    Veiculo veiculo3("Chevrolet", "Cruze", "789ABC", "Prata", "Polir");

    // Adicionar veículos aos clientes
    cliente1.AdicionarVeiculo(veiculo1);
    cliente1.AdicionarVeiculo(veiculo2);
    cliente2.AdicionarVeiculo(veiculo3);

    // Listar veículos dos clientes
    cliente1.ListarVeiculos();
    cliente2.ListarVeiculos();

    return 0;
}