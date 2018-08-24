#ifndef LISTA_H
#define LISTA_H

#include <list>
#include <string>
#include "nodo.h"

class Lista{
  public:
          //  Atributos de Lista
          Nodo *raiz;

          //  Metodos de Lista
          Lista();
          void insertar(struct estudiante e);
          std::list<struct estudiante> linealizar();
};


#endif // LISTA_H
