#include "Listas.h"


///Cuerpo de las Funciones Listas

nodo *IncioLista ()
{
    return NULL;
}

nodo *CrearNodo(persona dato)
{
    nodo * aux = (nodo*) malloc(sizeof(nodo));

    aux->dato = dato;

    aux->siguiente = NULL;

    return aux;
}

nodo *AgregarPricipio (nodo *lista, nodo *nuevo_nodo)
{
    if (lista=NULL)
    {
        lista = nuevo_nodo;
    }
    else
    {
        nuevo_nodo->siguiente = lista;
        lista = nuevo_nodo;
    }

    return lista;
}

nodo *BuscarUltimoNodo (nodo *lista)
{
    nodo * seg = lista;

    if(seg!=NULL)
    {
        seg = seg->siguiente;
    }
    return seg;
}

nodo *BuscarNodoEspecifico (nodo * lista , char nombre[20])
{
    nodo * seg;

    if(seg!=NULL)
    {
        while(strcmp(nombre, seg->siguiente)!=0)
        {
            seg=seg->siguiente;
        }
    }

    return seg;
}

nodo * AgregarFinal (nodo * lista, nodo * nuevonodo)
{
   if(lista == NULL)
   {
       lista = nuevonodo;

   }
   else
   {
       nodo * ultimo = BuscarUltimoNodo(lista);
       ultimo->siguiente = nuevonodo;
   }

    return lista;
}

nodo * EliminarNodoBuscado (nodo * lista, char nombre[20])
{
   nodo * seg;
   nodo * ante;

   if((lista!=NULL)&& (strcmp(nombre,seg->dato.nombre))!=0)
   {
       nodo * aux = lista;

       lista = lista->siguiente;
       free(aux);
   }
   else
   {
     seg = lista;
     while((lista!=NULL)&&(strcmp(nombre,seg->dato.nombre)!=0))
     {
         ante = seg;
         seg=seg->siguiente;
     }

     if(seg!=NULL)
     {
         ante->siguiente = seg->siguiente;
         free(seg);
     }
   }
     return lista;
}

nodo * AgregarEnOrden (nodo * lista, nodo * nuevoNodo)
{
    if(lista==NULL)
    {
        lista = nuevoNodo;
    }
    else
    {
        if(strcmp(nuevoNodo->dato.nombre, lista->dato.nombre)>0)
        {
            lista = AgregarPricipio(lista, nuevoNodo);
        }
        else
        {
            nodo * ante = lista;
            nodo * seg = lista->siguiente;

            while(seg!=NULL && strcmp(nuevoNodo->dato.nombre, seg->dato.nombre)>0)
            {

                ante = seg;
                seg = seg->siguiente;

            }

            nuevoNodo->siguiente = seg;
            ante->siguiente = nuevoNodo;
        }
    }
    return lista;
}

nodo * BorrarAllList (nodo * lista)
{
    nodo * proximo;
    nodo * seg;

    seg = lista;

    while (seg!=NULL)
    {
        proximo=seg->siguiente;
        free(seg);
        seg=proximo;
    }
    return seg;
}

nodo * SumarNodos (nodo * lista)
{
    nodo * seg = lista;
    int suma = 0;

    while(seg!=NULL)
    {
      suma = suma + seg->dato.edad;
      seg=seg->siguiente;
    }

    return suma;
}

void MostrarNodo(nodo * aux)
{
    if(aux!=NULL)
    {
        mostrarPersonas(aux->dato);
    }
}

void MostrarLista(nodo * lista)
{
    nodo * aux = lista;

    if(aux!=NULL)
    {
        MostrarNodo(aux);
        aux = aux->siguiente;
    }
}

nodo * DeleteFirstNode (nodo * lista)
{
    nodo * aux = lista;
    nodo * siguiente;

    if(lista!=NULL)
    {
        siguiente = aux->siguiente;
        lista = siguiente;
        free(aux);
    }
    return lista;
}


nodo * DeleteLatestNode (nodo * lista)   /// VERSION NOC SI ANDA
{
    nodo * ultimo;
    nodo * aux;

    ultimo = BuscarUltimoNodo(lista);
    aux = lista;

    while((aux->siguiente == ultimo)
    {
        free(ultimo);
        aux->siguiente = NULL;
    }

    return aux;
}



































































































































