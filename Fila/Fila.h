
typedef struct Item item;

struct Item {
	int valor;
	item *prox;
};

int static FIM;

void criar(item*);
int vazia(item*);
void enfileirar(item*, int);
void desenfileirar(item*);
int primeiro(item*);

