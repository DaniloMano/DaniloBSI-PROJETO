//modulo feito com base no exemplo fornecido pelo professor flavius
#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
#include "moduloproduto.h"
#include "modulovendas.h"
#include "modulocliente.h"
#include "modulofornecedor.h"

void do_menu_relatorio(void);
void tela_menu_relatorios(void);
//listando produtos
void do_menu_relatorioProdutos(void);
void tela_menu_relatoriosProdutos(void);
void listaProdutos(void);
void listaProdutosPorPreco(void);
void listaProdutosPorQuantidade(void);
void listaProdutosPorFornecedor(void);
void mostra_produto(Rede* red);
char* pega_nome_fornecedor(char* cpf);
//listando vendas
void do_menu_relatorioVendas(void);
void tela_menu_relatoriosVendas(void);
void listaVendas(void);
void listaVendasPorCodigoDoProduto(void);
void listaVendasPorCPF(void);
void listaVendasPorQuantidadeVendida(void);
void listaVendasPorFormaDePagamento(void);
void mostra_listavenda(Vendido*);


//listando clientes
void listaClientes(void);
void mostra_listacliente(Contato*);
//listando fornecedores
void listaFornecedores(void);
void mostra_listafornecedor(Insumo* fornecedor);

void do_menu_relatorio(void) {
    int escolha;

    do {
        // Exibe o menu produtos
        tela_menu_relatorios();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                do_menu_relatorioProdutos();
                break;
            case 2:
                do_menu_relatorioVendas();
                break;
            case 3:
                listaClientes();
                break;
            case 4:
                listaFornecedores();
                break;
            case 0:
                break;
            default:
                printf("===            Opcao invalida. Tente novamente.                             ===\n");
                getchar();
                getchar();
                break;
        }
    } while (escolha != 0);
}
void tela_menu_relatorios(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Listar Produto                                              ===\n");
    printf("===          2. Listar Venda                                                ===\n");
    printf("===          3. Listar Cliente                                              ===\n");
    printf("===          4. Listar Fornecedor                                           ===\n");
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
}
//lista produtos

void do_menu_relatorioProdutos(void) {
    int escolha;

    do {
        tela_menu_relatoriosProdutos();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                listaProdutos();
                break;
            case 2:
                listaProdutosPorPreco();
                break;
            case 3:
                listaProdutosPorQuantidade();
                break;            
            case 4:
                listaProdutosPorFornecedor();
                break;
            case 0:
                break;
            default:
                printf("===            Opcao invalida. Tente novamente.                             ===\n");
                getchar();
                getchar();
                break;
        }
    } while (escolha != 0);
}

void tela_menu_relatoriosProdutos(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Codigo                                                      ===\n");
    printf("===          2. Preco                                                       ===\n");
    printf("===          3. Quantidade                                                  ===\n");
    printf("===          4. Fornecedor                                                  ===\n");
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
}


void listaProdutos(void) {
  FILE* fp;
  Rede* red;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Lista de Produtos|                              ===\n");
    printf("===                                                                         ===\n");
    red = (Rede*) malloc(sizeof(Rede));
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(red, sizeof(Rede), 1, fp)) {
    if (red->atividade != 'i') {
      mostra_produto(red);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(red);
}

void listaProdutosPorPreco(void) {
  FILE* fp;
  Rede* red;
  short int preco_temporario;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Lista de Produtos|                              ===\n");
    printf("===                                                                         ===\n");
    printf("===       Preco (apenas numeros): ");
    scanf("%hd", &preco_temporario);
    red = (Rede*) malloc(sizeof(Rede));
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(red, sizeof(Rede), 1, fp)) {
    if (red->preco_produto == preco_temporario) {
      mostra_produto(red);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(red);
}

void listaProdutosPorQuantidade(void) {
  FILE* fp;
  Rede* red;
  short int quantidade_temporario;
  system("clear||cls");
  printf("===============================================================================\n");
  printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
  printf("===============================================================================\n");
  printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        |Lista de Produtos|                              ===\n");
  printf("===                                                                         ===\n");
  printf("===       Quantidade (apenas numeros): ");
  scanf("%hd", &quantidade_temporario);
  red = (Rede*) malloc(sizeof(Rede));
  fp = fopen("produtos.dat", "rb");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(red, sizeof(Rede), 1, fp)) {
    if (red->quantia_produto == quantidade_temporario) {
      mostra_produto(red);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(red);
}

void listaProdutosPorFornecedor(void) {
  FILE* fp;
  Rede* red;
  char cpf_fornecedor[15];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Lista de Produtos|                              ===\n");
    printf("===                                                                         ===\n");
    printf("===       CPF do Fornecedor: ");
    scanf("%s", cpf_fornecedor);
    red = (Rede*) malloc(sizeof(Rede));
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(red, sizeof(Rede), 1, fp)) {
    if (strcmp(red->cpf_do_fornecedor, cpf_fornecedor) == 0) {
      mostra_produto(red);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(red);
}


void mostra_produto(Rede* red) {
    char estado[7];
    if ((red == NULL) || (red->atividade == 'i')) {
        getchar();
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
        getchar();
    } else {
        printf("===          Codigo: %hd\n", red->codigoproduto);
        printf("===          Nome: %s\n", red->nomeproduto);
        printf("===          Preco: %hd\n", red->preco_produto);
        printf("===          Quantia: %hd\n", red->quantia_produto);
        char* nome_fornecedor = pega_nome_fornecedor(red->cpf_do_fornecedor);
        if (nome_fornecedor != NULL) {
            printf("===          Nome do Fornecedor: %s\n", nome_fornecedor);
        }
        printf("===          CPF do Fornecedor: %s\n", red->cpf_do_fornecedor);
        if (red->atividade == 'a') {
            strcpy(estado, "Ativo");
        } else if (red->atividade == 'i'){
            strcpy(estado, "Inativo");
        }
        printf("===          Atividade: %s\n", estado);
        printf("===                                                                         ===\n");
        printf("===-------------------------------------------------------------------------===\n");
    }
}

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



//lista vendas

void do_menu_relatorioVendas(void) {
    int escolha;

    do {
        // Exibe o menu produtos
        tela_menu_relatoriosVendas();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                listaVendas();
                break;
            case 2:
                listaVendasPorCodigoDoProduto();
                break;
            case 3:
                listaVendasPorCPF();
                break;
            case 4:
                listaVendasPorQuantidadeVendida();
                break;
            case 5:
                listaVendasPorFormaDePagamento();
                break;
            case 0:
                break;
            default:
                printf("===            Opcao invalida. Tente novamente.                             ===\n");
                getchar();
                getchar();
                break;
        }
    } while (escolha != 0);
}



void tela_menu_relatoriosVendas(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Codigo de Vendas                                            ===\n");
    printf("===          2. Codigo Do Produto                                           ===\n");
    printf("===          3. CPF                                                         ===\n");
    printf("===          4. Quantia Vendida                                             ===\n");
    printf("===          5. Forma de Pagamento                                          ===\n");
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
}


void listaVendas(void) {
  FILE* fp;
  Vendido* vend;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Lista de Vendas|                                ===\n");
    printf("===                                                                         ===\n");
    vend = (Vendido*) malloc(sizeof(Vendido));
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(vend, sizeof(Vendido), 1, fp)) {
    if (vend->atividade != 'i') {
      mostra_listavenda(vend);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(vend);
}

void listaVendasPorCodigoDoProduto(void) {
  FILE* fp;
  Vendido* vend;
  short int codigo_produto_temporario;
  system("clear||cls");
  printf("===============================================================================\n");
  printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
  printf("===============================================================================\n");
  printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        |Lista de Vendas|                                ===\n");
  printf("===                                                                         ===\n");
  printf("===       Codigo do Produto (apenas numeros): ");
  scanf("%hd", &codigo_produto_temporario);
  vend = (Vendido*) malloc(sizeof(Vendido));
  fp = fopen("vendas.dat", "rb");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(vend, sizeof(Vendido), 1, fp)) {
    if (vend->codigo_produto_vendido == codigo_produto_temporario) {
      mostra_listavenda(vend);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(vend);
}

void listaVendasPorCPF(void) {
  FILE* fp;
  Vendido* vend;
  char cpf_temporario[15];
  system("clear||cls");
  printf("===============================================================================\n");
  printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
  printf("===============================================================================\n");
  printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        |Lista de Vendas|                                ===\n");
  printf("===                                                                         ===\n");
  printf("===       CPF (apenas numeros): ");
  scanf("%s", cpf_temporario);
  vend = (Vendido*) malloc(sizeof(Vendido));
  fp = fopen("vendas.dat", "rb");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(vend, sizeof(Vendido), 1, fp)) {
    if (strcmp(vend->cpf, cpf_temporario) == 0) {
      mostra_listavenda(vend);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(vend);
}

void listaVendasPorQuantidadeVendida(void) {
  FILE* fp;
  Vendido* vend;
  short int quantia_vendida_temporario;
  system("clear||cls");
  printf("===============================================================================\n");
  printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
  printf("===============================================================================\n");
  printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        |Lista de Vendas|                                ===\n");
  printf("===                                                                         ===\n");
  printf("===       Quantia Vendida (apenas numeros): ");
  scanf("%hd", &quantia_vendida_temporario);
  vend = (Vendido*) malloc(sizeof(Vendido));
  fp = fopen("vendas.dat", "rb");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(vend, sizeof(Vendido), 1, fp)) {
    if (vend->quantia_vendida == quantia_vendida_temporario) {
      mostra_listavenda(vend);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(vend);
}

void listaVendasPorFormaDePagamento(void) {
  FILE* fp;
  Vendido* vend;
  char forma_pagamento_temporario;
  system("clear||cls");
  printf("===============================================================================\n");
  printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
  printf("===============================================================================\n");
  printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        |Lista de Vendas|                                ===\n");
  printf("===                                                                         ===\n");
  printf("===       Forma de Pagamento (apenas um caractere): ");
  scanf(" %c", &forma_pagamento_temporario);
  vend = (Vendido*) malloc(sizeof(Vendido));
  fp = fopen("vendas.dat", "rb");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(vend, sizeof(Vendido), 1, fp)) {
    if (vend->forma_pagamento == forma_pagamento_temporario) {
      mostra_listavenda(vend);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(vend);
}


void mostra_listavenda(Vendido* vend) {
    char estado[7];
    char* nome_produto;
    short int preco_produto;
    char* nome_cliente;
    char* email_cliente;
    char* celular_cliente;

    if ((vend == NULL) || (vend->atividade == 'i')) {
        getchar();
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
        getchar();
    } else {
        printf("===          >>>Info do Produto<<<                                          ===\n");
        printf("===          Codigo do Produto Vendido: %hd\n", vend->codigo_produto_vendido);
        nome_produto = pega_nome_produto(vend->codigo_produto_vendido);
        if (nome_produto != NULL) {
            printf("===          Nome do Produto Vendido: %s\n", nome_produto);
            free(nome_produto);
        }
        preco_produto = pega_preco_produto(vend->codigo_produto_vendido);
        printf("===          Preco do Produto Vendido: %hd\n", preco_produto);
        printf("===          >>>Info do Cliente<<<                                          ===\n");
        nome_cliente = pega_nome_cliente(vend->cpf);
        if (nome_cliente != NULL) {
            printf("===          Nome do Cliente: %s\n", nome_cliente);
            free(nome_cliente);
        }
        printf("===          CPF: %s\n", vend->cpf);
        email_cliente = pega_email_cliente(vend->cpf);
        if (email_cliente != NULL) {
            printf("===          Email do Cliente: %s\n", email_cliente);
            free(email_cliente);
        }
        celular_cliente = pega_celular_cliente(vend->cpf);
        if (celular_cliente != NULL) {
            printf("===          Celular do Cliente: %s\n", celular_cliente);
            free(celular_cliente);
        }
        printf("===          >>>Info da Venda<<<                                            ===\n");
        printf("===          Codigo da Venda: %hd\n", vend->codigo_venda);
        printf("===          Quantidade Vendida: %hd\n", vend->quantia_vendida);
        if (vend->forma_pagamento == 'c') {
            strcpy(estado, "Credito");
        } else if (vend->forma_pagamento == 'd') {
            strcpy(estado, "Debito");
        } else if (vend->forma_pagamento == 'a') {
            strcpy(estado, "A Vista");
        }
        printf("===          Forma de Pagamento: %s\n", estado);
        if (vend->atividade == 'a') {
            strcpy(estado, "Ativo");
        } else if (vend->atividade == 'i'){
            strcpy(estado, "Inativo");
        }
        printf("===          Atividade: %s\n", estado);
        printf("===                                                                         ===\n");
        printf("===-------------------------------------------------------------------------===\n");
    }
}

//lista cliente

void listaClientes(void) {
  FILE* fp;
  Contato* cliente;
  system("clear||cls");
  printf("===============================================================================\n");
  printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
  printf("===============================================================================\n");
  printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        |Lista de Clientes|                               ===\n");
  printf("===                                                                         ===\n");
  cliente = (Contato*) malloc(sizeof(Contato));
  fp = fopen("clientes.dat", "rb");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(cliente, sizeof(Contato), 1, fp)) {
    if (cliente->atividade != 'i') {
      mostra_listacliente(cliente);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(cliente);
}

void mostra_listacliente(Contato* cliente) {
  char estado[7];
  if ((cliente == NULL) || (cliente->atividade == 'i')) {
    getchar();
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    getchar();
  } else {
    printf("===          Nome do Cliente: %s\n", cliente->nomecliente);
    printf("===          CPF: %s\n", cliente->cpf_cliente);
    printf("===          Email: %s\n", cliente->email_cliente);
    printf("===          Celular: %s\n", cliente->celular_cliente);
  if (cliente->atividade == 'a') {
      strcpy(estado, "Ativo");
    }
    printf("===          Atividade: %s\n", estado);    
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
  }
}

//lista fornecedores

void listaFornecedores(void) {
  FILE* fp;
  Insumo* fornecedor;
  system("clear||cls");
  printf("===============================================================================\n");
  printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
  printf("===============================================================================\n");
  printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        >>>|MENU RELATORIOS|<<<                          ===\n");
  printf("===-------------------------------------------------------------------------===\n");
  printf("===                        |Lista de Fornecedores|                           ===\n");
  printf("===                                                                         ===\n");
  fornecedor = (Insumo*) malloc(sizeof(Insumo));
  fp = fopen("fornecedores.dat", "rb");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  while(fread(fornecedor, sizeof(Insumo), 1, fp)) {
    if (fornecedor->atividade != 'i') {
      mostra_listafornecedor(fornecedor);
      printf("===============================================================================\n");
    }
  }
  getchar();
  getchar();
  fclose(fp);
  free(fornecedor);
}

void mostra_listafornecedor(Insumo* fornecedor) {
  char estado[7];
  if ((fornecedor == NULL) || (fornecedor->atividade == 'i')) {
    getchar();
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    getchar();
  } else {
    printf("===          Nome do Fornecedor: %s\n", fornecedor->nomefornecedor);
    printf("===          CPF: %s\n", fornecedor->cpf_fornecedor);
    printf("===          Email: %s\n", fornecedor->email_fornecedor);
    printf("===          Celular: %s\n", fornecedor->celular_fornecedor);
    printf("===          Endereco: %s\n", fornecedor->endereco_fornecedor);
  if (fornecedor->atividade == 'a') {
      strcpy(estado, "Ativo");
    }
    printf("===          Atividade: %s\n", estado);   
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
  }
}
