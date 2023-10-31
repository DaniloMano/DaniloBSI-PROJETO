#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
typedef struct produto Rede;
//tipo abstrato
struct produto {
short int codigoproduto;
char nomeproduto[51];
char preco_produto[10];
char quantia_produto[10];
};
//o struct acima põe nos arquivo .h
// função produtos
void tela_menu_produtos(void);
Rede* tela_adicionar_produto(void);
Rede* tela_buscar_produto(void);
void tela_editar_produto(void);
//escolha do que deseja editar
void tela_escolha_editar_produto(void);
void tela_editar_nome_do_produto(void);
void tela_editar_preco_do_produto(void);
void tela_editar_quantidade(void);
void tela_editardatafabricacao(void);

Rede* tela_deletar_produto(void);

//função salva arquivo:
void salva_produto(Rede*);

//outras funções:
void mostra_rede(Rede*);
