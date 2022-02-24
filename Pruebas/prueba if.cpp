#include <iostream>


using namespace std;

int main()
{
		int Precio;
		cout<<"Precio?"<<endl;
		Precio =50000;

		if	(Precio<=30000){
			
			cout<<"//////////////"<<endl;
			cout<<"Zapato Tipo A"<<endl;
			cout<<"50% de Utilidad"<<endl;
			cout<<"Con el Precio de: "<<Precio<<endl;
			cout<<"//////////////////////////"<<endl;
			
		}else if(Precio>30000 && Precio<=60000){
			
			cout<<"//////////////"<<endl;
			cout<<"Zapato Tipo B"<<endl;
			cout<<"40% de Utilidad"<<endl;
			cout<<"Con el Precio de: "<<Precio<<endl;
			cout<<"//////////////////////////"<<endl;
		}else if(Precio>60000){
			
			cout<<"//////////////"<<endl;
			cout<<"Zapato Tipo C"<<endl;
			cout<<"30% de Utilidad"<<endl;
			cout<<"Con el Precio de: "<<Precio<<endl;
			cout<<"//////////////////////////"<<endl;
			
			
		}
		
	
}
