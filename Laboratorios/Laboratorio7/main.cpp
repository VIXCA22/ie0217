#include <iostream>
#include <sqlite3.h>

using namespace std; 

static int callback(void* NotUsed, int argc, char** argv, char** azColName){
for (int i = 0; i < argc; i++) {
cout << azColName[i] << ": " << (argv[i] ? argv[i] : "NULL") << endl;
}
return 0;
}

int main() {
sqlite3* db;
char* errMsg = 0;
int rc;
// Abre o crea la base de datos
rc = sqlite3_open("inventario.db", &db);
if (rc) {
cerr << "No se pudo abrir la base de datos: " << sqlite3_errmsg(db) << endl;
return (0);
} else {
cout << "Base de datos abierta con éxito" << endl;
}

// Crea la tabla Productos
const char* sql = "CREATE TABLE IF NOT EXISTS Productos ("
"IDProducto INTEGER PRIMARY KEY AUTOINCREMENT,"
"NombreProducto TEXT NOT NULL,"
"Cantidad INT NOT NULL,"
"Precio REAL NOT NULL);";
rc = sqlite3_exec(db, sql, callback, 0, &errMsg);
if (rc != SQLITE_OK) {
cerr << "Error al crear la tabla: " << errMsg << endl;
sqlite3_free(errMsg);
} else {
cout << "Tabla creada con éxito" << endl;
}


/*const char* sqlInsert = "INSERT INTO Productos (NombreProducto, Cantidad, Precio) "
"VALUES ('Laptop', 10, 1000.50),"
"('Teclado', 50, 20.99),"
"('Mouse', 30, 15.50);";

rc = sqlite3_exec(db, sqlInsert, callback, 0, &errMsg);
if (rc != SQLITE_OK) {
cerr << "Error al  insertar los datos de la tabla: " << errMsg << endl;
sqlite3_free(errMsg);
} else {
cout << "Datos insertados con éxito" << endl;
}
*/

/*
const char* sqlUpdate = "UPDATE Productos SET Cantidad = 25 WHERE NombreProducto = 'Mouse';";
rc = sqlite3_exec(db, sqlUpdate, callback, 0, &errMsg);
if (rc != SQLITE_OK) {
cerr << "Error al  actualizar los datos de la tabla: " << errMsg << endl;
sqlite3_free(errMsg);
} else {
cout << "Datos actualizados con éxito" << endl;
}
*/

/*const char* sqlDelete = "DELETE FROM Productos WHERE NombreProducto = 'Teclado';";
rc = sqlite3_exec(db, sqlDelete, 0, 0, &errMsg);
if (rc != SQLITE_OK) {
cerr << "Error al  eliminar los datos de la tabla: " << errMsg << endl;
sqlite3_free(errMsg);
} else {
cout << "Datos eliminados con éxito" << endl;
}
*/


const char* sqlSelect = "SELECT * FROM Productos;";
rc = sqlite3_exec(db, sqlSelect, callback, 0, &errMsg);
if (rc != SQLITE_OK) {
cerr << "Error al hacer la consulta: " << errMsg << endl;
sqlite3_free(errMsg);
}



// Cierra la base de datos
sqlite3_close(db);

return 0;
}

