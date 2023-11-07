/*
anotações para a proxima alteração do modulo:
a atividade da semana 12 diz o seguinte:
Implemente módulos que permitam realizar tanto a exclusão lógica quanto a exclusão física dos dados existentes
nos arquivos do tipo binário existentes no seu projeto.
A exclusão lógica deverá ocorrer quando o usuário optar por excluir um dado que tenha sido anteriormente
armazenado. A exclusão física será executada somente quando o usuário desejar apagar TODOS os dados do programa.
Cada estrutura deverá conter um campo status que indica se aquele registro foi ou não excluído (logicamente).
O programa deverá ainda ser capaz de recuperar os dados excluídos (logicamente) em uma execução anterior.
ou seja, precisamos implantar um menu que permita escolher se vai ser feita a exclusão física ou lógica
e logo depois um switchcase que leve às funções que farão isso, no entanto falta implementar a exclusão lógica
mas parece ser mais simples

logo depois vamos usar a exclusão lógica como base para fazer as funções de edição, pois a exclusão lógica
permite trocar o status dos produtos (de ativo (a) para inativo(i), então é possível usar isso de base
para editar as informações nas outras variáveis dos campos da struct de produtos)

após isso, temos que criar um módulo de relatório que mostre a lista de itens de cada módulo. com tudo isso
pronto, vamos voltar com as funções de validação, e devemos alterar algumas, pois os tipos de algumas
variaveis foram trocadas, e isso vai interferir na forma como as funções de validação funcionam atualmente
funções de validação como as de número e cpf são exemplos das que devem ser revisadas, usaremos como base 
o projeto python para ver como fica a de cpf. Após isso, devemos tentar diminuir funções que aparecem
em cada módulo.
*/

#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
#include "moduloproduto.h"
//funções produtos
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
    scanf("%hd", &rede->codigoproduto);
    printf("===          Nome do Produto: ");
    scanf(" %51[^\n]", rede->nomeproduto);
    printf("===          Preco do Produto: ");
    scanf(" %hd", &rede->preco_produto);
    printf("===          Quantidade: ");
    scanf(" %hd", &rede->quantia_produto);
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
