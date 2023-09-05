//===============================================================================
//===               Universidade Federal do Rio Grande do Norte               ===
//===============================================================================
//===                   Centro de Ensino Superior do Seridó                   ===
//===                Departamento de Computação e Tecnologia                  ===
//===                   Disciplina DCT1106 -- Programação                     ===
//===-------------------------------------------------------------------------===
//===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===
//===============================================================================
//===             Developed by @DaniloMano -- since Aug, 2023                 ===
//===============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Funções
void tela_inicial(void);
void tela_sobre_projeto(void);
void tela_sobre_desenvolvedor(void);
// função produtos
void tela_menu_produtos(void);
void tela_adicionar_produto(void);
void tela_buscar_produto(void);
void tela_editar_produto(void);
//escolha do que deseja editar
void tela_escolha_editar_produto(void);
void tela_editar_nome_do_produto(void);
void tela_editar_preco_do_produto(void);
void tela_editar_quantidade(void);
void tela_editardatafabricacao(void);
void tela_deletar_produto(void);

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


// Função Principal que chama todas as outras
int main(void) {
    tela_inicial();
    tela_sobre_projeto();
    tela_sobre_desenvolvedor();

    //modulo produtos
    tela_menu_produtos();
    tela_adicionar_produto();
    tela_buscar_produto();
    tela_editar_produto();
    //escolha o que deseja editar
    tela_escolha_editar_produto();
    tela_editar_nome_do_produto();
    tela_editar_preco_do_produto();
    tela_editar_quantidade();
    tela_editardatafabricacao();
    tela_deletar_produto();

    //modulo vendas
    tela_menu_vendas();
    tela_realizar_venda();
    tela_pesquisar_venda();
    tela_editar_venda();
    //escolha o que deseja editar
    tela_escolha_editar_venda();
    tela_editar_quantidade_vendida();
    tela_editar_forma_de_pagamento();
    tela_editar_anular_venda();

    //modulo fornecedores
    tela_menu_fornecedores();
    tela_cadastrar_fornecedor();
    tela_pesquisar_fornecedor();
    tela_editar_contato_do_fornecedor();
    //escolha o que deseja editar
    tela_escolha_editar_fornecedores();
    tela_editar_nome_fornecedor();
    tela_editar_email();
    tela_editar_celular();
    tela_editar_endereco();
    tela_deletar_contato_do_fornecedor();
}

//Funções que serão chamadas pela função main()

//função tela inicial
void tela_inicial(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Seridó                   ===\n");
    printf("===                Departamento de Computação e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programação                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===          Sistema de Gestão para uma Fábrica de Redes de Dormir          ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Módulo Produtos                                           ===\n");
    printf("===            2. Módulo Vendas                                             ===\n");
    printf("===            3. Módulo Fornecedores                                       ===\n");
    printf("===            4. Sobre o Projeto                                           ===\n");
    printf("===            5. Desenvolvedor                                             ===\n");
    printf("===            0. Sair                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===            Escolha a opção desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===\t\t Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================\n");
}

//função sobre
void tela_sobre_projeto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Seridó                   ===\n");
    printf("===                Departamento de Computação e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programação                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===       >>>Sistema de Gestão para uma Fábrica de Redes de Dormir<<<       ===\n");
    printf("===                                                                         ===\n");
    printf("===  Este Programa será usado como forma de avaliação do desempenho do      ===\n");
    printf("===  aluno Danilo Gabriel como programador, como também do seu domínio no   ===\n");
    printf("===  uso do VS Code e de C, na disciplina DCT1106. Este Programa apresenta  ===\n");
    printf("===  os módulos centrais e funcionalidades exigidas para a execução e       ===\n");
    printf("===  avaliação do Projeto desenvolvido, sendo desenvolvido tendo como base  ===\n");
    printf("===  a experiência adquirida assistindo às apresentações e orientações de   ===\n");
    printf("===  projetos do primeiro semestre.                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===  Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

//função desenvolvedor
void tela_sobre_desenvolvedor(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Seridó                   ===\n");
    printf("===                Departamento de Computação e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programação                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gestão para uma Fábrica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===       >>>Sistema de Gestão para uma Fábrica de Redes de Dormir<<<       ===\n");
    printf("===                                                                         ===\n");
    printf("===          Projeto Hammock está sendo desenvolvido por:                   ===\n");
    printf("===                                                                         ===\n");
    printf("===          Aluno: Danilo Gabriel de Medeiros Brito                        ===\n");
    printf("===          E-mail: danilogabrill@outlook.com                              ===\n");
    printf("===          Contato: @DaniloMano (Github)                                  ===\n");
    printf("===          Repositório:https://github.com/DaniloMano/DaniloBSI-PROJETO.git===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

//funções produtos
void tela_menu_produtos(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fábrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        >>>|MENU PRODUTOS|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Adicionar Novo Produto                                      ===\n");
    printf("===          2. Buscar Produto em Estoque                                   ===\n");
    printf("===          3. Editar Dados de um Produto                                  ===\n");
    printf("===          4. Deletar Cadastro de um Produto                              ===\n");
    printf("===          0. Sair                                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===          Escolha a opção desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_adicionar_produto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Adicionar Novo Produto|                           ===\n");
    printf("===                                                                         ===\n");
    printf("===          Código (Apenas Números):                                       ===\n");
    printf("===          Nome do Produto:                                               ===\n");
    printf("===          Preço do Produto:                                              ===\n");
    printf("===          Quantidade:                                                    ===\n");
    printf("===          Data de Fabricação:                                            ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_buscar_produto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Buscar Produto|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o código do produto que você deseja Pesquisar]           ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Código(Apenas Números):                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}
void tela_editar_produto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Editar Produto|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o código do produto que você deseja Editar]              ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Código(Apenas Números):                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

//escolha do que deseja editar

void tela_escolha_editar_produto(void)
{
    system("clear||cls");
    char escolha;
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |O que deseja editar?|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Nome do Produto                                             ===\n");
    printf("===          2. Preço do Produto                                            ===\n");
    printf("===          3. Quantidade                                                  ===\n");
    printf("===          4. Data de Fabricação                                          ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===          Escolha a opção desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_nome_do_produto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    |Editar Nome do Produto|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===   [Digite o novo nome do produto (ou 'cancel' para cancelar a edição)]  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Novo Nome do Produto:                                          ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_preco_do_produto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    |Editar preço do Produto|                            ===\n");
    printf("===                                                                         ===\n");
    printf("===   [Digite o novo preço do produto (ou 'cancel' para cancelar a edição)] ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Novo Preço (apenas números):                                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_quantidade(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar quantidade do Produto|                         ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite a nova quantia do produto (ou 'cancel' para cancelar a edição)] ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Quantia (apenas números):                                     ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editardatafabricacao(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===               |Editar data de fabricação do Produto|                    ===\n");
    printf("===                                                                         ===\n");
    printf("===      [Digite a nova data (ou 'cancel' para cancelar a edição)]          ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Data (apenas números):                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_deletar_produto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Deletar Produto|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o código do produto que você deseja Deletar]             ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          Código(Apenas Números):                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

//funções vendas
void tela_menu_vendas(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fábrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Realizar Nova Venda                                         ===\n");
    printf("===          2. Pesquisar Venda no Histórico de Vendas                      ===\n");
    printf("===          3. Editar Dados de uma Venda                                   ===\n");
    printf("===          0. Sair                                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===          Escolha a opção desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_realizar_venda(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                         |Realizar Venda|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===          Código do Produto (Apenas Números):                            ===\n");
    printf("===          Quantidade a ser Vendida:                                      ===\n");
    printf("===          Forma de Pagamento:                                            ===\n");
    printf("===          CPF/CNPJ do Cliente:                                           ===\n");
    printf("===          Data da Venda:                                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_pesquisar_venda(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Pesquisar Venda|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do cliente cuja venda você quer Pesquisar]    ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Números):                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}
void tela_editar_venda(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                         |Editar Venda|                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do cliente cuja venda você quer Editar]       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Números):                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

//escolha o que deseja editar

void tela_escolha_editar_venda(void)
{
    system("clear||cls");
    char escolha;
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU VENDAS|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |O que deseja editar?|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Quantidade Vendida                                          ===\n");
    printf("===          2. Forma de Pagamento                                          ===\n");
    printf("===          3. Cancelar Venda (anulação de venda)                          ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===          Escolha a opção desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_quantidade_vendida(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU Vendas|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    |Editar quantidade vendida|                          ===\n");
    printf("===                                                                         ===\n");
    printf("===   [Digite a nova quantia vendida (ou 'cancel' para cancelar a edição)]  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Quantia (apenas números):                                     ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_forma_de_pagamento(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                       >>>|MENU Vendas|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    |Editar Forma de Pagamento|                          ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite a nova forma de pagamento (ou 'cancel' para cancelar a edição)] ===\n");
    printf("===                                                                         ===\n");
    printf("===      Nova Forma de Pagamento (apenas números):                          ===\n");
    printf("===                                                                         ===\n");
    printf("===    (Ex.: 1- À vista/ 2- Débito/ 3- Crédito/ 4- Parcelar em nX)          ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_anular_venda(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          |Anular Venda|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do cliente cuja venda você quer anular]       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Números):                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

//funções fornecedores
void tela_menu_fornecedores(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fábrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Cadastrar Novo Fornecedor                                   ===\n");
    printf("===          2. Pesquisar Contato de um Fornecedor                          ===\n");
    printf("===          3. Editar Dados de um Fornecedor                               ===\n");
    printf("===          4. Deletar Contato de um Fornecedor                            ===\n");
    printf("===          0. Sair                                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===          Escolha a opção desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_cadastrar_fornecedor(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Cadastrar Novo Fornecedor|                           ===\n");
    printf("===                                                                         ===\n");
    printf("===          Nome do Fornecedor:                                            ===\n");
    printf("===          CPF/CNPJ(Apenas Números):                                      ===\n");
    printf("===          E-mail:                                                        ===\n");
    printf("===          Celular:                                                       ===\n");
    printf("===          Endereço:                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_pesquisar_fornecedor(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Pesquisar Fornecedor|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que você deseja Pesquisar]      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Números):                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}
void tela_editar_contato_do_fornecedor(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Dados do Fornecedor|                           ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que você deseja Editar]         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Números):                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

//escolha o que deseja editar
void tela_escolha_editar_fornecedores(void)
{   
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Fábrica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                     |O que Deseja Editar?|                              ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Nome                                                        ===\n");
    printf("===          2. E-Mail                                                      ===\n");
    printf("===          3. Celular                                                     ===\n");
    printf("===          4. Endereço                                                    ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===          Escolha a opção desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}


void tela_editar_nome_fornecedor(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Nome do Fornecedor|                            ===\n");
    printf("===                                                                         ===\n");
    printf("=== [Digite o novo nome do fornecedor (ou 'cancel' para cancelar a edição)] ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo Nome do Fornecedor:                                          ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_email(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar E-Mail do Fornecedor|                          ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o novo E-Mail(ou 'cancel' para cancelar a edição)]       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo E-Mail do Fornecedor:                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_celular(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Celular do Fornecedor|                         ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o novo Celular(ou 'cancel' para cancelar a edição)]      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo Celular do Fornecedor:                                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_editar_endereco(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                 |Editar Endereço do Fornecedor|                         ===\n");
    printf("===                                                                         ===\n");
    printf("===      [Digite o novo Endereço (ou 'cancel' para cancelar a edição)]      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===       Novo Endereço:                                                    ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_deletar_contato_do_fornecedor(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===                     |Danilo's HAMMOCK REST|                             ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Fábrica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                |Deletar Contato de um Fornecedor|                       ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que você deseja Deletar]        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas Números):                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}
