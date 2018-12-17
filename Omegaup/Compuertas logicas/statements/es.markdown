# Descripción

Bill Gates, Elon Musk y Tony Stark te han patrocinado personalmente con \$1,000,000,000 USD para que diseñes un programa que prediga el resultado de un conjunto indefinido de compuertas logicas.

Deberas buscar las tablas de las siete compuertas logicas **AND, OR, NOT, NAND, NOR, XOR** y **XNOR** para programar su comportamiento.

# Entrada

Una sola línea con una cantidad desconocida de operadores. Los operadores pueden ser los siete que son mencionados arriba y los valores **TRUE** y **FALSE**.

Todas estas funciones seran escritas de la siguiente manera: **XOR**(**TRUE**, **FALSE**) con dos entradas (menos **NOT** que solo tiene una entrada). Debes interpretar y obtener el resultado final de la operación.

# Salida

Un solo valor **TRUE** o **FALSE** dependiendo de el resultado de la operación

# Ejemplo

||input
NOT(TRUE)
||output
FALSE
||description
El operador **NOT** invierte el valor que recibe
||input
AND(NOT(FALSE), FALSE)
||output
FALSE
||description
El resultado del **NOT** es **TRUE**, pero para que el resultado de un **AND** sea verdadero los dos operadores deben ser **TRUE**
||input
OR(AND(NOT(FALSE), TRUE), XOR(TRUE, TRUE))
||output
TRUE
||end
