#include <stdio.h>
#include <string.h>
#include <ctype.h>

void limpa_enter(char*);

//valida nome
void ver_nome (char*);
int valida_nome(char*);
int eh_letra(char);

//funções de validar cpf:
void ver_cpf (char*);
int valida_cpf(char*);
int tirapontohifen_cpf(char*);

//funções de validar email:
void ver_email(char*);
int valida_email(char*);
int eh_charvalido(char);
int validararrobaeponto(char*);

// funções de validar celular:
void ver_celular(char*);
int valida_celular(char*);
int eh_numerovalido(char);

//VALIDA APENAS NUMERO (codigo, quantidade, preço por exemplo, que so precisam de digitos e '.' ou ',')

//assinatura da função de validar numero
void ler_short_int(short int *numero);

//funções do modulo relatorio:
//relatorio de produtos
char* pega_nome_fornecedor(char* cpf_fornecedor);
//relatorio de vendas
char* pega_nome_produto(short int codigo_produto_vendido);
short int pega_preco_produto(short int codigo_produto_vendido);
char* pega_nome_cliente(char* cpf_cliente);
char* pega_email_cliente(char* cpf_cliente);
char* pega_celular_cliente(char* cpf_cliente);