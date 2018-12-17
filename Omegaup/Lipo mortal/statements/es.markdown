# Descripción

Como Pablo ha terminado inflando 40 de sus pilas LiPo, prefirió comprarse un capacitor grande ya que cuesta menos. Pablo esta analizando más de 100 tipos de capacitores que le puedan ser utiles, pero cada uno de ellos tiene un limite de capacitancia, de voltaje y de amperaje. Como el capacitor suelta gases toxicos al explotar y Pablo no quiere morir, esta buscando cual es el mejor capacitor que pueda comprarse.

Pablo esta buscando maximizar la energía que puede almacenar y sacar del capacitor, y sabe que la energia en un capacitor es dado por la ecuación $E = \frac{CV^2}{2}$ y que la potencia de salida de un circuito es de $P = IV$ donde **C** es la capacitancia, **V** es el voltage y **I** es la corriente. Pablo quiere encontrar el capacitor con la mayor suma de estos dos valores.

# Entrada

El primer valor **N** describe el numero de capacitores que se analizarán, y las siguientes **N** líneas contienen la capacitancia **C**, el voltage máximo **V** y la corriente máxima del capacitor **I**.

# Salida

Se debe imprimir un solo entero **K** la suma máxima de ese capacitor y el número de linea donde estaba.

# Ejemplo

||input
4
10 5 1
5 10 1
4 4 4
15 2 2
||output
260 2
||end
