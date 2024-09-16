
# Sesión #8: Templates y excepciones

#### En esta sesión se explicará el uso o manejo de los templates lo que simplifica funciones y clases además de la manipulación de errores (try,catch,throw) lo cual nos hará mejorar nuestro código para eventuales errores y como manejarlos.

## Resumen del documento de dicha información

### Templates en C++
#### Templates permiten crear código genérico para trabajar con distintos tipos de datos sin escribir código específico para cada tipo.
#### Function templates: Permiten definir funciones genéricas que aceptan diferentes tipos de datos. Se declaran con `template<typename T>` y luego se usa `T` como parámetro de tipo en la función.
#### Class templates: Funcionan de manera similar, permitiendo que una clase maneje múltiples tipos de datos usando un parámetro de tipo `T`.
### Manejo de Excepciones en C++
#### El manejo de excepciones se realiza mediante los bloques `try` , `catch` , y `throw` .
#### try: En este bloque se coloca el código que puede generar una excepción.
#### throw: Se usa para lanzar una excepción cuando ocurre un error.
#### catch: Se encarga de capturar y manejar las excepciones lanzadas.
#### Se menciona también el uso de `...`en un catch cuando no se conoce el tipo de excepción que puede ocurrir.

---