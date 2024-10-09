# Laboratorio #7


## Sistemas de Gestión de Base de Datos (DBMS)Archivo

En la laboratorio #7 se comparte un un documento pdf en el que se estarán realizando dos ejercicios relacionados a creaciones de bases de datos, tablas y manipulación de datos .

# Ejercicio 1

### Parte 1: Creación de la base de datos y las tablas

#### Se crea la base de datos en este caso `inventariotienda`

![foto1](./fotos/foto1.png)

#### Se crea la tabla en este caso `Productos`

![foto2](./fotos/foto2.png)

#### Parte 2: Inserción de datos
#### Se incertan los tres productos

![foto3](./fotos/foto3.png)

#### Parte 3: Consultas SQL

#### Se seleccionan todos los productos
![foto4](./fotos/foto4.png)

#### Se actualiza el valor de la cantidad de Mouse a '25'

![foto5](./fotos/foto5.png)

#### Se elimina el producto 'Teclado'
![foto6](./fotos/foto6.png)

#### Se muestra solamente el precio de 'Laptop'

![foto7](./fotos/foto7.png)

#### Parte 4: Discusión

#### - ¿Qué ventajas ofrece un sistema de gestión de base de datos como MySQL para manejar el inventario frente a métodos tradicionales?

##### Las ventajas que ofrece es escalamiento y fácil mantenimiento de los datos, además la fácil elaboración de tablas con comandos intuitivos.

#### - ¿Cómo gestionan estos sistemas la concurrencia cuando varios usuarios intentan modificar el mismo dato al mismo tiempo?

##### Se utilizan dos tipos de bloqueos para que esto no suceda el bloqueo compartido o bloqueo exclusivo. El bloqueo compartido solo permite tener una  vista mientras que el exclusivo no permite nada al otro usuario.


# Ejercicio 2
#### Parte 1: Creación de la base de datos y la tabla.

![foto8](./fotos/foto8.png)


#### Parte 2: Inserción de productos 
##### Se usa la porción de código al insertar la tabla para poder ingresar los valores  e indicar si se ingresaron con éxito(se utiliza para mostrar datos) y cambiando algunas  cosas  nombre de la funcion sql y como no es un mensaje lo que se mostrara , esto anterior se elimina(se utiliza para modificar la tabla)

![foto9](./fotos/foto9.png)


#### Parte 3: Consultas SQL
#### Casi igual a incertar nueva tabla se utiliza para poder mostrar los valores en la consola.

![foto10](./fotos/foto10.png)

#### Actualizar la cantidad de Mouse a 25 se actualiza siguiendo lo anterior

![foto11](./fotos/foto11.png)

#### Eliminar el producto Teclado
##### Se elimina el producto teclado

![foto12](./fotos/foto12.png)
![foto13](./fotos/foto13.png)

#### Parte 5: Ejecución de las consultas
##### Se utiliza estos códigos como se mencionaba anteriormente para modificar y otro para mostrar datos según la acción que se requiera ejecutar 

```cpp
rc = sqlite3_exec(db, sqlInsert, callback, 0, &errMsg);
if (rc != SQLITE_OK) {
std::cerr << "Error al insertar datos: " << errMsg << std::endl;
sqlite3_free(errMsg);
}

rc = sqlite3_exec(db, sqlSelect, callback, 0, &errMsg);
if (rc != SQLITE_OK) {
std::cerr << "Error al consultar datos: " << errMsg << std::endl;
sqlite3_free(errMsg);
}
```

## Se compila y se ejecuta


```bash
 g++ main.cpp -o main -IC:\sqlite\sqlite -LC:\sqlite\sqlite -lsqlite3 
 
 .\main.exe


```
    



