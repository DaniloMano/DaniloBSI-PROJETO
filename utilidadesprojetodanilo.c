#include "utilgeral.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "moduloproduto.h"
#include "modulovendas.h"
#include "modulocliente.h"
#include "modulofornecedor.h"
// função ver nome
void ver_nome(char *nome) {
  while (!valida_nome(
      nome)) { // se o valida_nome retorna 1, o loop acaba, se retornar 0, o
               // loop continua pq ta com as logicas invertida
    printf("===          Caractere Invalido. Tente Novamente                            ===\n");
    printf("===          Nome: ");
    fgets(nome, 51, stdin);
  }
    getchar();
}
//seguindo a mesma logica do codigo exemplo de flavius
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
void ver_numero(char *numero) {
  while (!valida_numero(numero)) {
    printf("===          Numero invalido. Tente Novamente: ");
    fgets(numero, 10, stdin);
  }
}

//outras funções 
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