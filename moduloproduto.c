#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
#include "moduloproduto.h"
//funções produtos
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
    scanf("%hd", &rede->codigoproduto);
    printf("===          Nome do Produto: ");
    scanf(" %51[^\n]", rede->nomeproduto);
    printf("===          Preco do Produto: ");
    scanf(" %10[^\n]", rede->preco_produto);
    printf("===          Quantidade: ");
    scanf(" %10[^\n]", rede->quantia_produto);
    //printf("===          Data de Fabricacao:                                            ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
    return rede;
}

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
        getchar();
        getchar();
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
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");

    fclose(fp);
    free(rede);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}
void tela_editar_produto(void)
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
    printf("===                        |Editar Produto|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o codigo do produto que voce deseja Editar]              ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Codigo (Apenas Numeros): ");
    getchar();
    getchar();
    //fgets(rede.codigoproduto, 10, stdin);
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
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
    //printf("===          4. Data de Fabricacao                                          ===\n");
    printf("===          0. <<Voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");

}

void tela_editar_nome_do_produto(void)
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
    printf("===                    |Editar Nome do Produto|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===   [Digite o novo nome do produto (ou 'cancel' para cancelar a edicao)]  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Novo Nome do Produto: ");
    getchar();
    getchar();
    //fgets(rede.nomeproduto, 51, stdin);
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_preco_do_produto(void)
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
    printf("===                    |Editar preco do Produto|                            ===\n");
    printf("===                                                                         ===\n");
    printf("===   [Digite o novo preco do produto (ou 'cancel' para cancelar a edicao)] ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Novo Preco (apenas numeros): ");
    getchar();
    getchar();
    //fgets(rede.preco_produto, 10, stdin);
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_quantidade(void)
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
    printf("===                  |Editar quantidade do Produto|                         ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite a nova quantia do produto (ou 'cancel' para cancelar a edicao)] ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Quantia (apenas numeros): ");
    getchar();
    getchar();
    //fgets(rede.quantia_produto, 10, stdin);
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

/*void tela_editardatafabricacao(void)
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
    printf("===               |Editar data de fabricacao do Produto|                    ===\n");
    printf("===                                                                         ===\n");
    printf("===      [Digite a nova data (ou 'cancel' para cancelar a edicao)]          ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Data (apenas numeros): ");
    getchar();
    fgets(codigoproduto, 10, stdin);
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    getchar();
    printf("===============================================================================");
}*/

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
    printf("===                       |Deletar Produto|                                 ===\n");
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
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    }
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
    while(!feof(fp)) {
    fread(rede, sizeof(Rede), 1, fp);
    if (rede->codigoproduto == cod){
      fclose(fp);
      return rede;
    }
    }
    fclose(fp);
    return NULL;
}
//navegação entre "menus"
void escolha_editar_produto(void)
{
    int escolha;

    do {
        // Exibe o menu produtos
        tela_editar_produto();
        tela_escolha_editar_produto();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                tela_editar_nome_do_produto();
                break;
            case 2:
                tela_editar_preco_do_produto();
                break;
            case 3:
                tela_editar_quantidade();
                break;
            /*case 4:
                tela_editardatafabricacao();
                break;*/
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
                tela_deletar_produto();
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

//função de exibir:
void mostra_rede(Rede* red) {
  if (red == NULL){
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
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
    printf("===          Preco: %s\n", red->preco_produto);
    printf("===          Quantia: %s\n", red->quantia_produto);
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    getchar();

  }
}