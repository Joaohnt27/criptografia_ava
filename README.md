# Criptografia AVA

Trabalho do AVA - Tarefa 1 da Unidade 4, desenvolvido para a disciplina de
Segurança da Informação.

## Descrição

Este projeto implementa um programa em linguagem C para criptografar e
descriptografar textos usando a Cifra de César.

A cifra utiliza um deslocamento fixo de 3 posicões no alfabeto. Letras
minúsculas e maiúsculas são processadas, enquanto espaços, números, acentos e
outros spimbolos permanecem inalterados.

## Funcionalidades

- Ler o conteúdo de um arquivo de texto.
- Criptografar o texto lido com a Cifra de César.
- Descriptografar o texto criptografado.
- Salvar o resultado em um novo arquivo.
- Menu interativo no terminal.

## Arquivos do projeto

- `main.c`: código-fonte principal do programa.
- `teste.txt`: arquivo de exemplo para teste de leitura.

## Requisitos

Para compilar e executar o projeto, e necessário ter um compilador C instalado,
como GCC.

## Como compilar

No terminal, dentro da pasta do projeto, execute:

```bash
gcc main.c -o criptografia
```

No Windows, se preferir gerar um executavel com extensão `.exe`, use:

```bash
gcc main.c -o criptografia.exe
```

## Como executar

Depois de compilar, execute:

```bash
./criptografia
```

No Windows:

```bash
.\criptografia.exe
```

## Como usar

Ao executar o programa, será exibido o seguinte menu:

```text
--- MENU CRIPTOGRAFIA ---
1- Ler arquivo texto
2- Criptografar
3- Descriptografar
4- Salvar arquivo
5- Sair
```

Fluxo recomendado:

1. Escolha a opção `1` para ler um arquivo de texto, como `teste.txt`.
2. Escolha a opção `2` para criptografar o conteúdo.
3. Escolha a opção `3` se quiser descriptografar o texto.
4. Escolha a opção `4` para salvar o resultado em outro arquivo.
5. Escolha a opção `5` para encerrar o programa.

## Exemplo

Conteudo original em `teste.txt`:

```text
Ola mundo
```

Apos criptografar com deslocamento 3:

```text
Rod pxqgr
```

## Observações

- O programa trabalha com textos de ate 5000 caracteres.
- A chave da Cifra de César está definida no código pela constante `CHAVE`.
- Para descriptografar, o programa aplica o deslocamento inverso da chave.
