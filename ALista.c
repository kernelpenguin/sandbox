#include <stdio.h>
#include <string.h>

#define MAX_QUERIES 22
#define MAX_ANSWER 254

int main () {
    char queries[MAX_QUERIES][254] = {
        "Faça uma lista de grandes amigos.",
        "Quem você mais via há dez anos atrás?",
        "Quantos você ainda vê todo dia?",
        "Quantos você já não encontra mais?",
        "Faça uma lista dos sonhos que tinha",
        "Quantos você desistiu de sonhar?",
        "Quantos amores jurados pra sempre?",
        "Quantos você conseguiu preservar?",
        "Onde você ainda se reconhece: Na foto passada ou no espelho de agora?",
        "Hoje é do jeito que achou que seria",
        "Quantos amigos você jogou fora?",
        "Quantos mistérios que você sondava?",
        "Quantos você conseguiu entender?",
        "Quantos segredos que você guardava?",
        "Hoje são bobos ninguém quer saber",
        "Quantas mentiras você condenava?",
        "Quantas você teve que cometer?",
        "Quantos defeitos sanados com o tempo?",
        "Eram o melhor que havia em você",
        "Quantas canções que você não cantava e hoje assovia pra sobreviver?",
        "Quantas pessoas que você amava?",
        "Hoje acredita que amam você?",

      };

    char answers[MAX_QUERIES][MAX_ANSWER];

    for (int i = 0; i < MAX_QUERIES; i++) {
        printf("%s\n", queries[i]);
        printf("Answer: ");
        fgets(answers[i], MAX_ANSWER, stdin);

        answers[i][strcspn(answers[i], "\n")] = 0;
    }

    printf("\nOswaldo Montenegro - A Lista.mp3\n");
    for (int i = 0; i < MAX_QUERIES; i++) {
        printf("%s\n", queries[i]);
    }

    return 0;
}
