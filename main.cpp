#include <iostream>

using namespace std;

int main() {

    setlocale (LC_ALL, "portuguese");

    int i = 1, soma = 0;

    for (i;i<=100;i++) {

        soma = soma + i;

    }

    cout<< "o resultado da soma é: " << soma <<endl;

    return 0;
}
