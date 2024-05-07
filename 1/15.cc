#include <iostream>
#include <vector>

int main() {
    std::vector<int> notas = {100, 10, 1};
    
    int valorCompra, valorPago;
    std::cout << "Digite o valor da compra: ";
    std::cin >> valorCompra;
    std::cout << "Digite o valor pago: ";
    std::cin >> valorPago;
    
    int troco = valorPago - valorCompra;
    std::cout << "Troco: " << troco << " reais\n";
    
    std::cout << "Numero mínimo de notas: \n";
    for (int i = 0; i < notas.size(); ++i) {
        int numNotas = troco / notas[i];
        if (numNotas > 0) {
            std::cout << numNotas << " nota(s) de " << notas[i] << " reais\n";
            troco -= numNotas * notas[i];
        }
    }
    
    return 0;
}
