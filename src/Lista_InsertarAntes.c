#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista!=NULL && elemento!=NULL){
		void *objeto = elemento->objeto;
		if(Lista_Buscar(lista,objeto)!=NULL){
			ElementoLista *anterior = Lista_Anterior(lista,elemento);
			ElementoLista *actual = Lista_Buscar(lista,objeto);
			ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
			nuevo->objeto = objeto;
			nuevo->anterior = anterior;
			nuevo->siguiente = actual;
			actual->anterior = nuevo;
			anterior->siguiente = nuevo;
			lista->numeroElementos+=1;
			return 0;
		}
	}
	return -1;
}

//Falta ver correcciones
