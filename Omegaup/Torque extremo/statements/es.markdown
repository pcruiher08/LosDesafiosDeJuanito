# Descripción

El robot de sumo de Juanito esta siendo sometido bajo varias fuerzas en dos dimensiones ya que los demas robots lo estan jalando, los cuales le provocan un torque. Juanito ocupa saber cual es la suma de los torques de estas fuerzas para poder aplicar un torque contrario y evitar que se caiga.

Se sabe que el torque de una fuerza a cierta distancia provoca una rotación, y que puede ser calculado como el producto cruz de dos vectores, $\overrightarrow{f}$ la fuerza y $\overrightarrow{r}$ la distancia entre el centro de masa y el punto donde se encuentra la fuerza.

Entonces se puede expresar el torque resultante de la siguiente manera: $\tau = \sum \overrightarrow{r} \times \overrightarrow{f}$

# Entrada

La primera linea consiste en tres enteros, $x_0$ y $y_0$ las coordenadas del centro de masa, y **N**, el número de fuerzas que actuan sobre el robot.

Las siguientes **N** líneas contienen cuatro enteros $x_p$ y $y_p$ las coordenadas del punto donde actua la fuerza, y $f_x$ y $f_y$, los componentes vectoriales de la fuerza.

Recuerda que $\overrightarrow{r} = (x_p - x_o) \hat{i} + (y_p - y_o) \hat{j}$

# Salida

Un solo entero $\tau$ el torque que requiere ejercer el robot. Si el torque va en contra de las manecillas debe ser positivo, y si va a favor de ellas debe ser negativo.

# Ejemplo

||input
0 0 1
1 1 -1 1
||output
2
||description
Una sola fuerza $F = <-1, 1>$ actua en el punto $P = (1, 1)$. El vector distancia es entonces $\overrightarrow{r} = <1 - 0, 1 - 0> = <1, 1>$ Con esto, se hace el producto cruz $\overrightarrow{r} \times \overrightarrow{f}$ para obtener que $\tau = +2$
||input
2 -5 2
1 2 3 4
5 6 7 8
||output
-78
||description
Dos fuerzas causan dos torques distintos y su suma resulta ser de $\tau = -78$
||end
