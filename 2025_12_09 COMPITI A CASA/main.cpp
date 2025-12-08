#include <iostream>
#include "var_globale.h"
#include "utilita.h"

int main () {
    std::cout<< "il valore globale e': " << variabile_globale1 << "\n";
    std::cout<< "se aggiungo 10 il valore e': " << aggiungi10(variabile_globale1) << "\n";
    return 0;
}
