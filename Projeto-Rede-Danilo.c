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
#include "teladev.h"
#include "moduloproduto.h"
#include "modulovendas.h"
#include "modulofornecedor.h"

// Funções
//switchcases

void do_menu_inicial(void);

void do_menu_produtos(void);
void escolha_editar_produto(void);

void do_menu_vendas(void);
void escolha_editar_venda(void);

void do_menu_fornecedores(void);
void escolha_editar_fornecedor(void);

// Função Principal que chama todas as outras
int main(void) {
    do_menu_inicial(); /*vai mostrar as telas menu inicial, menu produto, menu vendas, menu fornecedores e 
                        tela sobre projeto e a tela sobre o desenvolvedor*/
    
    return 0;
}

//Funções que serão chamadas pela função main()

//função do...while do menu inicial

void do_menu_inicial(void) {
    int escolha;

    do {
        // Exibe o menu inicial
        tela_inicial();
        printf("===            Escolha a opção desejada: ");
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
                printf("===            Opção inválida. Tente novamente.                             ===\n");
                getchar();
                getchar();
                break;
        }
    } while (escolha != 0);
}
