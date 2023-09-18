
//switch case de edição
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

void do_menu_fornecedores(void) {
    int escolha;

    do {
        // Exibe o menu produtos
        tela_menu_fornecedores();
        printf("===            Escolha a opção desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                tela_cadastrar_fornecedor();
                break;
            case 2:
                tela_pesquisar_fornecedor();
                break;
            case 3:
                escolha_editar_fornecedor();
                break;
            case 4:
                tela_deletar_contato_do_fornecedor();
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

void escolha_editar_fornecedor(void)
{
    int escolha;
    do {
        // Exibe o menu produtos
        tela_editar_contato_do_fornecedor();
        tela_escolha_editar_fornecedores();
        printf("===            Escolha a opção desejada: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                tela_editar_nome_fornecedor();
                break;
            case 2:
                tela_editar_email();
                break;
            case 3:
                tela_editar_celular();
                break;
            case 4:
                tela_editar_endereco();
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

//funções fornecedores
void tela_menu_fornecedores(void)
{   system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
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
    printf("===          0. <<voltar>>                                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===-------------------------------------------------------------------------===\n");
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
    getchar();
    printf("===============================================================================");
}

//escolha o que deseja editar
void tela_escolha_editar_fornecedores(void)
{   
    system("clear||cls");
    setlocale(LC_ALL,"Portuguese_Brazil");
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
    printf("===          0. <<Voltar>>                                                  ===\n");
    printf("===-------------------------------------------------------------------------===\n");
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
    getchar();
    printf("===============================================================================");
}
