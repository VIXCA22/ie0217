#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>

//Se crea la clase para las  excepsiones del los archivos no encontrados en el archivo
class FileNotFoundException : public std::runtime_error {
public:
    explicit FileNotFoundException(const std::string& message)
        : std::runtime_error(message) {}
};

//se define nuestro template
template <typename Container>

//se hace la clase para leer los archivos
class FileReader {
public:
    FileReader(const std::string& filePath) : filePath(filePath) {}
    //lee el archivo si el archivo se puede abrir por permisos accederá , de lo contrario se da el error
    void readFile(Container& container) {
        std::ifstream file(filePath);
        if (!file.is_open()) {
            throw FileNotFoundException("Error: No se pudo abrir el archivo " + filePath);
        }
//obtiene las lineas para guardar la linea para procesarla
        std::string line;
        while (std::getline(file, line)) {
            container.push_back(line);
        }

        file.close();
    }

private:
    std::string filePath;
};

#endif // FILEREADER_HPP
