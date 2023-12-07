#include "utilgeral.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "moduloproduto.h"
#include "modulovendas.h"
#include "modulocliente.h"
#include "modulofornecedor.h"
// função ver nome

void limpar_buffer(void) {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {} // Limpa o buffer de entrada
}

void ver_nome(char *nome) {
  do {
    if (!valida_nome(nome)) {
      printf("===          Nome Invalido. Tente Novamente                                 ===\n");
      printf("===          Nome: ");
      fgets(nome, 51, stdin);
      nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha
    }
    limpar_buffer(); // Limpa o buffer após cada tentativa, válida ou não
  } while (!valida_nome(nome));
}


// função para ler cpf
void ver_cpf(char *cpf) {
  do {
    limpa_enter(cpf);
    tirapontohifen_cpf(cpf);
    if (!valida_cpf(cpf)) {
      printf("===          CPF Invalido. Tente Novamente                        "
             "          ===\n");
      printf("===          Cpf: ");
      fgets(cpf, 15, stdin);
      limpa_enter(cpf);
      tirapontohifen_cpf(cpf);
    }
  } while (!valida_cpf(cpf));
  getchar();
}
//seguindo a mesma logica do codigo exemplo de flavius
// ler email
void ver_email(char *email) {
  while (!validararrobaeponto(email)) {
    printf("===          E-mail invalido. Tente Novamente                      "
           "      ===\n");
    printf("===          E-mail: ");
    fgets(email, 51, stdin);
  }
  while (!valida_email(email)) {
    printf("===            E-mail invalido. Tente Novamente                    "
           "      ===\n");
    printf("===            E-mail: ");
    fgets(email, 51, stdin);
  }
}
//seguindo a mesma logica do codigo exemplo de flavius
// ler celular
void ver_celular(char *celular) {
  limpa_enter(celular);
  while (!valida_celular(celular)) {
    printf("===          Celular invalido. Tente Novamente                     "
           "      ===\n");
    printf("===          Celular: ");
    fgets(celular, 16, stdin);
    limpa_enter(celular);
  }
}

// VALIDA APENAS NUMERO
//seguindo a mesma logica do codigo exemplo de flavius
// ler numero
void ler_short_int(short int *numero) {
    int resultado;
    do {
        resultado = scanf(" %hd", numero);
        limpar_buffer(); // Limpa o buffer de entrada após a tentativa de leitura
        if (resultado == 1) {
            break; // Sai do loop se a entrada for um número válido
        } else {
            printf("=== Entrada invalida. Tente novamente: ");
        }
    } while (resultado != 1);
}

//outras funções
//relatorio de produto
char* pega_nome_fornecedor(char* cpf_fornecedor) {
    FILE* file = fopen("fornecedores.dat", "r");
    Insumo fornecedor;
    char* nome_fornecedor = NULL;

    if (file != NULL) {
        while (fread(&fornecedor, sizeof(Insumo), 1, file)) {
            if (strcmp(fornecedor.cpf_fornecedor, cpf_fornecedor) == 0) {
                nome_fornecedor = malloc(strlen(fornecedor.nomefornecedor) + 1);
                strcpy(nome_fornecedor, fornecedor.nomefornecedor);
                break;
            }
        }
        fclose(file);
    }

    return nome_fornecedor;
}
//relatorio de venda
char* pega_nome_produto(short int codigo_produto_vendido) {
    FILE* file = fopen("produtos.dat", "r");
    Rede produto;
    char* nome_produto = NULL;

    if (file != NULL) {
        while (fread(&produto, sizeof(Rede), 1, file)) {
            if (produto.codigoproduto == codigo_produto_vendido) {
                nome_produto = malloc(strlen(produto.nomeproduto) + 1);
                strcpy(nome_produto, produto.nomeproduto);
                break;
            }
        }
        fclose(file);
    }

    return nome_produto;
}

short int pega_preco_produto(short int codigo_produto_vendido) {
    FILE* file = fopen("produtos.dat", "r");
    Rede produto;
    short int preco_produto = -1; // valor inicial inválido

    if (file != NULL) {
        while (fread(&produto, sizeof(Rede), 1, file)) {
            if (produto.codigoproduto == codigo_produto_vendido) {
                preco_produto = produto.preco_produto;
                break;
            }
        }
        fclose(file);
    }

    return preco_produto;
}

char* pega_nome_cliente(char* cpf_cliente) {
    FILE* file = fopen("clientes.dat", "r");
    Contato cliente;
    char* nome_cliente = NULL;

    if (file != NULL) {
        while (fread(&cliente, sizeof(Contato), 1, file)) {
            if (strcmp(cliente.cpf_cliente, cpf_cliente) == 0) {
                nome_cliente = malloc(strlen(cliente.nomecliente) + 1);
                strcpy(nome_cliente, cliente.nomecliente);
                break;
            }
        }
        fclose(file);
    }

    return nome_cliente;
}

char* pega_email_cliente(char* cpf_cliente) {
    FILE* file = fopen("clientes.dat", "r");
    Contato cliente;
    char* email_cliente = NULL;

    if (file != NULL) {
        while (fread(&cliente, sizeof(Contato), 1, file)) {
            if (strcmp(cliente.cpf_cliente, cpf_cliente) == 0) {
                email_cliente = malloc(strlen(cliente.email_cliente) + 1);
                strcpy(email_cliente, cliente.email_cliente);
                break;
            }
        }
        fclose(file);
    }

    return email_cliente;
}

char* pega_celular_cliente(char* cpf_cliente) {
    FILE* file = fopen("clientes.dat", "r");
    Contato cliente;
    char* celular_cliente = NULL;

    if (file != NULL) {
        while (fread(&cliente, sizeof(Contato), 1, file)) {
            if (strcmp(cliente.cpf_cliente, cpf_cliente) == 0) {
                celular_cliente = malloc(strlen(cliente.celular_cliente) + 1);
                strcpy(celular_cliente, cliente.celular_cliente);
                break;
            }
        }
        fclose(file);
    }

    return celular_cliente;
}

//relatorio de produto