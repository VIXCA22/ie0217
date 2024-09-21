#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <stdexcept>
#include <string>

//Se eliminan debido a que ya han sido definidas en otros headfiles por lo que debido a ello es nuestro error

/*class FileNotFoundException : public std::runtime_error {
public:
    explicit FileNotFoundException(const std::string& message)
        : std::runtime_error(message) {}
}; */

class ReadException : public std::runtime_error {
public:
    explicit ReadException(const std::string& message)
        : std::runtime_error(message) {}
};

/*class RegexException : public std::runtime_error {
public:
    explicit RegexException(const std::string& message)
        : std::runtime_error(message) {}
};*/

#endif // EXCEPTIONS_HPP
