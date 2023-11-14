#ifndef MODULOCLIENTE_H
#define MODULOCLIENTE_H
#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
//tipo abstrato
typedef struct cliente Contato;

struct cliente {
char nomecliente[51];
char cpf_cliente[15];
char email_cliente[51];
char celular_cliente[16];
char atividade;
};
//o struct acima põe nos arquivo .h

//switchcase
void do_menu_clientes(void);
void escolha_editar_cliente(void);


//função clientes
void tela_menu_cliente(void);
Contato* tela_cadastrar_cliente(void);
void salva_cliente(Contato*);
Contato* tela_pesquisar_cliente(void);
void mostra_cliente(Contato*);
Contato* tela_editar_contato_do_cliente(void);
//escolha o que deseja editar
void tela_escolha_editar_cliente(void);
void tela_editar_nome_cliente(Contato*);
void tela_editar_email_cliente(Contato*);
void tela_editar_celular_cliente(Contato*);
//funcoes exclusao
Contato* tela_deletar_contato_do_cliente(void);
void tela_escolha_deletar_cliente(void);
void deleta_cliente(Contato*);
Contato* tela_deletar_arquivo_clientes(void);
void deleta_arquivo_cliente(void);
#endif