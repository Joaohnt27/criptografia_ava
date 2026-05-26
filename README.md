# Criptografia AVA

Trabalho do AVA - Tarefa 1 da Unidade 4, desenvolvido para a disciplina de
Seguranca da Informacao.

## Descricao

Este projeto implementa um programa em linguagem C para criptografar e
descriptografar textos usando a Cifra de Cesar.

A cifra utiliza um deslocamento fixo de 3 posicoes no alfabeto. Letras
minusculas e maiusculas sao processadas, enquanto espacos, numeros, acentos e
outros simbolos permanecem inalterados.

## Funcionalidades

- Ler o conteudo de um arquivo de texto.
- Criptografar o texto lido com a Cifra de Cesar.
- Descriptografar o texto criptografado.
- Salvar o resultado em um novo arquivo.
- Menu interativo no terminal.

## Arquivos do projeto

- `main.c`: codigo-fonte principal do programa.
- `teste.txt`: arquivo de exemplo para teste de leitura.

## Requisitos

Para compilar e executar o projeto, e necessario ter um compilador C instalado,
como GCC.

## Como compilar

No terminal, dentro da pasta do projeto, execute:

```bash
gcc main.c -o criptografia
```

No Windows, se preferir gerar um executavel com extensao `.exe`, use:

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

Ao executar o programa, sera exibido o seguinte menu:

```text
--- MENU CRIPTOGRAFIA ---
1- Ler arquivo texto
2- Criptografar
3- Descriptografar
4- Salvar arquivo
5- Sair
```

Fluxo recomendado:

1. Escolha a opcao `1` para ler um arquivo de texto, como `teste.txt`.
2. Escolha a opcao `2` para criptografar o conteudo.
3. Escolha a opcao `3` se quiser descriptografar o texto.
4. Escolha a opcao `4` para salvar o resultado em outro arquivo.
5. Escolha a opcao `5` para encerrar o programa.

## Exemplo

Conteudo original em `teste.txt`:

```text
Ola mundo
```

Apos criptografar com deslocamento 3:

```text
Rod pxqgr
```

## Observacoes

- O programa trabalha com textos de ate 5000 caracteres.
- A chave da Cifra de Cesar esta definida no codigo pela constante `CHAVE`.
- Para descriptografar, o programa aplica o deslocamento inverso da chave.
