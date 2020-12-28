
//typedef struct no *Lista;

struct no *cria_lista();
int lista_vazia(struct no *lst);
int insere_inicio(struct no **lst, int elem);
int remove_elem(struct no **lst, int elem);
int inverte_2primeiros(struct no **lst);
void menu();
