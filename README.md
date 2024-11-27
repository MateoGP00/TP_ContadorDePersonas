# TP_ContadorDePersonas
## Memoria Descriptiva
Se trata de un sistema que detecta la cantidad de personas que ingresan y egresan de una habitación, permitiendo la entrada mientras no se supere el límite y cerrándola al superarlo, se utilizan dos sensores en las puertas para detectar la entrada y la salida de las personas teniendo en cuenta que son dos puertas diferentes de egreso e ingreso. Los sensores al detectar el movimiento de una persona dan la orden de crecimiento o decrecimiento del contador y así determinar la acción de la puerta. Contaria con una interfaz que muestra la cantidad de persona dentro de la habitación.
## Diagrama de estados y transiciones
![DiagramaDeEstadosYTransiciones](https://github.com/user-attachments/assets/62b08589-05d2-4f5c-9c03-330a6db6515f)
 - __SET__: bandera de fin de inicialización
 - __B__: boton de habilitación inicializado en 0
 - __Se__: sensor de entrada, vale 1 al detectar movimiento
 - __Ss__: sensor de salida, vale 1 al detectar movimiento
 - __Cont__: contador de cantidad de persones dentro
 - __Lim__: limite máximo preestablecido

https://github.com/user-attachments/assets/366223bb-4dd3-47db-aa5b-9b9409bec085

Los pulsadores se pueden reemplazar con sensores infrarrojos FC-51 que tambien funcionan en activo bajo, estos requieren alimentarse a 3,5/5v
