#include <stdio.h>
#include <stdlib.h>
#include "utilgeral.h"
#include "utilidadesprojetodanilo.h"
//tipo abstrato
struct cliente {
char nomecliente[51];
char cpf_cliente[15];
char email_cliente[51];
char celular_cliente[16];
};
//o struct acima põe nos arquivo .h

//switchcase
void do_menu_cliente(void);
void escolha_editar_cliente(void);


//função clientes
void tela_menu_cliente(void);
void tela_cadastrar_cliente(void);
void tela_pesquisar_cliente(void);
void tela_editar_contato_do_cliente(void);
//escolha o que deseja editar
void tela_escolha_editar_cliente(void);
void tela_editar_nome_cliente(void);
void tela_editar_email_cliente(void);
void tela_editar_celular_cliente(void);
//void tela_editar_endereco_cliente(void);

//void tela_deletar_contato_do_cliente(void);
