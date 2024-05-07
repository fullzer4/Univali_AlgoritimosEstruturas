#include <iostream>
#include <string>

int main() {
    char respostaVenda, respostaFuncionario;
    std::string nome;
    double totalVendas, salario;

    do {
        std::cout << "Digite o nome do vendedor: ";
        std::cin >> nome;

        totalVendas = 0;
        do {
            double preco;
            int quantidade;

            std::cout << "Digite o preço do produto: ";
            std::cin >> preco;
            std::cout << "Digite a quantidade vendida: ";
            std::cin >> quantidade;

            totalVendas += preco * quantidade;

            std::cout << "Este funcionário tem mais uma venda? S/N: ";
            std::cin >> respostaVenda;
        } while (respostaVenda == 'S' || respostaVenda == 's');

        salario = totalVendas * 0.30;

        std::cout << "Nome do vendedor: " << nome << std::endl;
        std::cout << "Total de vendas: R$" << totalVendas << std::endl;
        std::cout << "Salário: R$" << salario << std::endl;

        std::cout << "Deseja digitar os dados de mais um vendedor? S/N: ";
        std::cin >> respostaFuncionario;
    } while (respostaFuncionario == 'S' || respostaFuncionario == 's');

    return 0;
}
