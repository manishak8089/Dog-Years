#include <iostream>

int main() {
    int dogs_age, humans_age;
    const int first_two_years = 21;
    int later_years;

    std::cout << "Enter the dog's age: ";
    std::cin >> dogs_age;

    if (dogs_age <= 0) {
        std::cout << "Invalid age. Please enter a positive integer.\n";
    } else if (dogs_age == 1) {
        humans_age = first_two_years / 2;
        std::cout << "Human's age is: " << humans_age << "\n";
    } else if (dogs_age == 2) {
        std::cout << "Human's age is: " << first_two_years << "\n";
    } else {
        later_years = (dogs_age - 2) * 4;
        humans_age = first_two_years + later_years;
        std::cout << "Human's age is: " << humans_age << "\n";
    }

    return 0;
}
