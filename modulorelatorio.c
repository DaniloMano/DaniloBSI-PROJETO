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
void listaProdutos(void);
void mostra_produto(Rede* red);
void listaVendas(void);
void mostra_listavenda(Vendido*);
void listaClientes(void);
void mostra_listacliente(Contato*);
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
                listaProdutos();
                break;
            case 2:
                listaVendas();
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
    if (red->atividade == 'a') {
      strcpy(estado, "Ativo");
    }
    printf("===          Atividade: %s\n", estado);
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");


  }
}
//lista vendas

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

void mostra_listavenda(Vendido* vend) {
    char estado[7];
    if ((vend == NULL) || (vend->atividade == 'i')) {
    getchar();
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    getchar();
    } else {
    printf("===          Codigo da Venda: %hd\n", vend->codigo_venda);
    printf("===          Codigo do Produto Vendido: %hd\n", vend->codigo_produto_vendido);
    printf("===          CPF: %s\n", vend->cpf);
    printf("===          Quantidade Vendida: %hd\n", vend->quantia_vendida);
    if (vend->forma_pagamento == 'c') {
      strcpy(estado, "Credito");
    } else if (vend->forma_pagamento == 'd') {
      strcpy(estado, "Debito");}
      else if (vend->forma_pagamento == 'a') {
      strcpy(estado, "A Vista");
    }
    printf("===          Forma de Pagamento: %s\n", estado);
    if (vend->atividade == 'a') {
      strcpy(estado, "Ativo");
    }
    printf("===          Atividade: %s\n", estado);
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
  }
}

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
