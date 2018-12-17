# Descripción

La mamá de Juanito esta atrapada en un campo eléctrico y ocupa tu ayuda para salir de él. Dado cierto número de cargas electricas en espacio tridimensional, debes calcular cual será el vector de campo eléctrico en el punto indicado.

Para obtener el valor del campo electrico en cierto punto, debes aplicar la formula $\vec{E} = \sum \frac{kQ}{r^2}$ con dirección hacia el punto si el valor de la carga Q es negativo y dirección contraria si es positivo. Considera $k = 9x10^9$, y $r$ como la magnitud de la distancia entre el punto y la carga.

# Entrada

La primera línea será el número de cargas puntuales **N** seguido por tres números separados por espacios que son las coordenadas X, Y y Z de la mamá de Juanito. En las siguientes **N** lineas vendrán 4 números reales, el valor de la carga seguido por sus coordenadas.

# Salida

Debes imprimir tres valores con dos puntos decimales redondeados indicando los componentes del campo electrico en $X$, $Y$ y $Z$ divididos por $1x10^9$

# Ejemplo

||input
1 0 0 0
10 5 12 0
||output
-0.20 -0.49 0.00
||description
Hay una sola carga que actua en el punto $(5, 12, 0)$ con valor de 10. Como el vector distancia es desde ese punto al origen y es una carga positiva, entonces el vector distancia $r$ es igual a $<-5, -12, 0>$. Como hay un solo carga, se puede considerar la magnitud de la fuerza resultante como $\frac{kQ}{r} = \frac{9x10^9 \times 10}{169}$ y se puede multiplicar por el vector distancia unitario para obtener la respuesta.
||end
