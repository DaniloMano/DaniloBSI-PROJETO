#include "utilgeral.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
// função ler nome
void ver_nome(char *);
// função ler cpf:
void ver_cpf(char *);
// função ler email
void ver_email(char *);
// função ler celular
void ver_celular(char *);
// função ler numero
void ver_numero(char *);
//seguindo a mesma logica do codigo exemplo de flavius
// ler nome
void ver_nome(char *nome) {
  fgets(nome, 51, stdin);
  while (!valida_nome(
      nome)) { // se o valida_nome retorna 1, o loop acaba, se retornar 0, o
               // loop continua pq ta com as logicas invertida
    printf("===          Caractere Invalido. Tente Novamente                   "
           "         ===\n");
    printf("===          Nome: ");
    fgets(nome, 51, stdin);
  }
}
//seguindo a mesma logica do codigo exemplo de flavius
// função para ler cpf
void ver_cpf(char *cpf) {
  do {
    fgets(cpf, 15, stdin);
    limpa_enter(cpf);
    tirapontohifen_cpf(cpf);
    if (!valida_cpf(cpf)) {
      printf("===          CPF Invalido. Tente Novamente                        "
             "          ===\n");
      printf("===          Cpf: ");
      fgets(cpf, 15, stdin);
      limpa_enter(cpf);
      tirapontohifen_cpf(cpf);
    }
  } while (!valida_cpf(cpf));
  getchar();
}
//seguindo a mesma logica do codigo exemplo de flavius
// ler email
void ver_email(char *email) {
  fgets(email, 51, stdin);
  while (!validararrobaeponto(email)) {
    printf("===          E-mail invalido. Tente Novamente                      "
           "      ===\n");
    printf("===          E-mail: ");
    fgets(email, 51, stdin);
  }
  while (!valida_email(email)) {
    printf("===            E-mail invalido. Tente Novamente                    "
           "      ===\n");
    printf("===            E-mail: ");
    fgets(email, 51, stdin);
  }
}
//seguindo a mesma logica do codigo exemplo de flavius
// ler celular
void ver_celular(char *celular) {
  fgets(celular, 16, stdin);
  limpa_enter(celular);
  while (!valida_celular(celular)) {
    printf("===          Celular invalido. Tente Novamente                     "
           "      ===\n");
    printf("===          Celular: ");
    fgets(celular, 16, stdin);
    limpa_enter(celular);
  }
}

// VALIDA APENAS NUMERO
//seguindo a mesma logica do codigo exemplo de flavius
// ler numero
void ver_numero(char *numero) {
  fgets(numero, 10, stdin);
  while (!valida_numero(numero)) {
    printf("===          Numero invalido. Tente Novamente: ");
    fgets(numero, 10, stdin);
  }
}

//outras funções 