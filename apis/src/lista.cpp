#include "lista.h"

Lista::Lista(){
  raiz = NULL;
}

void Lista::insertar(struct estudiante e){
  Nodo *nuevoNodo;
  nuevoNodo = new Nodo(e);
  nuevoNodo->setSiguiente(raiz);
  raiz = nuevoNodo;
}
