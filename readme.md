codigo-misterioso.c:
En el main esta la funcion "procesar_enigma" que manda como parametro la direccion de memoria de "dato_secreto"; luego esa funcion tiene adentro 3 procedimientos:
f_alpha: recibe el valor dato_secreto y dicho valor es asignado a "temp",  definimos la variable "rev" con el valor 0 y luego, mediante un ciclo iterativo while, generamos y guardamos en "rev", el valor de "temp" invertido. Por eso, renombré a esta función a "invertirDigitos"
f_beta:  pasa por referencia al valor obtenido en "f_alpha" y lo divide en 2. Lo más correcto es definir a esta función como "mitadEntera".
f_gamma: obtiene por referencia el resultado de "f_beta", suma sus digitos en la variable "suma" y devuelve el resultado obtenido en f_beta + sus digitos . Para ser más descriptivos con el código, la llamé "sumarNumeroConDigitos".
Finalmente, a la funcion "procesar_enigma" la llamé procesar número y describí su funcionamiento en un comentario para evitar un nombre largo.

------------------------------------------------------------------------------------------------------------------------------------------------------

codigo_sin_funcionar:
El primer error que detecté es que no estaba incluida la libreria "stdio.h" y faltaban unos ";" lo que no permitía al programa ser compilado. Una vez resuelta la parte sintáctica, observo que el programa no funciona como se espera, y son por las siguientes razones:
- el "&" en valor1.
-en la función "duplicar_numero" estamos pasando a "valor1" por valor. Para solucionar esto, decidí que la mejor forma era pasar a "valor1" por referencia. Para el correcto funcionamiento tambien tuve que modificar la función "duplicar_numero"

-----------------------------------------------------------------------------------------------------------------------------------------------------
4-g)
    El resultado es el mismo porque justamente el valor del puntero es la direccion de memoria de la variable apuntada. En el punto 4 no obtenemos lo mismo ya que no estamos viendo el valor del puntero sino su direccion de memoria.