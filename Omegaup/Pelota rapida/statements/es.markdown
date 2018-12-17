# Descripción

Uno de los robots de soccer de Juanito esta viendo a una pelota moviendose lateralmente a la camara, y graba su posición como un valor en $X$ de 0 a 400, donde 0 es el lado izquierdo de la camara y 400 es el lado derecho de la camara. Juanito quiere saber cual es la velocidad instantanea de la pelota en el intervalo cuando se movio la pelota. Utilizando la función de millis(), Juanito calcula cuanto tiempo transcurrió entre la captura de valores de X y con este valor puede aproximar la velocidad.

La velocidad se calcula como el cambio de posición en X entre el tiempo que transcurrió.

# Entrada

La primera línea contiene un entero **N** que es el número de intervalos que serán leidos seguido por un valor real $X_0$ que es la posición inicial de la pelota. En las siguientes **N** líneas, habra un valor real $X_t$ que es la posición de la pelota despues de la ultima evaluación y un valor $t$ que es el tiempo que transcurrió en milisegundos.

# Salida

Consistirá en **N** lineas con las velocidades con dos decimales redondeados.

# Ejemplo

||input
4 200
205 10
220 9
260 11
240 20
||output
0.50
1.67
3.64
-1.00
||end
