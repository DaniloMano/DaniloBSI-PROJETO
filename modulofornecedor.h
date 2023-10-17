#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
//tipo abstrato
struct fornecedor {
char nomefornecedor[51];
char cpf_fornecedor[15];
char email_fornecedor[51];
char celular_fornecedor[16];
char endereco_fornecedor[51];
};
//o struct acima põe nos arquivo .h
//switchcase
void escolha_editar_fornecedor(void);


//função fornecedores
void tela_menu_fornecedores(void);
void tela_cadastrar_fornecedor(void);
void tela_pesquisar_fornecedor(void);
void tela_editar_contato_do_fornecedor(void);
//escolha o que deseja editar
void tela_escolha_editar_fornecedores(void);
void tela_editar_nome_fornecedor(void);
void tela_editar_email(void);
void tela_editar_celular(void);
void tela_editar_endereco(void);

void tela_deletar_contato_do_fornecedor(void);
