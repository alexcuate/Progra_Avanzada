El problema lo segmente en dos partes:
La primera que basicamente fue lograr invertir el orden de una sola frase
que se obtenia desde la terminal o linea de comandos de manera sencilla.

La segunda fue implementar todo un metodo para lograr obtener los inputs de 
la manera en que lo demandaba el problema para esto utilice fgets y scanf,
Ambos para obtener los datos.
Una vez obtenidos los datos se manda se obtiene cuantas veces se ejecutara
el programa invertir (esto va en funcion del numero de renglones u oraciones).

Cuando se entra al programa invertir este hace un ligero tratamiento 
entre \0 y \n para poder seguir conservando el formato y despues con la ayuda
de un aux se comienza a hacer la impresion con el orden que se busca.

Mi programa esta limitado a 100 caracteres ya que asi se definio en la
constante TAMANO pero esto se puede mover solo cambiando este parametro.

En si el programa lo unico que hace es obtener los input de la linea de
comandos para despues ser tratados e invertidos. SIempre tomando en cuenta
el pirmer renglon como limite o numero indicador de iteraciones o renglones
a leer. 
