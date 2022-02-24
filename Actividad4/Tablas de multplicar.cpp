#include <iostream>

using namespace std;

int main()
{
	     
    int a, i;
    
    cout<<"\t\t TABLAS DE MULTIPLICAR \t\t"<<endl;
    
    while(i<=10)
    {
    	cout<<"\t Tabla del "<< i << endl;
    	i++;
	}
    
    cout<<"\t\t Digite el numero de la tabla que dese ver"<< endl;cin>>a;
    
    cout<<"\t TABLAS DEL "<< a <<endl;    
    
        for(i=0;i<=10;i++)
    {
    	cout<<"\t 1 x "<< a <<" = "<< a*i << endl;
	}
    
    
    //Anibal David Panameño
    
    

    return 0;
}

