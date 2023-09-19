//função tela inicial
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//funções de telas

void tela_inicial(void);
void tela_sobre_projeto(void);
void tela_sobre_desenvolvedor(void);


void tela_inicial(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Seridó                   ===\n");
    printf("===                Departamento de Computação e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programação                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===          Sistema de Gestão para uma Fábrica de Redes de Dormir          ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Módulo Produtos                                           ===\n");
    printf("===            2. Módulo Vendas                                             ===\n");
    printf("===            3. Módulo Fornecedores                                       ===\n");
    printf("===            4. Sobre o Projeto                                           ===\n");
    printf("===            5. Desenvolvedor                                             ===\n");
    printf("===            0. Encerrar o Programa                                       ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
}
//função sobre
void tela_sobre_projeto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Seridó                   ===\n");
    printf("===                Departamento de Computação e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programação                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===       >>>Sistema de Gestão para uma Fábrica de Redes de Dormir<<<       ===\n");
    printf("===                                                                         ===\n");
    printf("===  Este Programa será usado como forma de avaliação do desempenho do      ===\n");
    printf("===  aluno Danilo Gabriel como programador, como também do seu domínio no   ===\n");
    printf("===  uso do VS Code e de C, na disciplina DCT1106. Este Programa apresenta  ===\n");
    printf("===  os módulos centrais e funcionalidades exigidas para a execução e       ===\n");
    printf("===  avaliação do Projeto desenvolvido, sendo desenvolvido tendo como base  ===\n");
    printf("===  a experiência adquirida assistindo às apresentações e orientações de   ===\n");
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
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Seridó                   ===\n");
    printf("===                Departamento de Computação e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programação                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===       >>>Sistema de Gestão para uma Fábrica de Redes de Dormir<<<       ===\n");
    printf("===                                                                         ===\n");
    printf("===          Projeto Hammock está sendo desenvolvido por:                   ===\n");
    printf("===                                                                         ===\n");
    printf("===          Aluno: Danilo Gabriel de Medeiros Brito                        ===\n");
    printf("===          E-mail: danilogabrill@outlook.com                              ===\n");
    printf("===          Contato: @DaniloMano (Github)                                  ===\n");
    printf("===          Repositório:https://github.com/DaniloMano/DaniloBSI-PROJETO.git===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    getchar();
    printf("===============================================================================");
}