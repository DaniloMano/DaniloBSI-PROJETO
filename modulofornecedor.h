#ifndef MODULOFORNECEDOR_H
#define MODULOFORNECEDOR_H
#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
//tipo abstrato
typedef struct fornecedor Insumo;
struct fornecedor {
char nomefornecedor[51];
char cpf_fornecedor[15];
char email_fornecedor[51];
char celular_fornecedor[16];
char endereco_fornecedor[51];
char atividade;
};
//o struct acima põe nos arquivo .h



//função fornecedores
void tela_menu_fornecedores(void);
Insumo* tela_cadastrar_fornecedor(void);
void salva_fornecedor(Insumo*);
Insumo* tela_pesquisar_fornecedor(void);
void mostra_fornecedor(Insumo*);
Insumo* tela_editar_contato_do_fornecedor(void);

//switchcase
void escolha_editar_fornecedor(void);
void do_menu_fornecedores(void);

//escolha o que deseja editar
void tela_escolha_editar_fornecedores(void);
void tela_editar_nome_fornecedor(Insumo*);
void tela_editar_email_fornecedor(Insumo*);
void tela_editar_celular_fornecedor(Insumo*);
void tela_editar_endereco_fornecedor(Insumo*);
//funcoes de exclusao
Insumo* tela_deletar_contato_do_fornecedor(void);
void do_deleta_fornecedor(void);
void tela_escolha_deletar_fornecedor(void);
void deleta_fornecedor(Insumo*);
Insumo* tela_deletar_arquivo_fornecedores(void);
void deleta_arquivo_fornecedor(void);

#endif