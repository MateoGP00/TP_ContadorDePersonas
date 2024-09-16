# TP_ContadorDePersonas
## Memoria Descriptiva
Se trata de un sistema que detecta la cantidad de personas que ingresan y egresan de una habitación, permitiendo la entrada mientras no se supere el límite y cerrándola al superarlo, se utilizan dos sensores en las puertas para detectar la entrada y la salida de las personas teniendo en cuenta que son dos puertas diferentes de egreso e ingreso. Los sensores al detectar el movimiento de una persona dan la orden de crecimiento o decrecimiento del contador y así determinar la acción de la puerta. Contaria con una interfaz que muestra la cantidad de persona dentro de la habitación.
## Diagrama de estados y transiciones
![DiagramaDeEstadosYTransiciones](https://github.com/user-attachments/assets/2fe4e575-3d63-4ab9-a401-f040634ffef0)
 - __SET__: bandera de fin de inicialización
 - __Se__: sensor de entrada, vale 1 al detectar movimiento
 - __Ss__: sensor de salida, vale 1 al detectar movimiento
 - __Cont__: contador de cantidad de persones dentro
 - __Lim__: limite máximo preestablecido
