#include <iostream>

/*Implementar una función que ordene 
los elementos de un arreglo: ascendente.*/
using namespace std;

void crearArreglo(int *ptr,int c){
	
	for(int i=0;i<c;i++){
		cout<<"Ingrese numero"<<i<<"->";
		cin>>*(ptr+i);
	}
}

void mostrarArreglo(int *ptr,int c){
	for(int i=0;i<c;i++){
		cout<<*(ptr+i)<<" ";
	}
}

void orden(  int *ptr,  int c ) {
   for ( int i = 0; i < c - 1; i++ ){
      for ( int k = 0; k < c - 1; k++ ) {
         if ( *(ptr+k) > *(ptr+(k + 1))) {
            swap( *(ptr+k), *(ptr+(k + 1)) );
         }
      }
   }
} 


void swap( int *ptrElemento1, int *ptrElemento2 )
{
   int mantiene = *ptrElemento1;
   *ptrElemento1 = *ptrElemento2;
   *ptrElemento2 = mantiene;
}

int main() {
	int *ptr,c;
	cout<<"ingrese tamaño de arreglo";cin>>c;
	ptr=new int[c];
	crearArreglo(ptr,c);
	cout<<"\nARREGLO ORIGINAL\n";
	mostrarArreglo(ptr,c);
	orden( ptr, c );
	cout<<"\n";
	mostrarArreglo(ptr,c);

	return 0;
}
