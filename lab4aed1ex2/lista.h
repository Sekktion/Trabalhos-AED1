typedef struct lista * Lista;
Lista cria_lista();
int lista_vazia(Lista L);
int lista_cheia(Lista L);
int insere_elem(Lista L, int n);
int remove_elem(Lista L, int n);
void imprime_lista(Lista L);
