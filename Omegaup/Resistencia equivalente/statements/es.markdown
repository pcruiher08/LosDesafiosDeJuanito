# Descripción

Tu primo Eustacio Pentagono sabe que conoces mucho de robótica, y quiere que le ayudes a simplificar sus circuitos electricos. El tiene un circuito con una multitud de resistencias y quiere simplificarlo reemplazando todo por una sola resistencia. Sabes que las resistencias en serie se suman $R_T = R_1 + R_2 + ... + R_N$ y que para las resistencias en paralelo se suman sus reciprocos $\frac{1}{R_T} = \frac{1}{R_1} + \frac{1}{R_2} + ... + \frac{1}{R_N}$.

# Entrada

Recibirás una sola linea de resistencias enteras seguidos por un simbolo que indican si estan en serie o en paralelo que debe ser interpretado de izquierda a derecha. El simbolo $+$ indica que esas dos resistencias estan en serie y el simbolo de $|$ indica que estan en paralelo.

Por ejemplo, $5 + 7 | 12$ significa que debes considerar que el 5 y el 7 estan en serie, y que el resultado de ese esta en paralelo con una resistencia de 12.

# Salida

Un entero $R_{eq}$ la resistencia equivalente de todas las operaciones

# Ejemplo

||input
20 | 5 + 1 | 20 + 2 | 9 | 18 + 8
||output
11
||end
