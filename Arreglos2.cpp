#include <iostream>
#include <stdlib.h>
using namespace std;
/*Implementar una función que invierta
 los elementos de un arreglo de enteros*/


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

void invertirArreglo(int *ptr,int c){
	for(int i=(c-1);i>=0;i--){
		cout<<*(ptr+i)<<" ";
		
	}
}

void inverRecursivo(const int *ptr, int c){
	if(c>=0){
		cout<<*(ptr+(c))<<" ";
		inverRecursivo(ptr,--c);
	}
}

int main() {
	int *ptr,c;
	cout<<"ingrese tamaño de arreglo";cin>>c;
	ptr=new int[c];
	crearArreglo(ptr,c);
	cout<<"\nARREGLO ORIGINAL\n";
	mostrarArreglo(ptr,c);
	cout<<"\nARREGLO INVERTIDO\n";
	invertirArreglo(ptr,c);
	cout<<"\n";
	cout<<"\nARREGLO INVERTIDO RECURSIVO\n";
	inverRecursivo(ptr,--c);
	return 0;
}
