#Problem: You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.
#To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table, where the keys are words and the values are the number of times the words occurred.
#Think about capitalized words. For example, look at these sentences:
#"After beating the eggs, Dana read the next step:" "Add milk and eggs, then add flour and sugar."
#What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of 2.
#Make reasonable (not necessarily perfect) decisions about cases like "After" and "Dana".

# Asumiendo que se utiliza una puntuacion estandar podemos hacer lo siguiente...

# ignorar toda la puntuación excepto los enders de la oración.

# minúscula cualquier palabra que comience una oración también está en el
# cuerpo de palabras como una palabra minúscula.

# ¿Cómo?
# dividir el cuerpo en oraciones (cadenas que terminan en a.? o!)
# separar oraciones en palabras
# insertar todas las palabras en un contador de frecuencia de palabra, sensible a mayúsculas y minúsculas,
# utilizar cada frecuencia en una hash table utilizando cada palabra previamente identificada como una key

# hacemos dos pasadas a través de la secuencia de entrada. Importante si esto fuera un
# problema real, yo preferiria usar una libreria de analisis lexico para implementar de una manera mas eficiente
# todos los requisitos del problema en la vida real.
