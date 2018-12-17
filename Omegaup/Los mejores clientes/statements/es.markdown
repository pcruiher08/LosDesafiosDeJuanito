# Descripción

Juanito trabaja como gerente en una tienda de electrónica y quisiera saber quienes de sus clientes son clientes regulares, cuantas piezas han comprado y cuanto dinero han gastado en piezas.

A continuación se muestra una tabla con los códigos y los precios de las piezas:

 <table>
  <tr>
    <th>Pieza</th>
    <th>Código&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</th>
    <th>Precio</th>
  </tr>
  <tr>
    <td>LED</td>
    <td>1</td>
    <td>5</td>
  </tr>
  <tr>
    <td>Op-amp</td>
    <td>2</td>
    <td>20</td>
  </tr>
  <tr>
    <td>Transistor PNP&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td>
    <td>3</td>
    <td>15</td>
  </tr>
  <tr>
    <td>Inductor 5H</td>
    <td>4</td>
    <td>10</td>
  </tr>
  <tr>
    <td>Capacitor 5F</td>
    <td>5</td>
    <td>12</td>
  </tr>
</table> 

# Entrada

Cada linea tiene contiene tres valores, el nombre del cliente, el codigo de la pieza que esta comprando y cuantos de esas piezas quiere comprar separados por espacios.

No se saben cuantas lineas hay, solo que el último línea siempre tendra los valores de **FIN 0 0**

# Salida

Debes imprimir tres líneas con los tres clientes que han gastado mas dinero en la tienda ordenado de arriba hacia abajo. Cada linea debe tener el nombre del cliente, el dinero que ha gastado y el numero de piezas que ha comprado en total en ese orden separado por espacios.

# Ejemplo

||input
Pinal 3 3
Hugo 5 1
Omar 2 25
Juanita 3 2
Hugo 2 5
FIN 0 0
||output
Omar 500 25
Hugo 112 6
Pinal 45 3
||end

#Limites
**N** es el número de líneas

$3 \le N \le 1,000,000$
