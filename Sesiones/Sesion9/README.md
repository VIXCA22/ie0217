
# Sesión #9: Expresiones regulares y Makefiles

#### En esta sesión se explicará el uso o manejo de los expresiones regulares que hace alución a restrincciones de texto, esto hace que todo sea mas ordenado simplifica el tener que hacer cada restricción por aparte. Además se habla de como automatizar compilaciones por medio de los makefiles así como limpiar los archivos despúes de la compilación de estos.

## Resumen del documento de dicha información

### **Expresiones Regulares (Regex)**
Las expresiones regulares son patrones utilizados para buscar, validar y manipular cadenas de texto de forma flexible y potente.

- **Caracteres literales**: Coinciden literalmente con el texto.
- **Punto (`.`)**: Coincide con cualquier carácter excepto un salto de línea.
- **Asterisco (`*`)**: Representa cero o más repeticiones del carácter anterior.
- **Más (`+`)**: Representa una o más repeticiones del carácter anterior.
- **Interrogación (`?`)**: Indica que el carácter anterior es opcional.
- **Corchetes (`[]`)**: Se utilizan para especificar un conjunto de caracteres permitidos.
- **Rango en corchetes**: Usa `-` para definir rangos como `[a-z]` o `[0-9]`.
- **Negación (`^`)**: Niega el conjunto de caracteres en corchetes.
- **Grupos (`()`)**: Agrupan elementos en subexpresiones.
- **Alternancia (`|`)**: Coincide con una de varias opciones.
- **Anclas (`^` y `$`)**: Indican el inicio y fin de una cadena.
- **Escape (`\`)**: Escapa caracteres especiales.

### **Makefile**
Un Makefile automatiza la compilación de programas y define qué partes deben recompilarse.

- **Reglas**: Constan de un target, dependencias y comandos
- **Dependencias**: Archivos necesarios para crear el target.
- **Comandos**: Instrucciones que se ejecutan para construir el target. Deben estar precedidos por una tabulación.
- **Variables**: Facilitan la reutilización de valores en todo el archivo.
- **Phony targets**: Son targets que no representan archivos físicos, como `clean`.
- **Reglas de patrón**: Permiten construir varios archivos con el mismo patrón o extensión.

---