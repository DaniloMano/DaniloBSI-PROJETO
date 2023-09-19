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

//funções vendas
void tela_menu_vendas(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
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
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===============================================================================\n");

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
    getchar();
    printf("===============================================================================");
}

//escolha o que deseja editar

void tela_escolha_editar_venda(void)
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
    printf("===                       >>>|MENU VENDAS|<<<                               ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    printf("===                      |O que deseja editar?|                             ===\n");
    printf("===                                                                         ===\n");
    printf("===          1. Quantidade Vendida                                          ===\n");
    printf("===          2. Forma de Pagamento                                          ===\n");
    printf("===          3. Cancelar Venda (anulação de venda)                          ===\n");
    printf("===          0. <<Voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
    
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
    getchar();
    printf("===============================================================================");
}

void escolha_editar_venda(void)
{
    int escolha;
    do {
        // Exibe o menu produtos
        tela_editar_venda();
        tela_escolha_editar_venda();
        printf("===            Escolha a opção desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                tela_editar_quantidade_vendida();
                break;
            case 2:
                tela_editar_forma_de_pagamento();
                break;
            case 3:
                tela_editar_anular_venda();
                break;
            case 0:
                break;
            default:
                printf("===            Opção inválida. Tente novamente.                             ===\n");
                getchar();
                getchar();
                break;
        }
    } while (escolha != 0);
}

void do_menu_vendas(void) {
    int escolha;

    do {
        // Exibe o menu produtos
        tela_menu_vendas();
        printf("===            Escolha a opção desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                tela_realizar_venda();
                break;
            case 2:
                tela_pesquisar_venda();
                break;
            case 3:
                escolha_editar_venda();
                break;
            case 0:
                break;
            default:
                printf("===            Opção inválida. Tente novamente.                             ===\n");
                getchar();
                getchar();
                break;
        }
    } while (escolha != 0);
}