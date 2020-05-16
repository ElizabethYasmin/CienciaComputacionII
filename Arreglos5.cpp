#include <iostream>
using namespace std;
/*Implemente una función que reciba dos cadenas a y b;
 dicha función debe concatenar la cadena a a la cadena b.
(asuma que la cadena b tiene el tamaño suficiente para
 contener los elementos de a).*/

 int lenCad(char * cad){
	int s=0;
	for(int i=0;*cad++ !='\0';i++){
		s++;
	}
	return s;
}
void conCadena(char *cad,char *cad2){
	int t=(lenCad(cad2)+lenCad(cad));
	int c=0;
	for(int i=lenCad(cad2);i<t;i++){
		*(cad2+i)=*(cad+(c++));	
	}cout<<cad2;
}

int main(){
	long t=100;
	char ptr[t];
	char ptr2[t];
	char *cad,*cad2;
	cad=ptr;
	cad2=ptr2;
	cout<<"Ingrese cadena 1-->";
	cin.getline(cad,t); 
	cout<<"Ingrese cadena 2-->";
	cin.getline(cad2,t); 
	cout<<"\n\nCadenas Originales";
	cout<<"\n\n---------------------------------\n\n";
	cout<<"Cadena1->  "<<cad<<"   Cadena2->  "<<cad2;

	cout<<"\n\nConcatenacion de cadenas";
	cout<<"\n\n---------------------------------\n\n";
	conCadena(cad,cad2);
	return 0;
}
/*
 int lenCad(char * cad){
	int s=0;
	for(int i=0;cad[i] !='\0';i++){
		s++;
	}
	return s;
}
void copCadena(char *cad, char *cad2){
	int u=lenCad(cad);
	int d=lenCad(cad2);
	int t=(lenCad(cad2)+lenCad(cad));
	
	char vector3[t];
	char *cad3;
	cad3=vector3;
	int c=0;
	for(int i=0;i<t;i++){
		cad=cad2;
		//cad3[i]= 
		
		
	}cout<<cad;
}

int main(){
	//char vector[]="Elizabeth";
	//char vector2[]="Yasmin";
	char* cadena;
	//cadena =malloc(sizeof(char)*128);
	cout<<"introduce cadena";
	fgets(cadena,128,stdin);
	cout<<cadena;
	//char *cad,*cad2;
//	cad=&vector[0];
//	cad2=vector2;
//	cout<<cad;
//	cout<<cad2;
//	lenCad(vector);
	cout<<"\n";
//	lenCad(vector2);
//	copCadena(vector,vector2);
	return 0;
}
*/
/*
void copiar(char *B ){
	char A[lenCad(B)];
	for( int i = 0 ; i < lenCad(B) ; i++){
		A[i]  =  B[i];
			cout<<A[i+1];
	}
	
}

*/
  
