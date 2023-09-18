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
#include "teladev.h"
#include "moduloproduto.h"
#include "modulovendas.h"
#include "modulofornecedor.h"

// Fun��es
//switchcases

void do_menu_inicial(void);

void do_menu_produtos(void);
void escolha_editar_produto(void);

void do_menu_vendas(void);
void escolha_editar_venda(void);

void do_menu_fornecedores(void);
void escolha_editar_fornecedor(void);

// Fun��o Principal que chama todas as outras
int main(void) {
    do_menu_inicial(); /*vai mostrar as telas menu inicial, menu produto, menu vendas, menu fornecedores e 
                        tela sobre projeto e a tela sobre o desenvolvedor*/
    
    return 0;
}

//Fun��es que ser�o chamadas pela fun��o main()

//fun��o do...while do menu inicial

void do_menu_inicial(void) {
    int escolha;

    do {
        // Exibe o menu inicial
        tela_inicial();
        printf("===            Escolha a op��o desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                do_menu_produtos();
                break;
            case 2:
                do_menu_vendas();
                break;
            case 3:
                do_menu_fornecedores();
                break;
            case 4:
                tela_sobre_projeto();
                break;
            case 5:
                tela_sobre_desenvolvedor();
                break;
            case 0:
                break;
            default:
                printf("===            Op��o inv�lida. Tente novamente.                             ===\n");
                getchar();
                getchar();
                break;
        }
    } while (escolha != 0);
}
