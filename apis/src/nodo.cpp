#include "nodo.h"

Nodo::Nodo(struct estudiante nuevo){
  estudiante  = nuevo;
  siguiente   = NULL;
}

Nodo * Nodo::getSiguiente(){
  return siguiente;
}

void Nodo::setSiguiente(Nodo *n){
  siguiente = n;
}

struct estudiante Nodo::getEstudiante(){
  return estudiante;
}
