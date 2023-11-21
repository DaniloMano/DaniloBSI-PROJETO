#ifndef MODULORELATORIO_H
#define MODULORELATORIO_H

//assinatura das funcoes
void do_menu_relatorio(void);
void tela_menu_relatorios(void);
//listando produtos
void do_menu_relatorioProdutos(void);
void tela_menu_relatoriosProdutos(void);
void listaProdutos(void);
void listaProdutosPorPreco(void);
void listaProdutosPorQuantidade(void);
void mostra_produto(Rede* red);
//lista vendas
void listaVendas(void);
void mostra_listavenda(Vendido*);
//lista clientes
void listaClientes(void);
void mostra_listacliente(Contato*); // Adicione a função correspondente
//lista fornecedores
void listaFornecedores(void); // Adicione a função correspondente
void mostra_listafornecedor(Insumo* fornecedor); // Adicione a função correspondente

#endif // MODULORELATORIO_H
