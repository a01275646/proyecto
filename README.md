# TC1033 Proyecto Demo
Este proyecto demo está hecho para servir de ejemplo a los alumnos de Pensamiento Orientado a Objetos TC1033. Con la intención de que vean el alcance que se espera al final de la materia de su proyecto y que tengan ejemplos de estilo a seguir. 

## Contexto

Una persona está dispuesta a comprar un automóvil ya sea de último modelo o usado. Esta persona quiere buscar un modelo del placer del cliente, esto quiere decir que querrá buscar alguna marca y el año en que salió a la venta el modelo que él desea.
 
Como punto a parte esta persona también piensa en el precio del auto pues querrá saber cuánto le costará un modelo “x”, desde su versión más austera al más equipado, y también el año “n” del carro. En adicional hay que agregar costos de impuestos al precio original del auto.


## Funcionalidad
Este primer avanze solo cuenta con clases y objetos pues es una entrega simple pero funciona para el planteamiento del proyecto.
  
Consta de un menu con las opciones iniciales y corre sobre consola.

## Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con:
    "g++ empleado.h empresa.h main.cpp"
    
 correr en linux:
      "/a.out"
      
 correr en windows:
      "a.exe"
      
## Correcciones
Para la siguiente entrega cambie mis clases precio y modelo la cual agregue el hecho de que una persona pueda interactuar agregando valores para que se mas logico.

Tambien cree una nueva clase de cotizacion que obtiene los valores de las clases precio y modelo, la cual junta los atributos para imprimir o juntar datos para cotizar un auto, tambien sirve como diagrama de clase porque genera variables que afectan a las dos clases antes mencionadas. 

Por ultimo esta el diagrama de lucidchart que muestra como funciona la clase cotizacion para alterar las otras dos clases, precio y modelo.

Para este tercer avance cambie totalmente mi modelo y cambie las clases marca, modelo y precio por auto, pickup y vehículos. Mientras la clase cotización la convertí en un estado de agregación y la clase madre es Vehículos. Cambie completamente el orden e implemente nuevos atributos y métodos. 

Para el avance final me enfoque en crear el main el cual la composición fue la clase cotización la cual guardaba listas de autos que llegan a ser cotizados.