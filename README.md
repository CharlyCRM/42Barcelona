# Ejercicios de C de mi formación en 42

Conservo aquí ejercicios realizados durante mi paso por 42Barcelona. Son prácticas de fundamentos y un trabajo de dibujo en terminal, no una biblioteca mantenida para uso general.

## Bloques

- `C_00/`: salida de caracteres, números y combinaciones.
- `C_01/`: punteros, intercambio de valores y primeras operaciones con cadenas.
- `C_02/` y `C_03/`: copia, comparación y concatenación de cadenas.
- `C_04/`: otras operaciones sobre cadenas y conversión de valores.
- `rush00/`: dibujo de una figura rectangular.

Los enunciados conservan las reglas de cada ejercicio. Parte de la estructura responde a esas restricciones, no a la organización de una aplicación completa.

## Leer o compilar

La mayoría de las funciones no tiene un `main` propio: necesita un programa de prueba que la invoque. No conviene compilar todos los ejercicios juntos como una sola aplicación.

`rush00` sí incluye entrada. Actualmente llama a `rush(5, 5)`: no recibe el tamaño desde argumentos de consola.

```sh
cc -Wall -Wextra -Werror rush00/main.c rush00/rush01.c rush00/ft_putchar.c -o rush-demo
./rush-demo
```

## Contexto

Muestran mi aprendizaje de memoria, punteros, bucles y funciones. No afirmo que todas las soluciones superen un evaluador actual ni cubran todos los casos límite. Los materiales docentes conservan su autoría y condiciones de uso.
