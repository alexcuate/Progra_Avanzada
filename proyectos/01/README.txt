Para la resolucion de este problema usaremos una serie de array de char y la 
funcion getch para obtener toda la cadena de caracateres desde la consola.
El programa estara limitado a un numero especifico de caracteres todo esto con
la intencion de acotar lo mas posible los posibles errores que puedan salir en
ejecucion.
Para Resolver el problema partimos de como identificar cada palabra asi como 
el largo del texto de entrada. Para atacar el problema del largo del texto
estaremos utilizando la funcion getch para asi poder almacernar todo el string
en un solo array sin necesidad de hacer tanto procedimiento. Una vez almacenado
nuestro string obtendremos el tamano y comenzaremos a iterar e identificar
cada espacio que sera nuestro identificador de cambio de palabra. Cada vez que
nuestro if que estara anidado en el for identifique un espacio imprimiremos 
en reversa la palabra, esto con la ayuda de dos banderas que nos estaran
guardando la cantidad de espacios que se avanzaron para poder hacer nuestro 
reverse una vez que se ejecute el reverse la bandera vuelve cambia de estado
y nos ayudamos de la otra bandera para saber en que posiscion debemos de ir.
Todo esto se ejecuta hasta llegar al size del array. 

Existes dos limitantes debido al diseno del programa si no se agregan espacios
en el inicio y final del texto el programa imprime mal estas palabras. Esto se
puede solucionar mediante el append de un espacio al final y al principio de
la cadena o dejando bien claro al usuario que debe de incluir estos dos
espacios.
