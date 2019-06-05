typedef struct pilha * Pilha;
Pilha criaPilha();
int pilhaVazia(Pilha P);
int pilhaCheia(Pilha P);
int push(Pilha P, int n);
int pop(Pilha P);
int leTopo(Pilha P);
