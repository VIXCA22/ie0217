#ifndef TEXTPROCESSOR_HPP
#define TEXTPROCESSOR_HPP

#include <functional>

//Esta función es orientada al procesamiento de texto el cual el template recibe como parámetros

template <typename Container, typename Func>
void processText(Container& container, Func processFunc) {
    for (auto& element : container) {
        processFunc(element);
    }
}

#endif // TEXTPROCESSOR_HPP
