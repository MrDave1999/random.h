# random.h

Este archivo de cabecera proporciona dos macros que permite manejar números aleatorios de cualquier rango.

# Instalación

Agrega el fichero `random.h` en el directorio/carpeta donde esté el programa fuente.
```C
#include "random.h" //Inclusión del header file
```

# Macros

- `random(max)` = Devuelve un número de un rango de 0 a `max` (donde `max` es el número máximo).

- `randomEx(min, max)` = Devuelve un número de cualquier tipo de rango, donde `min` es el número mínimo y `max` el número máximo.

# Uso

- Ejemplo 1:

Este código imprime 6 números aleatorios de 0 a 5. Donde `max` es 6 y no se toma en cuenta.
```C
#include <stdio.h>
#include "random.h"

int main(void)
{  
	int i = 0;
	printf("Numeros aleatorios del 0 al 5:\n\n");
	for (; i != 6; ++i)
		printf("%d\n", random(6));
	getchar();
	return 0;
}   
```

- Ejemplo 2:

Este código imprime 10 números aleatorios de 20 a 30.
```C
#include <stdio.h>
#include "random.h"

int main(void)
{  
	int i = 0;
	printf("Numeros aleatorios del 20 al 30:\n\n");
	for (; i != 10; ++i)
		printf("%d\n", randomEx(20, 30));
	getchar();
	return 0;
} 
```

También se puede colocar números negativos como en el siguiente ejemplo:
Donde `min` es -15 y `max` -5.
```C
#include <stdio.h>
#include "random.h"

int main(void)
{  
	int i = 0;
	printf("Numeros aleatorios del -15 al -5:\n\n");
	for (; i != 8; ++i)
		printf("%d\n", randomEx(-15, -5));
	getchar();
	return 0;
} 
```

# Créditos

- [MrDave](https://github.com/MrDave1999) 
	- Por el desarrollo de random.h
- [Microsoft Corporation](https://github.com/Microsoft) 
	- Se usó el compilador `cl.exe` para poder compilar los códigos de prueba, de ese modo se comprueba sí no hubo algún error.
