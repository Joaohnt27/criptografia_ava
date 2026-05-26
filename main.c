#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAVE 3 // Deslocamento da Cifra de César

void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void processarTexto(char *texto, int chave) {
    for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];
        if (c >= 'a' && c <= 'z') {
            texto[i] = (c - 'a' + chave + 26) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            texto[i] = (c - 'A' + chave + 26) % 26 + 'A';
        }
    }
}

int main() {
    int opcao;
    char conteudo[5000] = "";
    char nomeArquivo[100];

    do {
        printf("\n--- MENU CRIPTOGRAFIA ---\n");
        printf("1- Ler arquivo texto\n");
        printf("2- Criptografar\n");
        printf("3- Descriptografar\n");
        printf("4- Salvar arquivo\n");
        printf("5- Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        limparBuffer();

        switch (opcao) {
            case 1:
                printf("Digite o nome do arquivo (ex: msg.txt): ");
                scanf("%s", nomeArquivo);
                FILE *file = fopen(nomeArquivo, "r");
                if (file == NULL) {
                    printf("Erro ao abrir arquivo!\n");
                } else {
                    fread(conteudo, sizeof(char), 5000, file);
                    fclose(file);
                    printf("\nArquivo lido com sucesso!\nConteudo: %s\n", conteudo);
                }
                break;

            case 2:
                processarTexto(conteudo, CHAVE);
                printf("\nTexto criptografado!\nResultado: %s\n", conteudo);
                break;

            case 3:
                processarTexto(conteudo, -CHAVE);
                printf("\nTexto descriptografado!\nResultado: %s\n", conteudo);
                break;

            case 4:
                printf("Salvar como (ex: resultado.txt): ");
                scanf("%s", nomeArquivo);
                FILE *saveFile = fopen(nomeArquivo, "w");
                fprintf(saveFile, "%s", conteudo);
                fclose(saveFile);
                printf("\nArquivo salvo com sucesso!\n");
                break;

            case 5:
                printf("\nSaindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    return 0;
}