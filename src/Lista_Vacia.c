#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_Vacia(ListaEnlazada *lista){
	if((*lista).numeroElementos == 0){
		return TRUE;
	}
	return FALSE;
}
