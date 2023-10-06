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

//assinatura das funções de validar numero
void ver_numero(char*);
int valida_numero(char*);
int eh_numero(char);