# Descripción

A la abuela de Juanito le gustan mucho esos problemas de inteligencia en Facebook que solo el 1% de las personas pueden resolver. Ella siempre comparte problemas de los cuales pueden ser resuelto con sistemas de ecuaciones lineales y Juanito quiere que le hagas un programa para que su abuela pueda parecer ser la mas inteligente de todas.

# Entrada

La primera línea de la entrada será el numero de ecuaciones/incognitas **N** y los siguientes **N** lineas tendran **N + 1** coeficientes enteros separados por espacios. El primero hasta el ultimo coeficiente de cada linea son los valores que multiplican las variables, y el ultimo valor es la solución de esa ecuación.

# Salida

Las **N** incognitas enteras en el orden en las que vienen.

# Ejemplo

||input
3
1 0 1 6
0 -3 1 7
2 1 3 15
||output
2 -1 4
||description
Esto seria lo mismo que resolver un sistema de tres ecuaciones, los cuales serian $x + z = 6$, $-3y + z = 7$ y $2x + y + 3z = 15$, con soluciones $x = 2$, $y = -1$ y $z = 4$
||end

# Límites
$1 \le N \le 20$
