#ifndef MODULOVENDAS_H
#define MODULOVENDAS_H
#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
//tipo abstrato
typedef struct vendas Vendido;
struct vendas {
short int codigo_venda;
short int codigo_produto_vendido;
char cpf[15];
short int quantia_vendida;
char forma_pagamento;
char atividade;
};
//o struct acima põe nos arquivo .h

//função vendas
void tela_menu_vendas(void);
Vendido* tela_realizar_venda(void);
void salva_venda(Vendido*);
Vendido* tela_pesquisar_venda(void);
void mostra_venda(Vendido*);
Vendido* tela_editar_venda(void);
//escolha o que deseja editar
void tela_escolha_editar_venda(void);
void tela_editar_produto_vendido(Vendido*);
void tela_editar_quantidade_vendida(Vendido*);
void tela_editar_forma_de_pagamento(Vendido*);
void tela_editar_cpf(Vendido*);

//função de exclusão
Vendido* tela_editar_anular_venda(void);
void do_anula_venda(void);
void tela_escolha_anular(void);
void deleta_venda(Vendido*);
Vendido* tela_deletar_arquivo_vendas(void);
void deleta_arquivo_venda(void);
#endif