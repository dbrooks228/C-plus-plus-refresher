#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    double root1, root2;

    // Get user input
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    // Calculate discriminant
    double discriminant = (b * b) - (4 * a * c);

    // Check if discriminant is non-negative (real roots)
    if (discriminant >= 0) {
        root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        root2 = (-b - std::sqrt(discriminant)) / (2 * a);

        // Display results
        std::cout << "Root 1 is " << root1 << std::endl;
        std::cout << "Root 2 is " << root2 << std::endl;
    } else {
        std::cout << "No real roots exist (complex numbers not supported in this program)." << std::endl;
    }

    return 0;
}
