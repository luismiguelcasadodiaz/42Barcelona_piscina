# piscina_jul23_rush02
Repositorio Git para desarrollar conjuntamente el proyecto entre Carles, Berta, Eduard, Yamir y otros 

He estado pensando un poco sobre el asunto.

Tenemos que traducir *número entero sin signo*. Este numero contien valores en el rango 0 .. 4 294 967 295. Zero .. four billion two hundred forty-nine million nine hundred sixty-seven thousand two hundred ninety-five.


Al menos hay que crear estos ficheros:

---
# main.c
En el que haremos, y por este orden:
## Tratamiento de los parámetros de la linea de comando.
  El primer parámetro debe contener una secuencia de dígitos. Podemos aprovechar la función ft_is_numeric(char *num) de C02/ex03 para su validación.
  
  El segundo parametro podria no existir, en ese caso leeriamos del teclado el numero qe quisieramos traducir.(* BONUS *)
  
  EL segundo parámetro es un nombre de archivo, Es opcional. Si nos lo han pasado, validaremos que existe y que lo podemos abrir. 
  Cuando no tenemos seguno parametro, intentaremos abrir el diccionario por defecto que se llama `numbers.dic` y que no podemos dar por hecho que estará presente. Hay que validar igualmente si podemos abrirlo con los permisos de lectura.
  
## Leer el archivo (el que nos han dado por defecto o el que nos pasen como segundo parametro

## Crear la estructura de datos para las reglas de traducción, 
## cargar las reglas en el diccionario, 
## Validar que las reglas permiten el proposito

# Traducir el numero pasado como parametro o leido del teclado.

# Imprimir la traduccion

---
# file.c

## int filename_exists(char *filename)
Devuelve 1 si el fichero existe y se puede abrir en modo lectura.
Devuelve 0 si el fichero o no existe o no se puede abrir en modo lectura.
Esta función, en caso de que tenga exito, cerrara el archivo. Se trata solo de una funcion preventiva de errores que nos peritira hacer el fileopen con seguridad.

## abrir archivo
Se harán todas las comprobaciones necesarias sobre la existencia del archivo, en la ruta especificada, sobre los permisos.

## int num_lines_in_file(int fd)
Segun dice el subject el archivo puede tener lineas en blanco. Tendría que devolver esta funcion el numero de lineas validas que tiene.

## clave_dict *parse_line(char *line)
Verifica que la linea del archivo tenga una linea bien conformada, en la que se peude separar una clave numerica 40, de Frase "Forty".

## char *read_line(int fd)
Leera el archivo hasta que encuentre un final de lina.

## close file(fd)

---
# data_structure.c
Con algo similar a esto 

```
struct clave_dict {
  int key;
  // no sé si sería necesario un tercer campo relativo a la posición para la que sirve la traducción. 
  char *s[30];
};
```

Definiremos una estrucutra dinamica de datos de tipo **dict en la que tendremos N punteros a estrucuturas de tipo Clave_dict. N vend´ra dado por el numero del ineas buenas que nos retorna la funcion int Num_lines_in_file(int, fd)
## clave_dict **crea_dict(int num_elemsn)
Usaremos malloc((Num_elemes +1) * sizeof((clave_dict *) para crear un puntero a una clave_dict, que alojará a cada una de las lineas que leida desde el fichero.
## insert_key_in_dict(clave_dict **dict, clave_dict *clave)
con la que insertaremos la clave en el primer hueco disponible en el dicccionario.
## void sort_dict(clave_dict **dict)
## char *value_of_key(clave_dict **dict, int *key)
que nos devolverá la prase correspondiente a un numero
## int dictionary_is_ok(clave_dict **dict)
Devuelve 1, si el diccionario contiene todos las claves necesarias
* de 0 a 9
* de 10 a 19
* del 20 al 90
* 100, 1 000, 1000 000 y 1 000 000 000

En caso contrario devuelve 0.

# Translate.c

## dividir el numero en elementos

Berta ha notado que en 4.294.967.259 los números  de las posiciones 8 y 7, repiten  comportamiento con las posiicones 5 y 4 y con las posiciones 2 y 1.
                       0 987 654 321
Las posiciones 3, 6 y 9 se comportan igual que la 1, 4, 7 y 10, pero sucedidas por hundred
Las posiciones 10, 7 y 4 se comportan como la 1 pero seguidas de billion(10), million(7) or thousand  (4)

## imprimir el numero elemento,


