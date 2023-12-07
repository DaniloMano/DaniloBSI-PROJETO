#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
#include "moduloproduto.h"
//funções produtos
//navegação entre "menus"
void escolha_editar_produto(void)
{   Rede* rede_editada;
    int escolha;

    do {
        // Exibe o menu produtos
        //tela_editar_produto();
        tela_escolha_editar_produto();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                rede_editada = tela_editar_produto();
                tela_editar_nome_do_produto(rede_editada);
                free(rede_editada);
                break;
            case 2:
                rede_editada = tela_editar_produto();
                tela_editar_preco_do_produto(rede_editada);
                free(rede_editada);
                break;
            case 3:
                rede_editada = tela_editar_produto();
                tela_editar_quantidade(rede_editada);
                free(rede_editada);
                break;
            case 4:
                rede_editada = tela_editar_produto();
                tela_editar_atividade(rede_editada);
                free(rede_editada);
                break;
            case 0:
                break;
            default:
                printf("===            Opção invalida. Tente novamente.                             ===\n");
                getchar();
                getchar();
                break;
        }
    } while (escolha != 0);
}

void do_menu_produtos(void) {
    Rede* rede_nova;
    int escolha;

    do {
        // Exibe o menu produtos
        tela_menu_produtos();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                rede_nova = tela_adicionar_produto();
                salva_produto(rede_nova);
                free(rede_nova);
                break;
            case 2:
                rede_nova = tela_buscar_produto();
                mostra_rede(rede_nova);
                free(rede_nova);
                break;
            case 3:
                escolha_editar_produto();
                break;
            case 4:
                do_deleta_rede();
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

//telas
void tela_menu_produtos(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU PRODUTOS|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Adicionar Novo Produto                                      ===\n");
    printf("===          2. Buscar Produto em Estoque                                   ===\n");
    printf("===          3. Editar Dados de um Produto                                  ===\n");
    printf("===          4. Deletar Cadastro de um Produto                              ===\n");
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
}

Rede* tela_adicionar_produto(void)
{
    Rede* rede;
    rede = (Rede*) malloc(sizeof(Rede));
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Adicionar Novo Produto|                           ===\n");
    printf("===                                                                         ===\n");
    printf("===          Codigo (Apenas Numeros): ");
    getchar();
    ler_short_int(&rede->codigoproduto);
    printf("===          Nome do Produto: ");
    scanf(" %51[^\n]", rede->nomeproduto);
    ver_nome(rede->nomeproduto);
    printf("===    Preco do Produto(apenas numero): ");
    ler_short_int(&rede->preco_produto);
    printf("===    Quantidade(apenas numero): ");
    ler_short_int(&rede->quantia_produto);
    printf("===          CPF do Fornecedor: ");
    scanf(" %14[^\n]", rede->cpf_do_fornecedor);
    ver_cpf(rede->cpf_do_fornecedor);
    rede->atividade = 'a'; //a= ativo | i = inativo
    //printf("===          Data de Fabricacao:                                            ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
    return rede;
}


//função pra salvar em arquivo:
void salva_produto(Rede* rede) {
  FILE* fp;
  fp = fopen("produtos.dat", "ab");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  fwrite(rede, sizeof(Rede), 1, fp);
  fclose(fp);
}

//função buscar e exibe produto

Rede* tela_buscar_produto(void)
{   FILE* fp;
    Rede* rede;
    int cod;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Buscar Produto|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o codigo do produto que voce deseja Pesquisar]           ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Codigo (Apenas Numeros): ");
    getchar();
    scanf("%d", &cod);
    
    rede = (Rede*) malloc(sizeof(Rede));
    
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'produtos.dat' ===\n");
        getchar();
        

        free(rede);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(rede, sizeof(Rede), 1, fp) == 1) {
        if (rede->codigoproduto == cod) {
            fclose(fp);
            return rede;
        }
    }

    fclose(fp);
    free(rede);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

void mostra_rede(Rede* red) {
    char estado[20];
    if ((red == NULL) /*|| (red->atividade == 'i')*/) {
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
    printf("===                        >>>|MENU PRODUTOS|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          |Buscar Produto|                               ===\n");
    printf("===                                                                         ===\n");
    getchar();
    printf("===          Codigo: %hd\n", red->codigoproduto);
    printf("===          Nome: %s\n", red->nomeproduto);
    printf("===          Preco: %hd\n", red->preco_produto);
    printf("===          Quantia: %hd\n", red->quantia_produto);
    if (red->atividade == 'a') {
      strcpy(estado, "Ativo");
    } else if (red->atividade == 'i') {
      strcpy(estado, "Inativo");}
    printf("===          Atividade: %s\n", estado);
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    getchar();

  }
}

//função de edição

Rede* tela_editar_produto(void)
{   FILE* fp;
    Rede* rede;
    int cod;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Editar Produto|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o codigo do produto que voce deseja Editar]              ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Codigo (Apenas Numeros): ");
    getchar();
    scanf("%d", &cod);
    
    rede = (Rede*) malloc(sizeof(Rede));
    
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'produtos.dat' ===\n");
        getchar();
        

        free(rede);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(rede, sizeof(Rede), 1, fp) == 1) {
        if (rede->codigoproduto == cod) {
            fclose(fp);
            return rede;
        }
    }

    fclose(fp);
    free(rede);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

//escolha do que deseja editar

void tela_escolha_editar_produto(void)
{
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |O que deseja editar?|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Nome do Produto                                             ===\n");
    printf("===          2. Preco do Produto                                            ===\n");
    printf("===          3. Quantidade                                                  ===\n");
    printf("===          4. Atividade (Ativo ou Inativo)                                ===\n");
    printf("===          0. <<Voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");

}

void tela_editar_nome_do_produto(Rede* rede_editada)
{   FILE* fp;
    Rede* rede_salva;
    char nome_temporario[51];
    int achou = 0;

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    |Editar Nome do Produto|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===   [Digite o novo nome do produto (ou 'cancel' para cancelar a edicao)]  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Novo Nome do Produto: ");


  if (rede_editada == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    rede_salva = (Rede*) malloc(sizeof(Rede));
    fp = fopen("produtos.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(rede_salva, sizeof(Rede), 1, fp) == 1) {
        if ((rede_salva->codigoproduto == rede_editada->codigoproduto) && (rede_salva->atividade != 'i')) {
            achou = 1;
            scanf(" %51[^\n]", nome_temporario);
            ver_nome(nome_temporario);
            strcpy(rede_salva->nomeproduto, nome_temporario);
            fseek(fp, -1 * sizeof(Rede), SEEK_CUR);
            fwrite(rede_salva, sizeof(Rede), 1, fp);
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
    free(rede_salva);
  }

}

void tela_editar_preco_do_produto(Rede* rede_editada)
{   FILE* fp;
    Rede* rede_salva;
    short int preco_temporario;
    int achou = 0;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    |Editar preco do Produto|                            ===\n");
    printf("===                                                                         ===\n");
    printf("===   [Digite o novo preco do produto (ou 'cancel' para cancelar a edicao)] ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Novo Preco (apenas numeros): ");
    if (rede_editada == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    rede_salva = (Rede*) malloc(sizeof(Rede));
    fp = fopen("produtos.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(rede_salva, sizeof(Rede), 1, fp) == 1) {
        if ((rede_salva->codigoproduto == rede_editada->codigoproduto) && (rede_salva->atividade != 'i')) {
            achou = 1;
            ler_short_int(&preco_temporario);
            rede_salva->preco_produto = preco_temporario;
            fseek(fp, -1 * sizeof(Rede), SEEK_CUR);
            fwrite(rede_salva, sizeof(Rede), 1, fp);
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
    free(rede_salva);
  }

}

void tela_editar_quantidade(Rede* rede_editada)
{   FILE* fp;
    Rede* rede_salva;
    short int quantia_temporaria;
    int achou = 0;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar quantidade do Produto|                         ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite a nova quantia do produto (ou 'cancel' para cancelar a edicao)] ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Quantia (apenas numeros): ");
if (rede_editada == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    rede_salva = (Rede*) malloc(sizeof(Rede));
    fp = fopen("produtos.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(rede_salva, sizeof(Rede), 1, fp) == 1) {
        if ((rede_salva->codigoproduto == rede_editada->codigoproduto) && (rede_salva->atividade != 'i')) {
            achou = 1;
            ler_short_int(&quantia_temporaria);
            rede_salva->quantia_produto = quantia_temporaria;
            fseek(fp, -1 * sizeof(Rede), SEEK_CUR);
            fwrite(rede_salva, sizeof(Rede), 1, fp);
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
    free(rede_salva);
  }

}

void tela_editar_atividade(Rede* rede_editada) {
    FILE* fp;
    Rede* rede_salva;
    char atividade_temporaria;
    int achou = 0;

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Editar Atividade do Produto|                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      [Digite a nova Atividade (ou 'cancel' para cancelar a edicao)]     ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Atividade ('a' = Ativo || 'i' = Inativo): ");

    if (rede_editada == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    } else {
        rede_salva = (Rede*)malloc(sizeof(Rede));
        fp = fopen("produtos.dat", "r+b");
        if (fp == NULL) {
            printf("=== Nao foi possivel abrir o arquivo 'produtos.dat'                        ===\n");
            exit(1);
        }
        while (fread(rede_salva, sizeof(Rede), 1, fp) == 1) {
            if (rede_salva->codigoproduto == rede_editada->codigoproduto) {
                achou = 1;
                scanf(" %c", &atividade_temporaria);
                rede_salva->atividade = atividade_temporaria;
                fseek(fp, -1 * sizeof(Rede), SEEK_CUR);
                fwrite(rede_salva, sizeof(Rede), 1, fp);
                printf("=== Produto Editado com Sucesso                                            ===\n");
                getchar();
                break;
            }
        }
        if (!achou) {
            printf("=== Nao foi possivel editar o arquivo                                      ===\n");
        }
        fclose(fp);
        free(rede_salva);
    }
}


//funções de exclusão
void do_deleta_rede(void) {
    Rede* rede_nova;
    int escolha;

    do {
        // Exibe o menu produtos
        tela_escolha_deletar();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                rede_nova = tela_deletar_produto();
                deleta_rede(rede_nova);
                getchar();
                free(rede_nova);
                break;
            case 2:
                rede_nova = tela_deletar_arquivo_produto();
                deleta_arquivo_rede();
                getchar();
                free(rede_nova);
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


void tela_escolha_deletar(void)
{
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Exclusao Fisica ou Logica?|                          ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Exclusao Logica (escolhe o que exclui)                      ===\n");
    printf("===          2. Exclusao Fisica (exclui o 'produtos.dat')                   ===\n");
    printf("===          0. <<<Voltar>>>                                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    //printf("===          4. Data de Fabricacao                                          ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");

}
Rede* tela_deletar_produto(void)
{   FILE* fp;
    Rede* rede;
    int cod;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Deletar Produto|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===         [Digite o codigo do produto que voce deseja Deletar]            ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Codigo (Apenas Numeros): ");
    getchar();
    scanf("%d", &cod);
    
    rede = (Rede*) malloc(sizeof(Rede));
    
    fp = fopen("produtos.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'produtos.dat' ===\n");
        getchar();
        

        free(rede);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(rede, sizeof(Rede), 1, fp) == 1) {
        if (rede->codigoproduto == cod) {
            fclose(fp);
            return rede;
        }
    }

    fclose(fp);
    free(rede);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

void deleta_rede(Rede* rede_escolhida) {
  FILE* fp;
  Rede* rede_salva;
  int achou = 0;
  if (rede_escolhida == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    rede_salva = (Rede*) malloc(sizeof(Rede));
    fp = fopen("produtos.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");

      exit(1);
    }
    while (fread(rede_salva, sizeof(Rede), 1, fp) == 1) {
        if ((rede_salva->codigoproduto == rede_escolhida->codigoproduto) && (rede_salva->atividade != 'i')) {
            achou = 1;
            rede_salva->atividade = 'i';
            fseek(fp, -1 * sizeof(Rede), SEEK_CUR);
            fwrite(rede_salva, sizeof(Rede), 1, fp);
            printf("=== Produto Deletado com Sucesso                                            ===\n");
            getchar();
            break;
        }
    }
    if (!achou) {
    printf("=== Nao foi possivel deletar o arquivo                                      ===\n");
    }
    fclose(fp);
    free(rede_salva);
  }
}


Rede* tela_deletar_arquivo_produto(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Deletar Produto|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===         [Digite o codigo do produto que voce deseja Deletar]            ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");

    return NULL;
}

void deleta_arquivo_rede(void) {
    char arquivo[] = "produtos.dat";

    if (remove(arquivo) == 0) {
        printf("===    Arquivo Deletado com Sucesso                                         ===\n");
    } else {
        perror("===    Arquivo Não Encontrado Para Exclusão                               ===\n");
    }
    getchar();
}
