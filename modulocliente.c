#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
#include "modulocliente.h"

//funções sobre clientes
//telas
void tela_menu_cliente(void)
{   system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU CLIENTE|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Cadastrar Novo Cliente                                      ===\n");
    printf("===          2. Pesquisar Cliente                                           ===\n");
    printf("===          3. Editar Contado de um Cliente                                ===\n");
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
}

Contato* tela_cadastrar_cliente(void)
{   Contato* contato;
    contato = (Contato*) malloc(sizeof(Contato));
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Cadastrar Novo Cliente|                              ===\n");
    printf("===                                                                         ===\n");
    getchar();
    printf("===          Nome do Cliente: ");
    scanf(" %51[^\n]", contato->nomecliente);
    printf("===          CPF/CNPJ(Apenas Numeros): ");
    scanf(" %15[^\n]", contato->cpf_cliente);
    ver_cpf(contato->cpf_cliente);    
    printf("===          E-mail: ");
    scanf(" %51[^\n]", contato->email_cliente);
    ver_email(contato->email_cliente);
    printf("===          Celular: ");
    scanf(" %16[^\n]", contato->celular_cliente);
    ver_celular(contato->celular_cliente);
    contato->atividade = 'a';
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    getchar();
    printf("===============================================================================");
    return contato;
}
//salva em arquivo
void salva_cliente(Contato* contato) {
  FILE* fp;
  fp = fopen("clientes.dat", "ab");
  if (fp == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    exit(1);
  }
  fwrite(contato, sizeof(Contato), 1, fp);
  fclose(fp);
}


Contato* tela_pesquisar_cliente(void)
{   
    FILE* fp;
    Contato* contato;
    char cod[15];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Pesquisar Cliente|                                    ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF do Cliente que voce deseja Pesquisar]              ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF(Apenas Numeros): ");
    getchar();
    scanf("%s", cod);
    
    contato = (Contato*) malloc(sizeof(Contato));
    
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'clientes.dat' ===\n");
        getchar();
        

        free(contato);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(contato, sizeof(Contato), 1, fp) == 1) {
        if (strcmp(contato->cpf_cliente, cod) == 0) {
            fclose(fp);
            return contato;
        }
    }

    fclose(fp);
    free(contato);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

void mostra_cliente(Contato* cliente) {
    char estado[20];
    if (cliente == NULL) {
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
        printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===                  |Pesquisar Cliente|                                    ===\n");
        printf("===                                                                         ===\n");
        getchar();
        printf("===          Nome do Cliente: %s\n", cliente->nomecliente);
        printf("===          CPF: %s\n", cliente->cpf_cliente);
        printf("===          E-mail: %s\n", cliente->email_cliente);
        printf("===          Celular: %s\n", cliente->celular_cliente);
        if (cliente->atividade == 'a') {
        strcpy(estado, "Ativo");
        } else if (cliente->atividade == 'i') {
        strcpy(estado, "Inativo");}
        printf("===          Atividade: %s\n", estado);
        printf("===                                                                         ===\n");
        printf("===-------------------------------------------------------------------------===\n");
        printf("===============================================================================\n");
        getchar();
    }
}


Contato* tela_editar_contato_do_cliente(void)
{   
    FILE* fp;
    Contato* contato;
    char cod[15];
    
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Dados do Cliente|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF do Cliente que voce deseja Editar]                 ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF(Apenas Numeros): ");
    getchar();
    scanf("%s", cod);
    
    contato = (Contato*) malloc(sizeof(Contato));
    
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'clientes.dat' ===\n");
        getchar();
        

        free(contato);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(contato, sizeof(Contato), 1, fp) == 1) {
        if (strcmp(contato->cpf_cliente, cod) == 0) {
            fclose(fp);
            return contato;
        }
    }

    fclose(fp);
    free(contato);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}


//escolha o que deseja editar
void tela_escolha_editar_cliente(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fabrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU Cliente|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                     |O que Deseja Editar?|                              ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Nome                                                        ===\n");
    printf("===          2. E-Mail                                                      ===\n");
    printf("===          3. Celular                                                     ===\n");
    printf("===          4. Deletar Cliente                                             ===\n");
    printf("===          0. <<Voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
}


void tela_editar_nome_cliente(Contato* cliente_editado) {
    FILE* fp;
    Contato* cliente_salvo;
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
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Nome do Cliente|                               ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite o novo nome do cliente (ou 'cancel' para cancelar a edicao)]    ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo Nome do Cliente: ");
    getchar();
    if (cliente_editado == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    }
    else {
        cliente_salvo = (Contato*) malloc(sizeof(Contato));
        fp = fopen("clientes.dat", "r+b");
        if (fp == NULL) {
            printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
            exit(1);
        }
        while (fread(cliente_salvo, sizeof(Contato), 1, fp) == 1) {
            if (strcmp(cliente_salvo->cpf_cliente, cliente_editado->cpf_cliente) == 0) {
                achou = 1;
                scanf(" %51[^\n]", nome_temporario);
                strcpy(cliente_salvo->nomecliente, nome_temporario);
                fseek(fp, -1 * sizeof(Contato), SEEK_CUR);
                fwrite(cliente_salvo, sizeof(Contato), 1, fp);
                printf("=== Cliente Editado com Sucesso                                             ===\n");
                getchar();
                getchar();
                break;
            }
        }
        if (!achou) {
            printf("=== Nao foi possivel editar o arquivo                                       ===\n");
        }
        fclose(fp);
        free(cliente_salvo);
    }
}


void tela_editar_email_cliente(Contato* cliente_editado) {
    FILE* fp;
    Contato* cliente_salvo;
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
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar E-Mail do Cliente|                             ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite o novo E-Mail(ou 'cancel' para cancelar a edicao)]              ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo E-Mail do Cliente: ");
    getchar();
    if (cliente_editado == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    }
    else {
        cliente_salvo = (Contato*) malloc(sizeof(Contato));
        fp = fopen("clientes.dat", "r+b");
        if (fp == NULL) {
            printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
            exit(1);
        }
        while (fread(cliente_salvo, sizeof(Contato), 1, fp) == 1) {
            if (strcmp(cliente_salvo->cpf_cliente, cliente_editado->cpf_cliente) == 0) {
                achou = 1;
                fgets(email_temporario, 51, stdin);
                ver_email(email_temporario);
                strcpy(cliente_salvo->email_cliente, email_temporario);
                fseek(fp, -1 * sizeof(Contato), SEEK_CUR);
                fwrite(cliente_salvo, sizeof(Contato), 1, fp);
                printf("=== Cliente Editado com Sucesso                                             ===\n");
                getchar();
                break;
            }
        }
        if (!achou) {
            printf("=== Nao foi possivel editar o arquivo                                       ===\n");
        }
        fclose(fp);
        free(cliente_salvo);
    }
}


void tela_editar_celular_cliente(Contato* cliente_editado) {
    FILE* fp;
    Contato* cliente_salvo;
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
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Celular do Cliente|                            ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite o novo Celular(ou 'cancel' para cancelar a edicao)]             ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo Celular do Cliente: ");
    getchar();
    if (cliente_editado == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
    }
    else {
        cliente_salvo = (Contato*) malloc(sizeof(Contato));
        fp = fopen("clientes.dat", "r+b");
        if (fp == NULL) {
            printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
            exit(1);
        }
        while (fread(cliente_salvo, sizeof(Contato), 1, fp) == 1) {
            if (strcmp(cliente_salvo->cpf_cliente, cliente_editado->cpf_cliente) == 0) {
                achou = 1;
                fgets(celular_temporario, 16, stdin);
                ver_celular(celular_temporario);
                strcpy(cliente_salvo->celular_cliente, celular_temporario);
                fseek(fp, -1 * sizeof(Contato), SEEK_CUR);
                fwrite(cliente_salvo, sizeof(Contato), 1, fp);
                printf("=== Cliente Editado com Sucesso                                             ===\n");
                getchar();
                break;
            }
        }
        if (!achou) {
            printf("=== Nao foi possivel editar o arquivo                                       ===\n");
        }
        fclose(fp);
        free(cliente_salvo);
    }
}

//funcoes exclusao
Contato* tela_deletar_contato_do_cliente(void)
{   
    FILE* fp;
    Contato* cliente;
    char cpf_temporario[15];
    
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                |Deletar Contato de um Cliente|                          ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF do Cliente que voce deseja Deletar]                ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF(Apenas Numeros): ");
    getchar();
    scanf(" %15[^\n]", cpf_temporario);
    
    cliente = (Contato*) malloc(sizeof(Contato));
    
    fp = fopen("clientes.dat", "rb");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo 'clientes.dat' ===\n");
        getchar();
        free(cliente);  // Libera a memória alocada antes de retornar NULL
        return NULL;
    }

    while (fread(cliente, sizeof(Contato), 1, fp) == 1) {
        if (strcmp(cliente->cpf_cliente, cpf_temporario) == 0) {
            fclose(fp);
            return cliente;
        }
    }

    fclose(fp);
    free(cliente);  // Libera a memória alocada antes de retornar NULL
    return NULL;
}

void do_deleta_cliente(void) {
    Contato* cliente_novo;
    int escolha;

    do {
        tela_escolha_deletar_cliente();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                cliente_novo = tela_deletar_contato_do_cliente();
                deleta_cliente(cliente_novo);
                getchar();
                free(cliente_novo);
                break;
            case 2:
                cliente_novo = tela_deletar_arquivo_clientes();
                deleta_arquivo_cliente();
                getchar();
                free(cliente_novo);
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

void tela_escolha_deletar_cliente(void)
{
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===               |Exclusao Fisica ou Logica do Cliente?|                   ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Exclusao Logica (escolhe o que exclui)                      ===\n");
    printf("===          2. Exclusao Fisica (exclui o 'clientes.dat')                   ===\n");
    printf("===          0. <<<Voltar>>>                                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
}

void deleta_cliente(Contato* cliente_editado) {
  FILE* fp;
  Contato* cliente_salvo;
  int achou = 0;
  if (cliente_editado == NULL) {
    printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
  }
  else {
    cliente_salvo = (Contato*) malloc(sizeof(Contato));
    fp = fopen("clientes.dat", "r+b");
    if (fp == NULL) {
        printf("=== Nao foi possivel abrir o arquivo                                        ===\n");
      exit(1);
    }
    while (fread(cliente_salvo, sizeof(Contato), 1, fp) == 1) {
        if (strcmp(cliente_salvo->cpf_cliente, cliente_editado->cpf_cliente) == 0) {
            achou = 1;
            cliente_salvo->atividade = 'i';
            fseek(fp, -1 * sizeof(Contato), SEEK_CUR);
            fwrite(cliente_salvo, sizeof(Contato), 1, fp);
            printf("=== Cliente Deletado com Sucesso                                               ===\n");
            getchar();
            break;
        }
    }
    if (!achou) {
    printf("=== Nao foi possivel deletar o arquivo                                      ===\n");
    }
    fclose(fp);
    free(cliente_salvo);
  }
}

Contato* tela_deletar_arquivo_clientes(void)
{   
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fabrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU CLIENTES|<<<                                ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                 |Deletar Contato de um Cliente|                         ===\n");
    printf("===                                                                         ===\n");
    printf("===              [Digite o CPF do Cliente que voce deseja Deletar]          ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");

    return NULL;
}

void deleta_arquivo_cliente(void) {
    char arquivo[] = "clientes.dat";

    if (remove(arquivo) == 0) {
        printf("===    Arquivo Deletado com Sucesso                                         ===\n");
    } else {
        perror("===    Arquivo Nao Encontrado Para Exclusao                               ===\n");
    }
    getchar();
}


//navegação entre "menus"

void do_menu_clientes(void) {
    Contato* novo_cliente;
    int escolha;

    do {
        tela_menu_cliente();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                novo_cliente = tela_cadastrar_cliente();
                salva_cliente(novo_cliente);
                free(novo_cliente);
                break;
            case 2:
                novo_cliente = tela_pesquisar_cliente();
                mostra_cliente(novo_cliente);
                free(novo_cliente);
                break;
            case 3:
                escolha_editar_cliente();
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


void escolha_editar_cliente(void)
{   
    Contato* cliente_editado;
    int escolha;
    do {
        tela_escolha_editar_cliente();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                cliente_editado = tela_editar_contato_do_cliente();
                tela_editar_nome_cliente(cliente_editado);
                free(cliente_editado);
                break;
            case 2:
                cliente_editado = tela_editar_contato_do_cliente();
                tela_editar_email_cliente(cliente_editado);
                free(cliente_editado);
                break;
            case 3:
                cliente_editado = tela_editar_contato_do_cliente();
                tela_editar_celular_cliente(cliente_editado);
                free(cliente_editado);
                break;
            case 4:
                do_deleta_cliente();
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
