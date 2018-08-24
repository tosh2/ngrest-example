# ngrest Tutorial EDD - B


Seguir las siguientes instrucciones:

1. Instalar ngREST
2. Clonar el repo
3. Abrir una terminal e ingresar los sig. comandos

```
$ ngrest create apis
$
$ # Copiar todos los archivos dentro de la carpeta /src
$
$ cd apis
$ ngrest
$
$ # ir a la url "localhost:9098/apis/getEstudiantes"
```

4. Probar las apis
```
http://localhost:9098/apis/getEstudiante

{"id":1}


http://localhost:9098/apis/insertarEstudiante
{"estudiante":
              {
              "id":2,
              "nombre":"luis"
              }
}

```
