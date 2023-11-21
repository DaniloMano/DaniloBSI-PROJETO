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
//listando vendas
void do_menu_relatorioVendas(void);
void tela_menu_relatoriosVendas(void);
void listaVendas(void);
void listaVendasPorCodigoDoProduto(void);
void listaVendasPorCPF(void);
void listaVendasPorQuantidadeVendida(void);
void listaVendasPorFormaDePagamento(void);
void mostra_listavenda(Vendido*);
//listando clientes
void listaClientes(void);
void mostra_listacliente(Contato*);
//listando fornecedores
void listaFornecedores(void);
void mostra_listafornecedor(Insumo* fornecedor);

#endif // MODULORELATORIO_H
