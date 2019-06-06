#include <stdio.h>

/*
Calcular a média das duas notas de um aluno. A primeira nota é igual a 6.5 e a segunda nota é igual a 8.5.
Informe ainda se ele está aprovado ou de prova final, baseado na média de aprovação igual a 7.0.
*/

int main() {
    printf("%s\n", ((6.5 + 8.5) / 2 >= 7 ? "aprovado" : "reprovado"));
    return 0;
}