//===============================================================================
//===               Universidade Federal do Rio Grande do Norte               ===
//===============================================================================
//===                   Centro de Ensino Superior do Serid�                   ===
//===                Departamento de Computa��o e Tecnologia                  ===
//===                   Disciplina DCT1106 -- Programa��o                     ===
//===-------------------------------------------------------------------------===
//===      Projeto Sistema de Gest�o para uma F�brica de Redes de Dormir      ===
//===============================================================================
//===             Developed by @DaniloMano -- since Aug, 2023                 ===
//===============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��es
void tela_inicial(void);
void tela_sobre_projeto(void);
void tela_sobre_desenvolvedor(void);
// fun��o produtos
void tela_menu_produtos(void);
void tela_adicionar_produto(void);
void tela_buscar_produto(void);
void tela_editar_produto(void);
//escolha do que deseja editar
//void tela_editar_Nome_do_Produto(void)
//void tela_editar_Pre�o_do_Produto(void)
//void tela_editar_Quantidade(void)
//void tela_editar_Data_de_Fabrica��o(void)
void tela_deletar_produto(void);

//fun��o vendas
void tela_menu_vendas(void);
void tela_realizar_venda(void);
void tela_pesquisar_venda(void);
void tela_editar_venda(void);
//escolha o que deseja editar
//void tela_editar_Quantidade_Vendida(void)
//void tela_editar_Forma_de_Pagamento(void)
//void tela_editar_CPF(void)
//void tela_editar_Data da Venda(void)

//fun��o fornecedores
void tela_menu_fornecedores(void);
void tela_cadastrar_fornecedor(void);
void tela_pesquisar_fornecedor(void);
void tela_editar_contato_do_fornecedor(void);
//void tela_editar_Nome_Fornecedor(void)
//void tela_editar_CPF_fornecedor(void)
//void tela_editar_E-mail(void)
//void tela_editar_Celular(void)
//void tela_editar_Endere�o(void)
void tela_deletar_contato_do_fornecedor(void);


// Fun��o Principal que chama todas as outras
int main(void) {
    tela_inicial();
    tela_sobre_projeto();
    tela_sobre_desenvolvedor();

    //modulo produtos
    tela_menu_produtos();
    tela_adicionar_produto();
    tela_buscar_produto();
    tela_editar_produto();
    //escolha o que deseja editar()
    //tela_editar_Nome_do_Produto()
    //tela_editar_Pre�o_do_Produto()
    //tela_editar_Quantidade()
    //tela_editar_Data_de_Fabrica��o()
    tela_deletar_produto();

    //modulo vendas
    tela_menu_vendas();
    tela_realizar_venda();
    tela_pesquisar_venda();
    tela_editar_venda();
    //escolha o que deseja editar
    //tela_editar_Quantidade_Vendida()
    //tela_editar_Forma_de_Pagamento()
    //tela_editar_CPF()
    //tela_editar_Data da Venda()

    //modulo fornecedores
    tela_menu_fornecedores();
    tela_cadastrar_fornecedor();
    tela_pesquisar_fornecedor();
    tela_editar_contato_do_fornecedor();
    //tela_editar_Nome_Fornecedor()
    //tela_editar_CPF_fornecedor()
    //tela_editar_E-mail()
    //tela_editar_Celular()
    //tela_editar_Endere�o()
    tela_deletar_contato_do_fornecedor();
}

//Fun��es que ser�o chamadas pela fun��o main()

void tela_inicial(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Serid�                   ===\n");
    printf("===                Departamento de Computa��o e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programa��o                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gest�o para uma F�brica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===          Sistema de Gest�o para uma F�brica de Redes de Dormir          ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. M�dulo Produtos                                           ===\n");
    printf("===            2. M�dulo Vendas                                             ===\n");
    printf("===            3. M�dulo Fornecedores                                       ===\n");
    printf("===            4. Sobre o Projeto                                           ===\n");
    printf("===            5. Desenvolvedor                                             ===\n");
    printf("===            0. Sair                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===            Escolha a op��o desejada: ");
    scanf("%c", &escolha);
    getchar();
    printf("===============================================================================\n");
    printf("===\t\t Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================\n");
}

void tela_sobre_projeto(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Serid�                   ===\n");
    printf("===                Departamento de Computa��o e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programa��o                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gest�o para uma F�brica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===             Developed by @DaniloMano -- since Aug, 2023                 ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===       >>>Sistema de Gest�o para uma F�brica de Redes de Dormir<<<       ===\n");
    printf("===                                                                         ===\n");
    printf("===  Este Programa ser� usado como forma de avalia��o do desempenho do      ===\n");
    printf("===  aluno Danilo Gabriel como programador, como tamb�m do seu dom�nio no   ===\n");
    printf("===  uso do VS Code e de C, na disciplina DCT1106. Este Programa apresenta  ===\n");
    printf("===  os m�dulos centrais e funcionalidades exigidas para a execu��o e       ===\n");
    printf("===  avalia��o do Projeto desenvolvido, sendo desenvolvido tendo como base  ===\n");
    printf("===  a experi�ncia adquirida assistindo �s apresenta��es e orienta��es de   ===\n");
    printf("===  projetos do primeiro semestre.                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===  Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_sobre_desenvolvedor(void)
{
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    printf("===============================================================================\n");
    printf("===               Universidade Federal do Rio Grande do Norte               ===\n");
    printf("===============================================================================\n");
    printf("===                   Centro de Ensino Superior do Serid�                   ===\n");
    printf("===                Departamento de Computa��o e Tecnologia                  ===\n");
    printf("===                   Disciplina DCT1106 -- Programa��o                     ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===      Projeto Sistema de Gest�o para uma F�brica de Redes de Dormir      ===\n");
    printf("===============================================================================\n");
    printf("===============================================================================\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===       >>>Sistema de Gest�o para uma F�brica de Redes de Dormir<<<       ===\n");
    printf("===                                                                         ===\n");
    printf("===          Projeto Hammock est� sendo desenvolvido por:                   ===\n");
    printf("===                                                                         ===\n");
    printf("===          Aluno: Danilo Gabriel de Medeiros Brito                        ===\n");
    printf("===          E-mail: danilogabrill@outlook.com                              ===\n");
    printf("===          Contato: @DaniloMano (Github)                                  ===\n");
    printf("===          Reposit�rio:https://github.com/DaniloMano/DaniloBSI-PROJETO.git===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_menu_produtos(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |F�brica de Redes de Dormir|                       ===\n");
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
    printf("===          Escolha a op��o desejada: ");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |Adicionar Novo Produto|                           ===\n");
    printf("===                                                                         ===\n");
    printf("===          C�digo (Apenas N�meros):                                       ===\n");
    printf("===          Nome do Produto:                                               ===\n");
    printf("===          Pre�o do Produto:                                              ===\n");
    printf("===          Quantidade:                                                    ===\n");
    printf("===          Data de Fabrica��o:                                            ===\n");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Buscar Produto|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o c�digo do produto que voc� deseja Pesquisar]           ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          C�digo(Apenas N�meros):                                        ===\n");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Editar Produto|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o c�digo do produto que voc� deseja Editar]              ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          C�digo(Apenas N�meros):                                        ===\n");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      >>>|MENU PRODUTOS|<<<                              ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Deletar Produto|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o c�digo do produto que voc� deseja Deletar]             ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          C�digo(Apenas N�meros):                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_menu_vendas(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |F�brica de Redes de Dormir|                       ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Realizar Nova Venda                                         ===\n");
    printf("===          2. Pesquisar Venda no Hist�rico de Vendas                      ===\n");
    printf("===          3. Editar Dados de uma Venda                                   ===\n");
    printf("===          0. Sair                                                        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===          Escolha a op��o desejada: ");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                         |Realizar Venda|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===          C�digo do Produto (Apenas N�meros):                            ===\n");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                        |Pesquisar Venda|                                ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do cliente cuja venda voc� quer Pesquisar]    ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas N�meros):                                      ===\n");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                          >>>|MENU Vendas|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                         |Editar Venda|                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do cliente cuja venda voc� quer Editar]       ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas N�meros):                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}

void tela_menu_fornecedores(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
    char escolha;
    printf("===============================================================================\n");
    printf("===                   |Danilo's HAMMOCK REST|                               ===\n");
    printf("===============================================================================\n");
    printf("===             |Developed by @DaniloMano -> since Aug, 2023|               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |F�brica de Redes de Dormir|                       ===\n");
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
    printf("===          Escolha a op��o desejada: ");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                   |Cadastrar Novo Fornecedor|                           ===\n");
    printf("===                                                                         ===\n");
    printf("===          Nome do Fornecedor:                                            ===\n");
    printf("===          CPF/CNPJ(Apenas N�meros):                                      ===\n");
    printf("===          E-mail:                                                        ===\n");
    printf("===          Celular:                                                       ===\n");
    printf("===          Endere�o:                                                      ===\n");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Pesquisar Fornecedor|                                 ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que voc� deseja Pesquisar]      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas N�meros):                                      ===\n");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                  |Editar Dados do Fornecedor|                           ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que voc� deseja Editar]         ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas N�meros):                                      ===\n");
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
    printf("===                   |F�brica de Redes de Dormir|                          ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                    >>>|MENU FORNECEDORES|<<<                            ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                |Deletar Contato de um Fornecedor|                       ===\n");
    printf("===                                                                         ===\n");
    printf("===        [Digite o CPF/CNPJ do Fornecedor que voc� deseja Deletar]        ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===          CPF/CNPJ(Apenas N�meros):                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");
    printf("===          Aperte ENTER para prosseguir:");
    getchar();
    printf("===============================================================================");
}
