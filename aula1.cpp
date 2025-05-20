#include <iostream>
#include <string>
#include <ctime>

// função para calcular idade
int calcularIdade(int diaNascimento, int mesNascimento, int anoNascimento) 
{
    std::time_t t = std::time(nullptr);
    std::tm* dataAtual = std::localtime(&t);
    int anoAtual = dataAtual->tm_year + 1900;
    int mesAtual = dataAtual->tm_mon + 1;
    int diaAtual = dataAtual->tm_mday;

    int idade = anoAtual - anoNascimento;
    if (mesAtual < mesNascimento || (mesAtual == mesNascimento && diaAtual < diaNascimento)) {
        idade--;
    }
    return idade;
}

int main() {
    std::string nome;
    std::string sobrenome;
    
    short teste = 10000;

    int dia;
    int mes;
    int anoNascimento;

    dia = 1;
    mes = 10;
    anoNascimento = 1900;

    bool maiorDeIdade;

    // esse bloco soma tudo (int)
    int total = dia + mes + anoNascimento;
    std::cout << "Total: " << total << std::endl;

    // esse bloco soma tudo (string)
    nome = "Rebeca";
    sobrenome = "Coutinho";

    std::string nomeCompleto = nome + " " + sobrenome;

    std::cout << "Nome completo: " << nomeCompleto << std::endl;

    // descobrir se é maior de idade
    if (2025 - anoNascimento >= 18) {
        maiorDeIdade = true;
    } else {
        maiorDeIdade = false;
    }

    if (maiorDeIdade == true) {
        std::cout << "Maior de Idade" << std::endl;
    } else {
        std::cout << "Menor de Idade" << std::endl;
    }

    int resultado = calcularIdade(dia, mes, anoNascimento);
    std::cout << "Sua idade é: " << resultado << " anos." << std::endl;

    int resultado2 = calcularIdade(7, 9, 1985);
    std::cout << "Sua idade é: " << resultado2 << " anos." << std::endl;

    



    
    // std::cout << "Digite seu nome: ";
    // std::getline(std::cin, nome);

    // std::cout << "Digite sua data de nascimento (dia mes ano): ";
    // std::cin >> dia >> mes >> anoNascimento;

    // int idade = calcularIdade(dia, mes, anoNascimento);

    // std::cout << nome << ", sua idade é: " << idade << " anos." << std::endl;

    return 0;
}
