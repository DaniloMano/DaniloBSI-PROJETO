#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
#include "modulovendas.h"
//funções vendas
//telas
void tela_menu_vendas(void)
{   system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Realizar Nova Venda                                         ===\n");
    printf("===          2. Pesquisar Venda no Historico de Vendas                      ===\n");
    printf("===          3. Editar Dados de uma Venda                                   ===\n");
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");

}

Vendido* tela_realizar_venda(void)
{   Vendido* compra;
    
    compra = (Vendido*) malloc(sizeof(Vendido));
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                         |Realizar Venda|                                ===\n");
    getchar();
    printf("===                                                                         ===\n");
    printf("===          Codigo de Venda (Apenas Numeros): ");
    scanf("%hd", &compra->codigo_venda);
    printf("===          Codigo do Produto (Apenas Numeros): ");
    scanf("%hd", &compra->codigo_produto_vendido);
    printf("===          Quantidade a ser Vendida: ");
    scanf(" %hd", &compra->quantia_vendida);
    printf("===          Forma de Pagamento: ");
    scanf(" %c", &compra->forma_pagamento);
    printf("===          CPF/CNPJ do Cliente: ");
    scanf(" %15[^\n]", compra->cpf);
    ver_cpf(compra->cpf);
    compra->atividade = 'a';
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    getchar();
    printf("===============================================================================");
    return compra;
}

//função pra salvar em arquivo:
void salva_venda(Vendido* compra) {
  FILE* fp;
  fp = fopen("vendas.dat", "ab");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  fwrite(compra, sizeof(Vendido), 1, fp);
  fclose(fp);
}

Vendido* tela_pesquisar_venda(void)
{   FILE* fp;
    Vendido* compra;
    short int cod;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Pesquisar Venda|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===          [Digite o codigo de venda da venda voce quer Pesquisar]        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Codigo de Venda(Apenas Numeros): ");
    getchar();
    scanf("%hd", &cod);
    
    compra = (Vendido*) malloc(sizeof(Vendido));
    
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'vendas.dat' ===\n");
        getchar();
        

        free(compra);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(compra, sizeof(Vendido), 1, fp) == 1) {
        if (compra->codigo_venda == cod) {
            fclose(fp);
            return compra;
        }
    }

    fclose(fp);
    free(compra);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

void mostra_venda(Vendido* comp) {
    char estado[20];
    if (comp == NULL) /*|| (red->atividade == 'i')*/ {
    getchar();
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    getchar();
    } else {
        system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                         >>>|MENU VENDAS|<<<                             ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                           |Buscar Venda|                                ===\n");
    printf("===                                                                         ===\n");
    getchar();
    printf("===          Codigo da Venda: %hd\n", comp->codigo_venda);
    printf("===          Codigo do Produto: %hd\n", comp->codigo_produto_vendido);
    printf("===          CPF: %s\n", comp->cpf);
    printf("===          Quantia Vendida: %hd\n", comp->quantia_vendida);
    if (comp->forma_pagamento == 'c') {
      strcpy(estado, "Credito");
    } else if (comp->forma_pagamento == 'd') {
      strcpy(estado, "Debito");}
      else if (comp->forma_pagamento == 'a') {
      strcpy(estado, "A Vista");
    }
    printf("===          Forma de Pagamento: %s\n", estado);
    if (comp->atividade == 'a') {
      strcpy(estado, "Ativo");
    } else if (comp->atividade == 'i') {
      strcpy(estado, "Inativo");}
    printf("===          Atividade: %s\n", estado);
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    getchar();

  }
}

Vendido* tela_editar_venda(void)
{   FILE* fp;
    Vendido* compra;
    short int cod;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                         |Editar Venda|                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===          [Digite o codigo de venda da venda voce quer Editar]           ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Codigo de Venda (Apenas Numeros): ");
    getchar();
    scanf("%hd", &cod);
    
    compra = (Vendido*) malloc(sizeof(Vendido));
    
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'vendas.dat' ===\n");
        getchar();
        free(compra);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(compra, sizeof(Vendido), 1, fp) == 1) {
        if (compra->codigo_venda == cod) {
            fclose(fp);
            return compra;
        }
    }

    fclose(fp);
    free(compra);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}


//escolha o que deseja editar

void tela_escolha_editar_venda(void)
{
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU VENDAS|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |O que deseja editar?|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Produto Vendido                                             ===\n");
    printf("===          2. Quantia Vendida                                             ===\n");
    printf("===          3. Forma de Pagamento                                          ===\n");
    printf("===          4. CPF                                                         ===\n");
    printf("===          5. Cancelar Venda (anulacao de venda)                          ===\n");
    printf("===          0. <<Voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");

}

void tela_editar_produto_vendido(Vendido* compra_editada)
{   FILE* fp;
    Vendido* venda_salva;
    short int codigoproduto_temporario;
    int achou = 0;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU VENDAS|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                     |Editar Produto Vendido|                            ===\n");
    printf("===                                                                         ===\n");
    printf("===       [Digite o novo produto (ou 'cancel' para cancelar a edicao)]      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Insira o Codigo do Produto: ");
    if (compra_editada == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    venda_salva = (Vendido*) malloc(sizeof(Vendido));
    fp = fopen("vendas.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(venda_salva, sizeof(Vendido), 1, fp) == 1) {
        if (venda_salva->codigo_venda == compra_editada->codigo_venda) {
            achou = 1;
            scanf("%hd", &codigoproduto_temporario);
            venda_salva->codigo_produto_vendido = codigoproduto_temporario;
            fseek(fp, -1 * sizeof(Vendido), SEEK_CUR);
            fwrite(venda_salva, sizeof(Vendido), 1, fp);
            printf("=== Venda Editada com Sucesso                                               ===\n");
            getchar();
            getchar();
            break;
        }
    }
    if (!achou) {
    printf("=== Nao foi possivel editar o arquivo                                       ===\n");
    }
    fclose(fp);
    free(venda_salva);
  }

}

void tela_editar_quantidade_vendida(Vendido* compra_editada)
{   FILE* fp;
    Vendido* venda_salva;
    short int quantidade_temporaria;
    int achou = 0;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU Vendas|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    |Editar quantidade vendida|                          ===\n");
    printf("===                                                                         ===\n");
    printf("===   [Digite a nova quantia vendida (ou 'cancel' para cancelar a edicao)]  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Quantia (apenas numeros): ");
    if (compra_editada == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    venda_salva = (Vendido*) malloc(sizeof(Vendido));
    fp = fopen("vendas.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(venda_salva, sizeof(Vendido), 1, fp) == 1) {
        if (venda_salva->codigo_venda == compra_editada->codigo_venda) {
            achou = 1;
            scanf("%hd", &quantidade_temporaria);
            venda_salva->quantia_vendida = quantidade_temporaria;
            fseek(fp, -1 * sizeof(Vendido), SEEK_CUR);
            fwrite(venda_salva, sizeof(Vendido), 1, fp);
            printf("=== Venda Editada com Sucesso                                               ===\n");
            getchar();
            getchar();
            break;
        }
    }
    if (!achou) {
    printf("=== Nao foi possivel editar o arquivo                                       ===\n");
    }
    fclose(fp);
    free(venda_salva);
  }
}

void tela_editar_forma_de_pagamento(Vendido* compra_editada)
{   FILE* fp;
    Vendido* venda_salva;
    char forma_pagamento_temporario;
    int achou = 0;
    system("clear||cls");
    getchar();
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU Vendas|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    |Editar Forma de Pagamento|                          ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite a nova forma de pagamento (ou 'cancel' para cancelar a edicao)] ===\n");
    printf("===                                                                         ===\n");
    printf("===      Forma de Pagamento (c = credito|d = debito| a = a vista): ");
    if (compra_editada == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    venda_salva = (Vendido*) malloc(sizeof(Vendido));
    fp = fopen("vendas.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(venda_salva, sizeof(Vendido), 1, fp) == 1) {
        if (venda_salva->codigo_venda == compra_editada->codigo_venda) {
            achou = 1;
            scanf("%c", &forma_pagamento_temporario);
            venda_salva->forma_pagamento = forma_pagamento_temporario;
            fseek(fp, -1 * sizeof(Vendido), SEEK_CUR);
            fwrite(venda_salva, sizeof(Vendido), 1, fp);
            printf("=== Venda Editada com Sucesso                                               ===\n");
            getchar();
            getchar();
            break;
        }
    }
    if (!achou) {
    printf("=== Nao foi possivel editar o arquivo                                       ===\n");
    }
    fclose(fp);
    free(venda_salva);
  }
}

void tela_editar_cpf(Vendido* compra_editada) {
    FILE* fp;
    Vendido* venda_salva;
    char cpf_temporario[15];
    int achou = 0;
    
        system("clear||cls");
        printf("===============================================================================\n");
        printf("===                    |Danilo's HAMMOCK REST|                              ===\n");
        printf("===============================================================================\n");
        printf("===       |Developed by @DaniloMano -> since Aug, 2023|                     ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===                 |Fabrica de Redes de Dormir|                            ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===                        >>>|MENU VENDAS|<<<                              ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===                            |Editar CPF|                                 ===\n");
        printf("===                                                                         ===\n");
        printf("===     [Digite o novo CPF (ou 'cancel' para cancelar a edicao)]            ===\n");
        printf("===                                                                         ===\n");
        printf("===                                                                         ===\n");
        printf("===     Novo CPF (ate 15 caracteres): ");
        
        if (compra_editada == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    venda_salva = (Vendido*) malloc(sizeof(Vendido));
    fp = fopen("vendas.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(venda_salva, sizeof(Vendido), 1, fp) == 1) {
        if (venda_salva->codigo_venda == compra_editada->codigo_venda) {
            achou = 1;
            scanf(" %15[^\n]", cpf_temporario);
            ver_cpf(cpf_temporario);
            strcpy(venda_salva->cpf, cpf_temporario);
            fseek(fp, -1 * sizeof(Vendido), SEEK_CUR);
            fwrite(venda_salva, sizeof(Vendido), 1, fp);
            printf("=== Produto Editado com Sucesso                                             ===\n");
            getchar();
            getchar();
            break;
        }
    }
    if (!achou) {
    printf("=== Nao foi possivel editar o arquivo                                       ===\n");
    }
    fclose(fp);
    free(venda_salva);
  }
}


//funções de exclusão

Vendido* tela_editar_anular_venda(void)
{   FILE* fp;
    Vendido* compra;
    short int cod;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          |Anular Venda|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o codigo de venda da venda que voce quer anular]         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Codigo de Venda(Apenas Numeros): ");
    getchar();
    scanf("%hd", &cod);
    
    compra = (Vendido*) malloc(sizeof(Vendido));
    
    fp = fopen("vendas.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'vendas.dat' ===\n");
        getchar();
        

        free(compra);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(compra, sizeof(Vendido), 1, fp) == 1) {
        if (compra->codigo_venda == cod) {
            fclose(fp);
            return compra;
        }
    }

    fclose(fp);
    free(compra);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

void do_anula_venda(void) {
    Vendido* compra_nova;
    int escolha;

    do {
        tela_escolha_anular();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                compra_nova = tela_editar_anular_venda();
                deleta_venda(compra_nova);
                getchar();
                free(compra_nova);
                break;
            case 2:
                compra_nova = tela_deletar_arquivo_vendas();
                deleta_arquivo_venda();
                getchar();
                free(compra_nova);
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


void tela_escolha_anular(void)
{
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU VENDA|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Exclusao Fisica ou Logica?|                          ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Exclusao Logica (escolhe o que exclui)                      ===\n");
    printf("===          2. Exclusao Fisica (exclui o 'vendas.dat')                     ===\n");
    printf("===          0. <<<Voltar>>>                                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");

}


void deleta_venda(Vendido* compra_editada) {
  FILE* fp;
  Vendido* venda_salva;
  int achou = 0;
  if (compra_editada == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    venda_salva = (Vendido*) malloc(sizeof(Vendido));
    fp = fopen("vendas.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(venda_salva, sizeof(Vendido), 1, fp) == 1) {
        if (venda_salva->codigo_venda == compra_editada->codigo_venda) {
            achou = 1;
            venda_salva->atividade = 'i';
            fseek(fp, -1 * sizeof(Vendido), SEEK_CUR);
            fwrite(venda_salva, sizeof(Vendido), 1, fp);
            printf("=== Venda Anulada com Sucesso                                               ===\n");
            getchar();
            break;
        }
    }
    if (!achou) {
    printf("=== Nao foi possivel deletar o arquivo                                      ===\n");
    }
    fclose(fp);
    free(venda_salva);
  }
}


Vendido* tela_deletar_arquivo_vendas(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU VENDAS|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                         |Deletar Vendas|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===              [Digite o cpf da venda que voce deseja Deletar]            ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");

    return NULL;
}

void deleta_arquivo_venda(void) {
    char arquivo[] = "vendas.dat";

    if (remove(arquivo) == 0) {
        printf("===    Arquivo Deletado com Sucesso                                         ===\n");
    } else {
        perror("===    Arquivo Nao Encontrado Para Exclusao                               ===\n");
    }
    getchar();
}


//navegação entre "menus"
void escolha_editar_venda(void)
{   Vendido* compra_editada;
    int escolha;
    do {
        tela_escolha_editar_venda();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                compra_editada = tela_editar_venda();
                tela_editar_produto_vendido(compra_editada);
                free(compra_editada);
                break;
            case 2:
                compra_editada = tela_editar_venda();
                tela_editar_quantidade_vendida(compra_editada);
                free(compra_editada);
                break;
            case 3:
                compra_editada = tela_editar_venda();
                tela_editar_forma_de_pagamento(compra_editada);
                free(compra_editada);
                break;
            case 4:
                compra_editada = tela_editar_venda();
                tela_editar_cpf(compra_editada);
                free(compra_editada);
                break;

            case 5:
                do_anula_venda();
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

void do_menu_vendas(void) {
    Vendido* nova_venda;
    int escolha;

    do {
        tela_menu_vendas();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                nova_venda = tela_realizar_venda();
                salva_venda(nova_venda);
                free(nova_venda);
                break;
            case 2:
                nova_venda = tela_pesquisar_venda();
                mostra_venda(nova_venda);
                free(nova_venda);
                break;
            case 3:
                escolha_editar_venda();
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