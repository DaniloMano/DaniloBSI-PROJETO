#ifndef MODULOPRODUTOS_H
#define MODULOPRODUTOS_H
#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
typedef struct produto Rede;
//tipo abstrato
struct produto {
short int codigoproduto;
char nomeproduto[51];
short int preco_produto;
short int quantia_produto;
char atividade;
};
//o struct acima põe nos arquivo .h
// função produtos
void tela_menu_produtos(void);
Rede* tela_adicionar_produto(void);
Rede* tela_buscar_produto(void);
Rede* tela_editar_produto(void);
//escolha do que deseja editar
void tela_escolha_editar_produto(void);
void tela_editar_nome_do_produto(Rede*);
void tela_editar_preco_do_produto(Rede*);
void tela_editar_quantidade(Rede*);
void tela_editar_atividade(Rede*);

//funções de exclusão
void do_deleta_rede(void);
void tela_escolha_deletar(void);
Rede* tela_deletar_produto(void);
void deleta_rede(Rede* rede_escolhida);
Rede* tela_deletar_arquivo_produto(void);
void deleta_arquivo_rede(void);

//função salva arquivo:
void salva_produto(Rede*);

//outras funções:
void mostra_rede(Rede*);
#endif