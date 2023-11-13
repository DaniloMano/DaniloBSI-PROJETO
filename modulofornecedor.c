#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
#include "modulofornecedor.h"
//funções fornecedores
//telas
void tela_menu_fornecedores(void)
{   system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Cadastrar Novo Fornecedor                                   ===\n");
    printf("===          2. Pesquisar Contato de um Fornecedor                          ===\n");
    printf("===          3. Editar Dados de um Fornecedor                               ===\n");
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
}

Insumo* tela_cadastrar_fornecedor(void)
{   Insumo* importacao;
    importacao = (Insumo*) malloc(sizeof(Insumo));
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Cadastrar Novo Fornecedor|                           ===\n");
    printf("===                                                                         ===\n");
    getchar();
    printf("===          Nome do Fornecedor: ");
    scanf(" %51[^\n]", importacao->nomefornecedor);
    printf("===          CPF/CNPJ(Apenas Numeros): ");
    scanf(" %15[^\n]", importacao->cpf_fornecedor);
    ver_cpf(importacao->cpf_fornecedor);    
    printf("===          E-mail: ");
    scanf(" %51[^\n]", importacao->email_fornecedor);
    ver_email(importacao->email_fornecedor);
    printf("===          Celular: ");
    scanf(" %16[^\n]", importacao->celular_fornecedor);
    ver_celular(importacao->celular_fornecedor);
    printf("===          Endereco: ");
    scanf(" %51[^\n]", importacao->endereco_fornecedor);
    importacao->atividade = 'a';
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    getchar();
    printf("===============================================================================");
    return importacao;
}

//função pra salvar em arquivo:
void salva_fornecedor(Insumo* importacao) {
  FILE* fp;
  fp = fopen("fornecedores.dat", "ab");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  fwrite(importacao, sizeof(Insumo), 1, fp);
  fclose(fp);
}

Insumo* tela_pesquisar_fornecedor(void)
{   FILE* fp;
    Insumo* importacao;
    char cod[15];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Pesquisar Fornecedor|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que voce deseja Pesquisar]      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Numeros): ");
    getchar();
    scanf("%s", cod);
    
    importacao = (Insumo*) malloc(sizeof(Insumo));
    
    fp = fopen("fornecedores.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'fornecedores.dat' ===\n");
        getchar();
        

        free(importacao);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(importacao, sizeof(Insumo), 1, fp) == 1) {
        if (strcmp(importacao->cpf_fornecedor, cod) == 0) {
            fclose(fp);
            return importacao;
        }
    }

    fclose(fp);
    free(importacao);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

void mostra_fornecedor(Insumo* forn) {
    char estado[20];
    if (forn == NULL) {
        getchar();
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
        getchar();
    } else {
        system("clear||cls");
        printf("===============================================================================\n");
        printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
        printf("===============================================================================\n");
        printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===                  |Pesquisar Fornecedor|                                 ===\n");
        printf("===                                                                         ===\n");
        getchar();
        printf("===          Nome do Fornecedor: %s\n", forn->nomefornecedor);
        printf("===          CPF/CNPJ: %s\n", forn->cpf_fornecedor);
        printf("===          E-mail: %s\n", forn->email_fornecedor);
        printf("===          Celular: %s\n", forn->celular_fornecedor);
        printf("===          Endereco: %s\n", forn->endereco_fornecedor);
        if (forn->atividade == 'a') {
        strcpy(estado, "Ativo");
        } else if (forn->atividade == 'i') {
        strcpy(estado, "Inativo");}
        printf("===          Atividade: %s\n", estado);
        printf("===                                                                         ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===============================================================================\n");
        getchar();
    }
}


Insumo* tela_editar_contato_do_fornecedor(void)
{   
    FILE* fp;
    Insumo* importacao;
    char cod[15];
    
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Dados do Fornecedor|                           ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que voce deseja Editar]         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Numeros): ");
    getchar();
    scanf("%s", cod);
    
    importacao = (Insumo*) malloc(sizeof(Insumo));
    
    fp = fopen("fornecedores.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'fornecedores.dat' ===\n");
        getchar();
        

        free(importacao);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(importacao, sizeof(Insumo), 1, fp) == 1) {
        if (strcmp(importacao->cpf_fornecedor, cod) == 0) {
            fclose(fp);
            return importacao;
        }
    }

    fclose(fp);
    free(importacao);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}


//escolha o que deseja editar
void tela_escolha_editar_fornecedores(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                     |O que Deseja Editar?|                              ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Nome                                                        ===\n");
    printf("===          2. E-Mail                                                      ===\n");
    printf("===          3. Celular                                                     ===\n");
    printf("===          4. Endereco                                                    ===\n");
    printf("===          5. Deletar Fornecedor                                          ===\n");
    printf("===          0. <<Voltar>>                                                  ===\n");
    printf("===-------------------------------------------------------------------------===\n");
}


void tela_editar_nome_fornecedor(Insumo* fornecedor_editado) {
    FILE* fp;
    Insumo* fornecedor_salvo;
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
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Nome do Fornecedor|                            ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite o novo nome do fornecedor (ou 'cancel' para cancelar a edicao)] ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo Nome do Fornecedor: ");
    getchar();
    if (fornecedor_editado == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    }
    else {
        fornecedor_salvo = (Insumo*) malloc(sizeof(Insumo));
        fp = fopen("fornecedores.dat", "r+b");
        if (fp == NULL) {
            printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
            exit(1);
        }
        while (fread(fornecedor_salvo, sizeof(Insumo), 1, fp) == 1) {
            if (strcmp(fornecedor_salvo->cpf_fornecedor, fornecedor_editado->cpf_fornecedor) == 0) {
                achou = 1;
                scanf(" %51[^\n]", nome_temporario);
                strcpy(fornecedor_salvo->nomefornecedor, nome_temporario);
                fseek(fp, -1 * sizeof(Insumo), SEEK_CUR);
                fwrite(fornecedor_salvo, sizeof(Insumo), 1, fp);
                printf("=== Fornecedor Editado com Sucesso                                             ===\n");
                getchar();
                getchar();
                break;
            }
        }
        if (!achou) {
            printf("=== Nao foi possivel editar o arquivo                                       ===\n");
        }
        fclose(fp);
        free(fornecedor_salvo);
    }
}


void tela_editar_email_fornecedor(Insumo* fornecedor_editado) {
    FILE* fp;
    Insumo* fornecedor_salvo;
    char email_temporario[51];
    int achou = 0;
    
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar E-Mail do Fornecedor|                          ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o novo E-Mail(ou 'cancel' para cancelar a edicao)]       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo E-Mail do Fornecedor: ");
    getchar();
    if (fornecedor_editado == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    }
    else {
        fornecedor_salvo = (Insumo*) malloc(sizeof(Insumo));
        fp = fopen("fornecedores.dat", "r+b");
        if (fp == NULL) {
            printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
            exit(1);
        }
        while (fread(fornecedor_salvo, sizeof(Insumo), 1, fp) == 1) {
            if (strcmp(fornecedor_salvo->cpf_fornecedor, fornecedor_editado->cpf_fornecedor) == 0) {
                achou = 1;
                fgets(email_temporario, 51, stdin);
                ver_email(email_temporario);
                strcpy(fornecedor_salvo->email_fornecedor, email_temporario);
                fseek(fp, -1 * sizeof(Insumo), SEEK_CUR);
                fwrite(fornecedor_salvo, sizeof(Insumo), 1, fp);
                printf("=== Fornecedor Editado com Sucesso                                             ===\n");
                getchar();
                break;
            }
        }
        if (!achou) {
            printf("=== Nao foi possivel editar o arquivo                                       ===\n");
        }
        fclose(fp);
        free(fornecedor_salvo);
    }
}


void tela_editar_celular_fornecedor(Insumo* fornecedor_editado) {
    FILE* fp;
    Insumo* fornecedor_salvo;
    char celular_temporario[16];
    int achou = 0;
    
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Celular do Fornecedor|                         ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o novo Celular(ou 'cancel' para cancelar a edicao)]      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo Celular do Fornecedor: ");
    getchar();
    if (fornecedor_editado == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    }
    else {
        fornecedor_salvo = (Insumo*) malloc(sizeof(Insumo));
        fp = fopen("fornecedores.dat", "r+b");
        if (fp == NULL) {
            printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
            exit(1);
        }
        while (fread(fornecedor_salvo, sizeof(Insumo), 1, fp) == 1) {
            if (strcmp(fornecedor_salvo->cpf_fornecedor, fornecedor_editado->cpf_fornecedor) == 0) {
                achou = 1;
                fgets(celular_temporario, 16, stdin);
                ver_celular(celular_temporario);
                strcpy(fornecedor_salvo->celular_fornecedor, celular_temporario);
                fseek(fp, -1 * sizeof(Insumo), SEEK_CUR);
                fwrite(fornecedor_salvo, sizeof(Insumo), 1, fp);
                printf("=== Fornecedor Editado com Sucesso                                             ===\n");
                getchar();
                break;
            }
        }
        if (!achou) {
            printf("=== Nao foi possivel editar o arquivo                                       ===\n");
        }
        fclose(fp);
        free(fornecedor_salvo);
    }
}


void tela_editar_endereco_fornecedor(Insumo* fornecedor_editado) {
    FILE* fp;
    Insumo* fornecedor_salvo;
    char endereco_temporario[51];
    int achou = 0;
    
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                 |Editar Endereco do Fornecedor|                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      [Digite o novo Endereco (ou 'cancel' para cancelar a edicao)]      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo Endereco: ");
    getchar();
    if (fornecedor_editado == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    }
    else {
        fornecedor_salvo = (Insumo*) malloc(sizeof(Insumo));
        fp = fopen("fornecedores.dat", "r+b");
        if (fp == NULL) {
            printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
            exit(1);
        }
        while (fread(fornecedor_salvo, sizeof(Insumo), 1, fp) == 1) {
            if (strcmp(fornecedor_salvo->cpf_fornecedor, fornecedor_editado->cpf_fornecedor) == 0) {
                achou = 1;
                fgets(endereco_temporario, 51, stdin);
                strcpy(fornecedor_salvo->endereco_fornecedor, endereco_temporario);
                fseek(fp, -1 * sizeof(Insumo), SEEK_CUR);
                fwrite(fornecedor_salvo, sizeof(Insumo), 1, fp);
                printf("=== Fornecedor Editado com Sucesso                                             ===\n");
                getchar();
                break;
            }
        }
        if (!achou) {
            printf("=== Nao foi possivel editar o arquivo                                       ===\n");
        }
        fclose(fp);
        free(fornecedor_salvo);
    }
}


Insumo* tela_deletar_contato_do_fornecedor(void)
{   
    FILE* fp;
    Insumo* fornecedor;
    char cpf_temporario[15];
    
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                |Deletar Contato de um Fornecedor|                       ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que voce deseja Deletar]        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Numeros): ");
    getchar();
    scanf(" %15[^\n]", cpf_temporario);
    
    fornecedor = (Insumo*) malloc(sizeof(Insumo));
    
    fp = fopen("fornecedores.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'fornecedores.dat' ===\n");
        getchar();
        free(fornecedor);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(fornecedor, sizeof(Insumo), 1, fp) == 1) {
        if (strcmp(fornecedor->cpf_fornecedor, cpf_temporario) == 0) {
            fclose(fp);
            return fornecedor;
        }
    }

    fclose(fp);
    free(fornecedor);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

//funcoes de exclusao

void do_deleta_fornecedor(void) {
    Insumo* fornecedor_novo;
    int escolha;

    do {
        tela_escolha_deletar_fornecedor();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                fornecedor_novo = tela_deletar_contato_do_fornecedor();
                deleta_fornecedor(fornecedor_novo);
                getchar();
                free(fornecedor_novo);
                break;
            case 2:
                fornecedor_novo = tela_deletar_arquivo_fornecedores();
                deleta_arquivo_fornecedor();
                getchar();
                free(fornecedor_novo);
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

void tela_escolha_deletar_fornecedor(void)
{
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===               |Exclusao Fisica ou Logica do Fornecedor?|                ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Exclusao Logica (escolhe o que exclui)                      ===\n");
    printf("===          2. Exclusao Fisica (exclui o 'fornecedores.dat')               ===\n");
    printf("===          0. <<<Voltar>>>                                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
}

void deleta_fornecedor(Insumo* fornecedor_editado) {
  FILE* fp;
  Insumo* fornecedor_salvo;
  int achou = 0;
  if (fornecedor_editado == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    fornecedor_salvo = (Insumo*) malloc(sizeof(Insumo));
    fp = fopen("fornecedores.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
      exit(1);
    }
    while (fread(fornecedor_salvo, sizeof(Insumo), 1, fp) == 1) {
        if (strcmp(fornecedor_salvo->cpf_fornecedor, fornecedor_editado->cpf_fornecedor) == 0) {
            achou = 1;
            fornecedor_salvo->atividade = 'i';
            fseek(fp, -1 * sizeof(Insumo), SEEK_CUR);
            fwrite(fornecedor_salvo, sizeof(Insumo), 1, fp);
            printf("=== Fornecedor Deletado com Sucesso                                               ===\n");
            getchar();
            break;
        }
    }
    if (!achou) {
    printf("=== Nao foi possivel deletar o arquivo                                      ===\n");
    }
    fclose(fp);
    free(fornecedor_salvo);
  }
}

Insumo* tela_deletar_arquivo_fornecedores(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                 |Deletar Contato de um Fornecedor|                      ===\n");
    printf("===                                                                         ===\n");
    printf("===              [Digite o CPF/CNPJ do Fornecedor que voce deseja Deletar]  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");

    return NULL;
}

void deleta_arquivo_fornecedor(void) {
    char arquivo[] = "fornecedores.dat";

    if (remove(arquivo) == 0) {
        printf("===    Arquivo Deletado com Sucesso                                         ===\n");
    } else {
        perror("===    Arquivo Nao Encontrado Para Exclusao                               ===\n");
    }
    getchar();
}


//navegação entre "menus"

void escolha_editar_fornecedor(void)
{   
    Insumo* fornecedor_editado;
    int escolha;
    do {
        tela_escolha_editar_fornecedores();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                fornecedor_editado = tela_editar_contato_do_fornecedor();
                tela_editar_nome_fornecedor(fornecedor_editado);
                free(fornecedor_editado);
                break;
            case 2:
                fornecedor_editado = tela_editar_contato_do_fornecedor();
                tela_editar_email_fornecedor(fornecedor_editado);
                free(fornecedor_editado);
                break;
            case 3:
                fornecedor_editado = tela_editar_contato_do_fornecedor();
                tela_editar_celular_fornecedor(fornecedor_editado);
                free(fornecedor_editado);
                break;
            case 4:
                fornecedor_editado = tela_editar_contato_do_fornecedor();
                tela_editar_endereco_fornecedor(fornecedor_editado);
                free(fornecedor_editado);
                break;
            case 5:
                do_deleta_fornecedor();
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

void do_menu_fornecedores(void) {
    Insumo* novo_fornecedor;
    int escolha;

    do {
        tela_menu_fornecedores();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                novo_fornecedor = tela_cadastrar_fornecedor();
                salva_fornecedor(novo_fornecedor);
                free(novo_fornecedor);
                break;
            case 2:
                novo_fornecedor = tela_pesquisar_fornecedor();
                mostra_fornecedor(novo_fornecedor);
                free(novo_fornecedor);
                break;
            case 3:
                escolha_editar_fornecedor();
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
