#include <iostream>

int main() {
    int dog_age = 3;
    
    int early_years = 21; // First two years count as 21 human years
    int later_years = (dog_age > 2) ? (dog_age - 2) * 4 : 0; // Ensure no negative values for later years
    int human_years = early_years + later_years; // Total human years

    std::cout << "My name is Bailey! Ruff ruff, I am " << human_years << " years old in human years." << std::endl;
    
    return 0; // Best practice to include return 0 in main()
}
