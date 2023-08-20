//===============================================================================
//===               Universidade Federal do Rio Grande do Norte               ===
//===============================================================================
//===                   Centro de Ensino Superior do Seridó                   ===
//===                Departamento de Computação e Tecnologia                  ===
//===                   Disciplina DCT1106 -- Programação                     ===
//===-------------------------------------------------------------------------===
//===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===
//===============================================================================
//===             Developed by @DaniloMano -- since Aug, 2023                 ===
//===============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Funções
void tela_inicial(void);
void tela_sobre_projeto(void);
//void tela_sobre_desenvolvedor(void);
//void tela_menu_produtos(void);
//void tela_adicionar_produto(void);
//void tela_buscar_produto(void);
//void tela_editar_produto(void);
//void tela_deletar_produto(void);

// Função Principal que chama todas as outras
int main(void) {
    tela_inicial();
    tela_sobre_projeto();
    //tela_sobre_desenvolvedor();
    //tela_menu_produtos();
    //tela_adicionar_produto();
    //tela_buscar_produto();
    //tela_editar_produto();
    //tela_deletar_produto();

}

//Funções que serão chamadas pela função main()

void tela_inicial(void)
{   
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================");
    printf("\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===");
    printf("\n");
    printf("===============================================================================");
    printf("\n");
    printf("===                   Centro de Ensino Superior do Seridó                   ===");
    printf("\n");
    printf("===                Departamento de Computação e Tecnologia                  ===");
    printf("\n");
    printf("===                   Disciplina DCT1106 -- Programação                     ===");
    printf("\n");
    printf("===-------------------------------------------------------------------------===");
    printf("\n");
    printf("===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===");
    printf("\n");
    printf("===============================================================================");
    printf("\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===");
    printf("\n");
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
    printf("===            0. Sair                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===            Escolha a opção desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===\t\t Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================\n");
}

void tela_sobre_projeto(void)
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================");
    printf("\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===");
    printf("\n");
    printf("===============================================================================");
    printf("\n");
    printf("===                   Centro de Ensino Superior do Seridó                   ===");
    printf("\n");
    printf("===                Departamento de Computação e Tecnologia                  ===");
    printf("\n");
    printf("===                   Disciplina DCT1106 -- Programação                     ===");
    printf("\n");
    printf("===-------------------------------------------------------------------------===");
    printf("\n");
    printf("===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===");
    printf("\n");
    printf("===============================================================================");
    printf("\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===");
    printf("\n");
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
    printf("===============================================================================");
}
