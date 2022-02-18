#include <iostream>

using namespace std;

int main()
{
	
	//Declaro variables globales

	int diagonal1, diagonal2, area;

	
	
    cout<<"Calculador de Area de un Rombo"<<endl;
    
    cout<<"Digite Diagonal 1 del Rombo."<<endl;cin>>diagonal1;
	cout<<"Digite la Diagonal 2 del Rombo"<<endl;cin>>diagonal2;
	area = (diagonal1*diagonal2)/2;
    system("cls");
	
    cout<<"Calculador de Area de un Rombo"<<endl;		
	
	cout<<"El area de un Rombo de Diagonal 1 " << diagonal1 <<" y Diagonal 2 " << diagonal2 << " es: "<<endl;
    cout<< area <<endl;
    cout<<"Gracias por usar Calculadora de area Rombo"<<endl;


    
    //Anibal David Panameño
    
    

    return 0;
}

