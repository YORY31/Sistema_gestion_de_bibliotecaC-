#include "Pila.h"
#include <iostream>

Pila::Pila(): _ultimo(NULL)
{
}

void Pila::Agregar(Elemento* elemento)
{
   if(elemento == nullptr) {
        std::cerr << "Error: No se puede agregar un elemento nulo" << std::endl;
    return;
}

    elemento->SetSiguiente (_ultimo);  
    _ultimo = elemento;
}

Elemento* Pila::Extraer()
{
    
            if(_ultimo == nullptr) {
                return nullptr;
                std ::cerr << "la lista esta vacia , no hay elementos para extraee";
            }
           

            Elemento* temp = _ultimo;
            _ultimo = _ultimo->GetSiguiente();
            temp->SetSiguiente(nullptr);
            return temp;
}
