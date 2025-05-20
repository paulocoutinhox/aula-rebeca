#include <iostream>
#include <string>

int main()
{
    int dinheiro = -10;
    int idade = 13;

    // if ( dinheiro > 0 && idade >= 12) {
    //     std::cout << "crédito aprovado" << std::endl;
    // } else {
    //     std::cout << "crédito não aprovado" << std::endl;
    // }

    if (dinheiro > 0)
    {
        if (idade >= 12)
        {
            std::cout << "crédito aprovado" << std::endl;
        }
        else
        {
            std::cout << "crédito não aprovado por falta de idade" << std::endl;
        }
    }
    else if (dinheiro == 0)
    {
        std::cout << "sua conta está zerada" << std::endl;
    }
    else if (dinheiro < 0)
    {
        std::cout << "sua conta está negativa" << std::endl;
    }

    return EXIT_SUCCESS;
}
