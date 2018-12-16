# Descripción

Al robot de Juanito que llevará a competir a la RoboCup 2019 en Australia se le acaba de descalibrar uno de los dos sensores que usa para orientarse en el espacio. Como el robot de Juanito navega en tres dimensiones, los sensores que utiliza regresan vectores para saber a dónde estan apuntando.
Juanito tiene una junta con Bill Gates y te dejó la agobiante tarea de recalibrar los sensores. Tu deber es definir si el angulo de desfase de ambos sensores es agudo o no.

# Entrada

Dos líneas, en la primera línea se mostrarán tres valores representando los coeficientes de la lectura del sensor desfasado en la forma $\overrightarrow{Sensor} = A\hat{i} + B\hat{j} + C\hat{k}$.
        
En la segunda línea de entrada se mostrarán tres valores representando los coeficientes de la lectura del sensor que nunca falla en la forma $\overrightarrow{Sensor} = D\hat{i} + E\hat{j} + F\hat{k}$.

# Salida

Debe ser solo SI o NO, indicando si el angulo de desfase es agudo o no.

# Ejemplo

||input
3 2 1
4 5 6
||output
SI
||end
