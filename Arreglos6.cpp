#include <iostream>
using namespace std;
#include <string.h>
/*6. Implemente una función que reciba
 dos cadenas a y b; y copie los elementos
  de la cadena a para la cadena b.*/

 int lenCad(char * cad){
	int s=0;
	for(int i=0;*cad++ !='\0';i++){
		s++;
	}
	return s;
}

void copiar(char *ptr ){
	char B[lenCad(ptr)];
	char *ptr2 = B;
	for( int i = 0 ; i < lenCad(ptr) ; i++){
		*(ptr2+i) =  *(ptr+i);
			cout<<*(ptr2+i);
	}
	
}


int main(){
	long t=100;
	char cad[t];
	char *ptr;
	ptr=cad;
	cout<<"Ingrese cadena-->";
	cin.getline(ptr,t); 
	cout<<"\n\nCadena Original\n\n";
	cout<<ptr;
	cout<<"\n\nLa cadena A copiada a la cadena B es\n\n";
	copiar(ptr);
	cout<<"\n\nTAMAÑO DE LA CADENA ->"<<lenCad(ptr);
	return 0;
}




