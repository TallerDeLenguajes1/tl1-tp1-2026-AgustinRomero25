# Punto 2: Preguntas
## ¿Por qué es conveniente incluir el .gitignore?
_Es fundamental para mantener el repositorio limpio, evitando que se suban archivos temporales, ejecutables, o carpetas de configuración del sistema/IDE que no forman parte del código fuente._
## ¿Cuándo se debe hacer?
_Se debe crear preferentemente al inicio del proyecto, antes de realizar el primer commit, para asegurar que los archivos no deseados nunca sean rastreados por Git_
## ¿Cómo se debe configurar?
_Se crea un archivo llamado ".gitignore" en la raiz del proyecto y se listan nombres de archivos, extensiones o carpetas que se deseen excluir_

# Respuestas del Punto G

## 1. ¿Por qué el resultado de los apartados 2 y 3 es el mismo?
El resultado es el mismo porque en C, el nombre de un arreglo (en este caso `holaMundo`) se descompone automáticamente en un puntero a su primer elemento. Por lo tanto, tanto la dirección almacenada por el puntero como la dirección de la variable apuntan al mismo bloque de memoria donde comienza la cadena.

## 2. ¿Qué obtiene en el punto 4?
En el punto 4 se obtiene la dirección de memoria de la propia variable `puntero`.

## 3. ¿Es igual a los anteriores? ¿Por qué?
No, no es igual. El puntero es una variable independiente que requiere su propio espacio en la memoria para almacenar la dirección a la que apunta. Mientras que los puntos 2 y 3 muestran la ubicación del arreglo "hola mundo", el punto 4 muestra la ubicación física del puntero en la memoria (el lugar donde vive el "sobre" que contiene la dirección).