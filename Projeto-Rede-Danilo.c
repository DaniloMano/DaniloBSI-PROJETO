//===============================================================================
//===               Universidade Federal do Rio Grande do Norte               ===
//===============================================================================
//===                   Centro de Ensino Superior do Serid�                   ===
//===                Departamento de Computa��o e Tecnologia                  ===
//===                   Disciplina DCT1106 -- Programa��o                     ===
//===-------------------------------------------------------------------------===
//===      Projeto Sistema de Gest�o para uma F�brica de Redes de Dormir      ===
//===============================================================================
//===             Developed by @DaniloMano -- since Aug, 2023                 ===
//===============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��es
void tela_inicial(void);
//void tela_sobre_projeto(void);
//void tela_sobre_desenvolvedor(void);
//void tela_menu_produtos(void);
//void tela_adicionar_produto(void);
//void tela_buscar_produto(void);
//void tela_editar_produto(void);
//void tela_deletar_produto(void);

// Programa principal
int main(void) {
    tela_inicial();
    //tela_sobre_projeto();
    //tela_sobre_desenvolvedor();
    //tela_menu_produtos();
    //tela_adicionar_produto();
    //tela_buscar_produto();
    //tela_editar_produto();
    //tela_deletar_produto();

}
//quando for executar, lembrar de fazer esse comando aqui pra 
//fazer os caracteres especiais (acentos) aparecerem

//Fun��es que ser�o chamadas pela fun��o main()
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
    printf("===                   Centro de Ensino Superior do Serid�                   ===");
    printf("\n");
    printf("===                Departamento de Computa��o e Tecnologia                  ===");
    printf("\n");
    printf("===                   Disciplina DCT1106 -- Programa��o                     ===");
    printf("\n");
    printf("===-------------------------------------------------------------------------===");
    printf("\n");
    printf("===      Projeto Sistema de Gest�o para uma F�brica de Redes de Dormir      ===");
    printf("\n");
    printf("===============================================================================");
    printf("\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===");
    printf("\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===          Sistema de Gest�o para uma F�brica de Redes de Dormir          ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. M�dulo Produtos                                           ===\n");
    printf("===            2. M�dulo Vendas                                             ===\n");
    printf("===            3. M�dulo Fornecedores                                       ===\n");
    printf("===            4. Sobre o Projeto                                           ===\n");
    printf("===            5. Desenvolvedor                                             ===\n");
    printf("===            0. Sair                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===            Escolha a op��o desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===\t\t Aperte ENTER para prosseguir");
    getchar();
    printf("===============================================================================");
}
