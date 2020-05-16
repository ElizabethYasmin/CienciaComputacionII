#include <iostream>
#include <iomanip>
/*Implementar una función que ordene 
los elementos de un arreglo: ascendente.*/

using namespace std;
/*
void orden( int *, const int ); // prototipo
void swap( int * const, int * const ); // prototipo

int main()
{
   const int nSize = 10;
   int a[ nSize ] = { 3, 9, 14, 27, 18, 154, 8, 6, 74, 33 };

   cout << "\nElementos a ordenar\n";

   for ( int j = 0; j < nSize; j++ )
      cout << setw( 5 ) << a[ j ];

   orden( a, nSize );  // ordena el arreglo

   cout << "\nElementos ordenados\n";

   for ( int j = 0; j < nSize; j++ )
      cout << setw( 5 ) << a[ j ];
   
   cout << endl;

   return 0;  // indica terminación exitosa

}

void orden( int *matriz, const int nSize )
{
   for ( int pasada = 0; pasada < nSize - 1; pasada++ )
   {
      for ( int k = 0; k < nSize - 1; k++ )
      {
         if ( matriz[ k ] > matriz[ k + 1 ] )
         {
            swap( &matriz[ k ], &matriz[ k + 1 ] );
         }
      }
   }
} 

void swap( int * const ptrElemento1, int * const ptrElemento2 )
{
   int mantiene = *ptrElemento1;
   *ptrElemento1 = *ptrElemento2;
   *ptrElemento2 = mantiene;
}*/

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

void orden( const int *ptr,  int c ) {
   for ( int pasada = 0; pasada < c - 1; pasada++ ){
      for ( int k = 0; k < c - 1; k++ ) {
         if ( ptr[ k ] > ptr[ k + 1 ] ) {
            swap( ptr[ k ], ptr[ k + 1 ] );
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

	return 0;
}
