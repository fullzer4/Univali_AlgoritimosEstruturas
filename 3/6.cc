#include <iostream>
#include <iomanip>

int main() {
    int canal;
    int totalPessoas = 0;
    int pessoasCanal[4] = {0};
    char resposta;

    do {
        std::cout << "Digite o número do canal (4, 5, 9 ou 12): ";
        std::cin >> canal;

        if (canal >= 4 && canal <= 12) {
            int pessoas;
            std::cout << "Digite o número de pessoas assistindo: ";
            std::cin >> pessoas;

            totalPessoas += pessoas;
            pessoasCanal[canal - 4] += pessoas;

            std::cout << "Mais uma casa? S/N: ";
            std::cin >> resposta;
        } else {
            std::cout << "Canal inválido.\n";
            resposta = 'N';
        }
    } while (resposta == 'S' || resposta == 's');

    std::cout << "Percentual de audiência por canal:\n";
    for (int i = 0; i < 4; ++i) {
        double percentual = (pessoasCanal[i] * 100.0) / totalPessoas;
        std::cout << "Canal " << i + 4 << ": " << std::fixed << std::setprecision(2) << percentual << "%\n";
    }

    return 0;
}

