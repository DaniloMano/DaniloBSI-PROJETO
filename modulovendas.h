#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
//tipo abstrato
struct vendas {
char codigoproduto[10];
char forma_pagamento[51];
char cpf[15];
char quantia_vendida[10];
};
//o struct acima põe nos arquivo .h

//função vendas
void tela_menu_vendas(void);
void tela_realizar_venda(void);
void tela_pesquisar_venda(void);
void tela_editar_venda(void);
//escolha o que deseja editar
void tela_escolha_editar_venda(void);
void tela_editar_quantidade_vendida(void);
void tela_editar_forma_de_pagamento(void);
void tela_editar_anular_venda(void);
