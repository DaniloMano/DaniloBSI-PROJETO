//função tela inicial
#include <stdio.h>
#include <stdlib.h>

//funções de telas

void tela_inicial(void);
void tela_sobre_projeto(void);
void tela_sobre_desenvolvedor(void);
void tela_apresentacao(void);
void do_menu_apresentacao(void);

void tela_inicial(void)
{   system("clear||cls");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Serido                   ===\n");
    printf("===                Departamento de Computacao e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programacao                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestao para uma Fabrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===          Sistema de Gestao para uma Fabrica de Redes de Dormir          ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Modulo Produtos                                           ===\n");
    printf("===            2. Modulo Vendas                                             ===\n");
    printf("===            3. Modulo Clientes                                           ===\n");
    printf("===            4. Modulo Fornecedores                                       ===\n");
    printf("===            5. Modulo Relatorios                                         ===\n");
    printf("===            6. Telas de Apresentacao                                     ===\n");
    printf("===            0. Encerrar o Programa                                       ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
}
//função sobre
void tela_sobre_projeto(void)
{
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Serido                   ===\n");
    printf("===                Departamento de Computacao e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programacao                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestao para uma Fabrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===       >>>Sistema de Gestao para uma Fabrica de Redes de Dormir<<<       ===\n");
    printf("===                                                                         ===\n");
    printf("===  Este Programa sera usado como forma de avaliacao do desempenho do      ===\n");
    printf("===  aluno Danilo Gabriel como programador, como tambem do seu dominio no   ===\n");
    printf("===  uso do VS Code e de C, na disciplina DCT1106. Este Programa apresenta  ===\n");
    printf("===  os modulos centrais e funcionalidades exigidas para a execucao e       ===\n");
    printf("===  avaliacao do Projeto desenvolvido, sendo desenvolvido tendo como base  ===\n");
    printf("===  a experiencia adquirida assistindo as apresentacoes e orientacoes de   ===\n");
    printf("===  projetos do primeiro semestre.                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===  Aperte ENTER para prosseguir:");
    getchar();
    getchar();
}

//função desenvolvedor
void tela_sobre_desenvolvedor(void)
{
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Serido                   ===\n");
    printf("===                Departamento de Computacao e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programacao                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestao para uma Fabrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===       >>>Sistema de Gestao para uma Fabrica de Redes de Dormir<<<       ===\n");
    printf("===                                                                         ===\n");
    printf("===          Projeto Hammock esta sendo desenvolvido por:                   ===\n");
    printf("===                                                                         ===\n");
    printf("===          Aluno: Danilo Gabriel de Medeiros Brito                        ===\n");
    printf("===          E-mail: danilogabrill@outlook.com                              ===\n");
    printf("===          Contato: @DaniloMano (Github)                                  ===\n");
    printf("===          Repositorio:https://github.com/DaniloMano/DaniloBSI-PROJETO.git===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    getchar();
    printf("===============================================================================");
}

//funções telas de apresentação do projeto
void tela_apresentacao(void){
  {   system("clear||cls");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Serido                   ===\n");
    printf("===                Departamento de Computacao e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programacao                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestao para uma Fabrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===          Sistema de Gestao para uma Fabrica de Redes de Dormir          ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Sobre o Projeto                                           ===\n");
    printf("===            2. Sobre o Dev                                               ===\n");
    printf("===            0. <<Voltar>>                                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
}
}

void do_menu_apresentacao(void) {
    int escolha;

    do {
        tela_apresentacao();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                tela_sobre_projeto();
                break;
            case 2:
                tela_sobre_desenvolvedor();
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
