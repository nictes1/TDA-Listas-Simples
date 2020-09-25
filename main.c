#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "Listas.h"
#include "Persona.h"


int main()
{

   persona aux1={"hola", 20};
   persona aux2={"el", 19};
   persona aux3={"que", 20};
   persona aux4={"lee", 20};


   nodo * lista = IncioLista ();

   lista = AgregarFinal(lista, CrearNodo(aux1));
   lista = AgregarFinal(lista, CrearNodo(aux2));
   lista = AgregarFinal(lista, CrearNodo(aux3));
   lista = AgregarFinal(lista, CrearNodo(aux4));

   MostrarLista(lista);



    return 0;
}
