#ifndef REGEXUTILS_HPP
#define REGEXUTILS_HPP

#include <regex>
#include <string>
#include <vector>
#include <stdexcept>

//Se hacen las clases respectivas analizazar las excepciones del archivo
class RegexException : public std::runtime_error {
public:
    explicit RegexException(const std::string& message)
        : std::runtime_error(message) {}
};

//funcion para buscar tipos de regex
std::vector<std::string> regexSearch(const std::vector<std::string>& lines, const std::string& pattern) {
    std::vector<std::string> matches;
    std::regex regexPattern;

    try {
        regexPattern = std::regex(pattern);
    } catch (const std::regex_error&) {
        throw RegexException("Error: Patrón de expresión regular inválido.");
    }

    for (const auto& line : lines) {
        if (std::regex_search(line, regexPattern)) {
            matches.push_back(line);
        }
    }

    return matches;
}

//funcion que remplaza los elemnentos del vector 
void regexReplace(std::vector<std::string>& lines, const std::string& pattern, const std::string& replacement) {
    std::regex regexPattern;

    try {
        regexPattern = std::regex(pattern);
    } catch (const std::regex_error&) {
        throw RegexException("Error: Patrón de expresión regular inválido.");
    }

    for (auto& line : lines) {
        line = std::regex_replace(line, regexPattern, replacement);
    }
}

#endif // REGEXUTILS_HPP
