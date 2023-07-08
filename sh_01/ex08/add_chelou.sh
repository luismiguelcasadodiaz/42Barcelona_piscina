#!/bin/sh
echo $FT_NBR1 + $FT_NBR2 | tr "'"'\\\"\?\!'  '01234' | tr 'mrdoc' '01234'| sed 's/^/obase=13; ibase=5;/' | bc | tr 0123456789ABC 'gtaio luSnemf'

#Escribe una línea de comandos que recupere los números incluidos en las variables
#FT_NBR1 en base ’\”?! y FT_NBR2 en base mrdoc y que muestre la suma de los dos
#                01234                   01234
#en base gtaio luSnemf
#        0123456789ABC

