// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest

#ifndef APIS_H
#define APIS_H

#include <ngrest/common/Service.h>

#include <string>
#include <list>
#include "lista.h"

/*
    Este struct es una serializacion del struct 'estudiante' del archivo 'nodo.h',
    los cuales son equivalentes, ya que no se envian, ni reciben las estructuras
    como tal, sino un JSON
*/
struct estudianteSerial{
  std::string id;
  std::string nombre;
};

/*
    NO borrar los comentarios que empiezen de la siguiente manera: *location & *method
    sirve para dar entrada a la api http://localhost:9098/apis
    o para describir el tipo de peticion
*/
// *location: apis
class apis: public ngrest::Service
{
public:

    // To invoke this operation from browser open: http://localhost:9098/apis/World!

    /*
      La url por la que accederemos al metodo es mediante la url de la api: http://localhost:9098/apis
      y la union de la direccion definida a continuacion (/insertarEstudiante/{estudiante})
      ejemplo: http://localhost:9098/apis/insertarEstudiante
      dentro de los corchetes se definen los parametros que recibira el metodo, para este caso es una serializacion
      del 'struct estudiante' que es equivalente al 'struct estudianteSerial'
    */

    // *method: POST
    // */location: /insertarEstudiante/{estudiante}
    std::string insertarEstudiante(estudianteSerial estudiante);


    // *method: POST
    // */location: /getEstudiante/{id}
    std::string getEstudiante(const std::string& id);

    // *method: GET
    // */location: /getEstudiantes
    std::list<estudianteSerial> getEstudiantes();

};

#endif // APIS_H
