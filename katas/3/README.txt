En este problema se utilizaron una especie de coordenadas (x,y)

Caso 1:
Si el robot no se mueve no se entra al for e inmediatamente se compara si las
coordenadas siguen en posicion 0,0. Si es asi se regresa un True.

Caso 2:
El robot si recibe coordenadas se pasa a verificara caracter por caracter si 
es que se ejecutan instrucciones y hacia donde. Cada vez que se ejecuta una 
instruccion una bandera que hace referencia a x o y es aunmentada o decrementada
segun la instruccion. Al final de la ejecucion del for se procede al mismo
analisis del caso uno. Si las coordenadas son 0,0 se regresa un True caso contradio
un False.

Caso 3:
No se recibieron instrucciones validas. Debido a la arquitectura del programa 
esto no afecta ya que solo no se entrara al for y se procedera a analizar las
coordenadas.
