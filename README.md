# ngrest Tutorial EDD - B


Seguir las siguientes instrucciones:

1. Instalar ngREST
2. Abrir una terminal e ingresar los sig. comandos

```
$ mkdir apis && cd apis
$ git clone https://github.com/tosh2/ngrest-example .
$ ngrest
$
$ # ir a la url "localhost:9098/apis/getEstudiantes"
```

3. Probar las apis
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
