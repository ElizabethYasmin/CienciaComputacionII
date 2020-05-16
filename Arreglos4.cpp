#include <iostream>
using namespace std;

/*Implemente una función que reciba
 una cadena y retorne su tamaño.*/
int lenCad(char * cad){
	int s=0;
	for(int i=0;*cad++ !='\0';i++){
		s++;
	}
	return s;
}

int lenRecu(char *cad,int i=0){
	int s=0;
	if(*(cad+i)=='\0')
		return s;
	return (++s)+lenRecu(cad,++i);
	
}
int main(){
	long t=100;
	char cad[t];
	char *ptr;
	ptr=&cad[0];
	cout<<"Ingrese cadena-->";
	cin.getline(ptr,t); 
	cout<<"\nCadena Original\n\n";
	cout<<ptr;
	cout<<"\n\nLongitud de la Cadena->"<<lenCad(ptr)<<endl;
	cout<<"\nLongitud de la Cadena Recusiva->"<<lenRecu(ptr);
	return 0;
}
