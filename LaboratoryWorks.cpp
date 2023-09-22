#include <functional>
#include <iostream>
#include <vector>

using FuncT = std::function<void()>;

std::vector<FuncT> exes;

namespace lab1 {
    void ex1() {
        std::cout << "Na-na, na-na-na\n"
            << "Ready for my show\n"
            << "Okay, たちまち独壇場\n"
            << "Listen, listen\n"
            << "Na-na, na-na-na\n"
            << "Ready for my show\n"
            << "傾け\n";
    }
    void ex2() {
        float temperature;
        std::cout << "Please, write temperature in degrees Celsius: ";
        std::cin >> temperature;

        temperature = temperature * 9 / 5 + 32;
        std::cout << "Temperature in Fahrenheit: " << temperature << "\n";
    }
    void ex3() {
        int a, b, c, d;
        std::cout << "Write two fractions: ";
        std::cin >> a;
        std::cin.ignore(1);
        std::cin >> b >> c;
        std::cin.ignore(1);
        std::cin >> d;

        std::cout << "Result: " << (a * d + b * c) << '/' << (b * d) << '\n';
    }
    void ex4() {
        int pounds, shilings, pence;
        float price;
        char temp;

        std::cout << "Write your money in old pounds: ";
        std::cin.ignore(2);
        std::cin >> pounds;
        std::cin.ignore(1);
        std::cin >> shilings;
        std::cin.ignore(1);
        std::cin >> pence;

        // std::cout << pounds << ' ' << shilings << ' ' << pence << '\n';

        pence = float(shilings * 12 + pence) / 240 * 100;

        std::cout << "Your new money are £" << pounds << '.' << pence << '\n';
    }
    void ex5() {
        
    }
} // namespace lab1

void do_logic() {
    int op_code;
    std::cout << "Input exercise number: ";
    std::cin >> op_code;
    std::cout << '\n';

    if (op_code > 0 && op_code <= exes.size()) {
        std::cout << "Exercise #" << op_code << '\n';
        exes[op_code - 1]();
    }
    else {
        std::cout << "Wrong exercise code. Terminate...\n";
    }
}

int main() {
    exes.push_back(lab1::ex1);
    exes.push_back(lab1::ex2);
    exes.push_back(lab1::ex3);
    exes.push_back(lab1::ex4);
    do_logic();
}