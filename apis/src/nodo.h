#ifndef NODO_H
#define NODO_H
#include <string>

struct estudiante{
  std::string id;
  std::string nombre;
};

class Nodo{
  public:

          //  Atributos del Nodo
          struct estudiante estudiante;
          Nodo *siguiente;


          //  Metodos del Nodo
          Nodo(struct estudiante nuevo);
          Nodo *getSiguiente();
          void setSiguiente(Nodo *n);
          struct estudiante getEstudiante();
};

#endif // NODO_H
