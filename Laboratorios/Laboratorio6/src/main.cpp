#include <iostream>
#include "FileReader.hpp"
#include "TextProcessor.hpp"
#include "RegexUtils.hpp"
#include "Exceptions.hpp"

//procesa las lineas de texto del archivo el nombre del archivo y el nombre del usuario si esto es diferente de 2 
int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " <archivo_texto>" << std::endl;
        return 1;
    }

    std::string filePath = argv[1];
    std::vector<std::string> lines;

//Si  lo contrario cumple procede a leer el archivo para tomar los datos de las lineas y usar las funciones para cada una
    try {
        FileReader<std::vector<std::string>> fileReader(filePath);
        fileReader.readFile(lines);
        
        std::cout << "Archivo leído correctamente. Total de líneas: " << lines.size() << std::endl;

        // Procesar el texto utilizando una lambda que cuenta las líneas
        int lineCount = 0;
        processText(lines, [&](const std::string& line) {
            if (!line.empty()) {
                lineCount++;
            }
        });
        std::cout << "Líneas no vacías: " << lineCount << std::endl;

        // Buscar un patrón con expresiones regulares
        std::string pattern = "\\d+";  // Busca cualquier número en las líneas
        std::vector<std::string> matchedLines = regexSearch(lines, pattern);
        std::cout << "Líneas que contienen números: " << matchedLines.size() << std::endl;

        // Reemplazar los números con una etiqueta
        regexReplace(lines, pattern, "[Número]");
        std::cout << "Números reemplazados en las líneas." << std::endl;

//Si no lo encuentra entonces mostrara error respectivos
    } catch (const FileNotFoundException& e) {
        std::cerr << e.what() << std::endl;
        return 1;

//Recibe las excepciones de los regex 
    } catch (const RegexException& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
