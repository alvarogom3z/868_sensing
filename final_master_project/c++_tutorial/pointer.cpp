#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	struct pointer{
		int n;				// Number of the node
		pointer *next;		// Pointer
	}*header = NULL, *aux, *aux1;
		
	do{
		aux= (pointer*)malloc(sizeof(struct pointer));		// Ask for memory
		cout << "Data to save: ";
		cin >> aux -> n;				// Data save in pointer
		
		
		if(header == NULL){				// If it is the first data, save on the header
			header = aux1 = aux;
		}else{
			aux1 -> next = aux;
			aux1 = aux;
			aux1 -> next = NULL;
		}
		
	}while(aux -> n != 0);
	
	cout << "Your list is: \n";
	aux1=header;
	while(aux1 != NULL){
		cout << aux1 -> n << "-";
		aux1= aux1 -> next;
	}
	
	return 0;
}
