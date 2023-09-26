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
#include "teladev.h"
#include "moduloproduto.h"
#include "modulovendas.h"
#include "modulocliente.h"
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
    do_menu_inicial();
    
    return 0;
}

//Funções que serão chamadas pela função main()

//função do...while do menu inicial

void do_menu_inicial(void) {
    int escolha;

    do {
        // Exibe o menu inicial
        tela_inicial();
        printf("===            Escolha a opcao desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                do_menu_produtos();
                break;
            case 2:
                do_menu_vendas();
                break;
            case 3:
                do_menu_cliente();
                break;
            case 4:
                do_menu_fornecedores();
                break;
            case 5:
                do_menu_apresentacao();
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
