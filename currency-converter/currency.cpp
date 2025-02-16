#include <iostream>

int main() {
    // Declare variables to store user input
    double pesos, reais, soles;

    // Prompt user for input
    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;
    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;
    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;

    // Conversion rates as of February 16, 2025
    const double peso_to_usd = 0.000242884; // 1 COP = 0.000242884 USD
    const double real_to_usd = 0.1753;      // 1 BRL = 0.1753 USD
    const double sol_to_usd = 0.27031;      // 1 PEN = 0.27031 USD

    // Calculate total dollars
    double dollars = (pesos * peso_to_usd) + (reais * real_to_usd) + (soles * sol_to_usd);

    // Display the result
    std::cout << "US Dollars = $" << dollars << std::endl;

    return 0;
}
