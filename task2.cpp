// Program for Simple Calculator using C++ programming language.

#include <iostream>

int main() 
{
    char operation;
    double num1, num2, result;
    char continueCalculation;

    do 
    {
        std::cout << "Simple Calculator" << std::endl;
        std::cout << "Enter an operation (+, -, *, /): ";
        std::cin >> operation;

        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        switch (operation) 
        {
            case '+':
                result = num1 + num2;
                std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
                break;
            case '-':
                result = num1 - num2;
                std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
                break;
            case '*':
                result = num1 * num2;
                std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
                break;
            case '/':
                if (num2 != 0) 
                {
                    result = num1 / num2;
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                }
                 else 
                {
                    std::cout << "Error: Division by zero is not allowed!" << std::endl;
                }
                break;
            default:
                std::cout << "Error: Invalid operation!" << std::endl;
                break;
        }

        // Ask the user if they want to perform another calculation
        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> continueCalculation;

    } while (continueCalculation == 'y' || continueCalculation == 'Y');

    std::cout << "Thank you for using the calculator. Goodbye!" << std::endl;

    return 0;
}