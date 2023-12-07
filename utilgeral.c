#include <stdio.h>
#include <string.h>
#include <ctype.h>
//assinaturas
void limpa_enter(char*);
int valida_nome(char*);
int eh_letra(char);
int valida_cpf(char*);
int tirapontohifen_cpf(char*);
int valida_email(char*);
int eh_charvalido(char);
int validararrobaeponto(char*);
int valida_celular(char*);
int eh_numerovalido(char);
int valida_numero(char*);
int eh_numero(char);
//essa é uma função que será útil em mais de uma função (fiz com a ajuda do chatgpt)
void limpa_enter(char* str) {//tive uma ajudinha do chat gpt
    int tamanho = strlen(str);
    if (tamanho > 0 && str[tamanho - 1] == '\n') {
        str[tamanho - 1] = '\0'; // Substitui o '\n' pelo caractere nulo '\0'
    }
}
//seguindo a mesma logica do codigo exemplo de flavius
int valida_nome(char* nome) {
  int tamanho = strlen(nome);
  if (tamanho == 0) { // Verifica se o nome não está vazio
    return 0;
  }
  for (int i = 0; i < tamanho; i++) {
    if (!eh_letra(nome[i])) {
      return 0;
    }
  }
  return 1;
}


int eh_letra(char c) {
  if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ' || c == '.' || c == 13) {
    return 1;
  } else {
    return 0;
  }
}

//funções para ler e validar cpf

int valida_cpf(char* cpf) {//função adaptada da função exemplo valida_cpf em python do primeiro semestre para a linguagem C disponibilizado pelo professor flavius
    int tam = strlen(cpf);
    int soma = 0;
    int d1 = 0;
    int d2 = 0;

    if (tam != 11) {
        return 0;
    }

    for (int i = 0; i < 11; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') {
            return 0;
        }
    }

    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }

    d1 = 11 - (soma % 11);
    if (d1 == 10 || d1 == 11) {
        d1 = 0;
    }

    if (d1 != (cpf[9] - '0')) {
        return 0;
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }

    d2 = 11 - (soma % 11);
    if (d2 == 10 || d2 == 11) {
        d2 = 0;
    }

    if (d2 != (cpf[10] - '0')) {
        return 0;
    }

    return 1;
}

int tirapontohifen_cpf(char* cpf){//obtive ajuda do chatgpt para implementar essa parte
  char* cprlimpo = cpf;
    while (*cpf) {
        if (*cpf != '.' && *cpf != '-') {
            *cprlimpo = *cpf;
            cprlimpo++;
        }
        cpf++;
    }
    *cprlimpo = '\0';
  // Funçãozinha para remover caracteres de nova linha no final da string para n
  return 0;
}

//funções para ler e validar email
//seguindo a mesma logica do codigo exemplo de flavius
int valida_email(char* email) {
  int tamanho;
  validararrobaeponto(email);
  tamanho = strlen(email);
  for (int i = 0; i < tamanho-1; i++) {
    if (!eh_charvalido(email[i])) {
      return 0;
    }
  }
  return 1;  
}

int eh_charvalido(char c) {//seguindo a mesma logica do codigo base
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else if (c == '@') {
    return 1;
  } else if (c == '.') {
    return 1;
  } else if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }  
}
//seguindo a mesma logica do codigo exemplo de flavius
//precisei da ajuda do chatgpt nessa de @ e .
int validararrobaeponto(char* email) {//aqui vamos usar o strchr para verificar a posição desses 2 caracteres e usaremos o if para retornar 1 caso o email realmente tenha exatos 1 @ e 1'.', em que obrigatoriamente venha antes o @ e em algum momento depois o "."
    char *arroba = strchr(email, '@');
    char *ponto = strchr(email, '.');

    if (arroba && ponto && arroba < ponto) {
        int contador_arroba = 0;
        int contador_ponto = 0;
        for (int i = 0; email[i]; i++) {
            if (email[i] == '@') {
                contador_arroba++;
            } else if (email[i] == '.') {
                contador_ponto++;
            }
        }

        if (contador_arroba == 1 && contador_ponto == 1) {
            return 1;
        }
    }

    return 0;
}

//funções para validar celular de forma simplificada
//funções para ler e validar email
//seguindo a mesma logica do codigo exemplo de flavius
int valida_celular(char* celular) {
    // confere se, dentre os 16 espaços de caractere (enter incluso), ao menos 11 deles são números
    int tamanho = strlen(celular);
    int contadorDigitos = 0;

    for (int i = 0; i < tamanho; i++) {
        if (isdigit(celular[i])) {
            contadorDigitos++;
        }
    }

    // Verifica se o número de dígitos numéricos é igual a 11
    if (contadorDigitos == 11) {
        return 1;  // Número de celular válido
    } else {
        return 0;  // Número de celular inválido
    }
}


int eh_numerovalido(char c) {//seguindo a mesma logica do codigo base
  if (c == '-') {
    return 1;
  } else if (c == '(') {
    return 1;
  } else if (c == ')') {
    return 1;
  } else if (c == '.') {
    return 1;
  } else if (c == '/') {
    return 1;
  } else if (c >= '0' && c <= '9') {
    return 1;
  } else if (c == ' ' || c == 13) {
    return 1;
  } else {
    return 0;
  }  
}
