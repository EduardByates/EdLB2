#include <iostream>
#include <string>

int main() {
    char countryLetter;
    std::cout << "Введіть першу літеру назви країни: ";
    std::cin >> countryLetter;

    // Використання switch
    switch (countryLetter) {
    case 'L':
    case 'l':
        std::cout << "Африка, площа: 30 млн км^2" << std::endl;  
        break;
    case 'E':
    case 'e':
        std::cout << "Європа, площа: 10 млн км^2" << std::endl;
        break;
    case 'F':
    case 'f':
        std::cout << "Азія, площа: 44 млн км^2" << std::endl;
        break;
    case 'N':
    case 'n':
        std::cout << "Північна Америка, площа: 24 млн км^2" << std::endl;
        break;
    case 'S':
    case 's':
        std::cout << "Південна Америка, площа: 17 млн км^2" << std::endl;
        break;
    case 'O':
    case 'o':
        std::cout << "Океанія, площа: 9 млн км^2" << std::endl;
        break;
    case 'A':
    case 'a':
        std::cout << "Антарктида, площа: 14 млн км^2" << std::endl;
        break;
    default:
        std::cout << "Не вдалося визначити континент для введеної літери." << std::endl;
    }

    // Використання if
    if ((countryLetter == 'A') || (countryLetter == 'a')) {
        std::cout << "Африка, площа: 30 млн км^2" << std::endl;
    }
    else if ((countryLetter == 'E') || (countryLetter == 'e')) {
        std::cout << "Європа, площа: 10 млн км^2" << std::endl;
    }
    else if ((countryLetter == 'A') || (countryLetter == 'a')) {
        std::cout << "Азія, площа: 44 млн км^2" << std::endl;
    }
    else if ((countryLetter == 'N') || (countryLetter == 'n')) {
        std::cout << "Північна Америка, площа: 24 млн км^2" << std::endl;
    }
    else if ((countryLetter == 'S') || (countryLetter == 's')) {
        std::cout << "Південна Америка, площа: 17 млн км^2" << std::endl;
    }
    else if ((countryLetter == 'O') || (countryLetter == 'o')) {
        std::cout << "Океанія, площа: 9 млн км^2" << std::endl;
    }
    else if ((countryLetter == 'A') || (countryLetter == 'a')) {
        std::cout << "Антарктида, площа: 14 млн км^2" << std::endl;
    }
    else {
        std::cout << "Не вдалося визначити континент для введеної літери." << std::endl;
    }

    return 0;
}
