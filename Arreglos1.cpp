#include <iostream>
using namespace std;
/*1. Implementar una función reciba un arreglo de enteros 
y su tamaño y retorne la suma de los elementos de un arreglo.
(Iterativa y recursiva).*/
/*
int sumar(int t,int n[]){
	int s=0;
	for(int i=0;i<t;i++){
		cout<<"Numero->"<<i<<"->";
		cin>>n[i];
		s+=n[i];
	}
	return s;
return 0;
}

int sumRecursiva(int t,int n[]){
	if(t==1){
		return n[0];
	}else{
		return n[t-1]+sumRecursiva(t-1,n);
	}
}

int main() {
	int n[100],t;
	cout<<"Tamaño de el arreglo->";
	cin>>t;
	cout<<"\nSuma de los elementos->"<<sumar(t,n)<<endl;
	cout<<"\nSuma recursiva de los elementos->"<<sumRecursiva(t,n);
	
}*/
void crearArreglo(int *ptr,int c){
	
	for(int i=0;i<c;i++){
		cout<<"Ingrese numero"<<i<<"->";
		cin>>*ptr++;
	}
}
int suma(int *ptr,int c){
	int s=0;
	for(int i=0;i<c;i++){
		s+=*ptr++;
	}
	return s;
}

int sumRecursiva(int *ptr,int c){
	if(c==0){
		return 0;
	}
	return *ptr + sumRecursiva(++ptr,--c);
}

int main() {
	int *ptr,c;
	cout<<"ingrese tamaño de arreglo";cin>>c;
	ptr=new int[c];
	crearArreglo(ptr,c);
	cout<<suma(ptr,c);
	cout<<"\n";
	cout<<sumRecursiva(ptr,c);
	return 0;
	}
	
