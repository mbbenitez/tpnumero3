#include <iostream>
#include <iomanip>
#include <string.h>



using namespace std;
int main() {
	char confirm; 
	string resp;
	int tem, acumrandom1, acumrandom2,acumrandom3, puntos;
	confirm ='s';
	//acumrandom se utiliza para alternar entre las preguntas
	acumrandom1 = 0;
	acumrandom2 = 0;
	acumrandom3 = 0;

	puntos = 0;
	
	cout<<"Bienvenido al juego de preguntas mas divertido de la Argentina!"<<endl;
	
	while((confirm=='s')or (confirm=='S')){
	cout<<"Selecciona una categoria :"<<endl;
	cout<<"\n\n\tIngresa 1 si queres participar por GEOGRAFIA"<<endl;
	cout<<"\tIngresa 2 si queres participar por HISTORIA ARGENTINA"<<endl;
	cout<<"\tIngresa 3 si queres participar por ENTRETENIMIENTO"<<endl;
	cin>> tem;
	
		if (tem==1){
			acumrandom1++;
			
			if (acumrandom1==1){
				cout<<"¿Cual es el rio mas largo del mundo? :"<<endl;
				cin>>resp;
				if((resp =="amazonas") or (resp =="Amazonas") or (resp=="AMAZONAS")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}
			
			if (acumrandom1==2){
				cout<<"¿En que pais se encuentra la montaña mas alta de america?:"<<endl;
				cin>>resp;
				if((resp=="argentina") or (resp =="Argentina") or (resp =="ARGENTINA")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}		
		
			if (acumrandom1==3){
				acumrandom1 = 0;
				cout<<"¿Cual es el oceano mas extenso del mundo?:"<<endl;
				cin>>resp;
				if((resp=="pacifico") or (resp =="Pacifico")or (resp =="PACIFICO")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}
		
		}// fin tematica geografia
		
		if (tem==2){
			acumrandom2++;
			if (acumrandom2==1){
				cout<<"¿Cual es el apellido del primer ministro de la Argentina en tomar deuda externa?:"<<endl;
				cin>>resp;
				if((resp=="rivadavia") or (resp =="Rivadavia")or (resp =="RIVADAVIA")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}
			
			if (acumrandom2 == 2){
				cout<<"ingrese la palabra faltante en la siguiente frase:"<<endl;
				cout<<"La patria dejara de ser '_____' o la bandera flameara sobre sus ruinas."<<endl;
				cin>>resp;
				if((resp=="colonia") or (resp =="Colonia") or (resp =="COLONIA")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}
			
			if (acumrandom2==3){
				cout<<"¿De que origen fueron las invasiones en nuestro territorio en el año 1806?:"<<endl;
				cin>>resp;
				if((resp=="inglesa") or (resp =="inglesas")or (resp =="Inglesas")or (resp =="Inglesa")or (resp =="INGLESAS")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}		
		
			if (acumrandom2 == 4){
				acumrandom2 = 0;
				cout<<"ingrese la palabra faltante en la siguiente frase:"<<endl;
				cout<<"Seamos '____' que lo demas no importa nada!"<<endl;
				cin>>resp;
				if((resp=="libres") or (resp =="Libres")or (resp =="LIBRES")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}
		
		}//fin de tematica historia		
		
		if (tem==3){
			acumrandom3++;
			string frase= "la historia oficial";
			if (acumrandom3==1){
				cout<<"Completa la palabra que falta!"<<endl;
				cout<<"Cual fue la primer pelicula en ganar el premio Oscar? : "<<endl;
				cout<<"La '_____' oficial."<<endl;
				cin>>resp;
				//if(resp.compare(frase)==0){
				
				if((resp=="Historia") or (resp =="historia") or (resp =="HISTORIA")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}
			if (acumrandom3==2){
				cout<<"¿Como se llamaba el perro de la serie Casados con Hijos?:"<<endl;
				cin>>resp;
				if((resp=="Fatiga") or (resp =="fatiga")or (resp =="FATIGA")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}		
		
			if (acumrandom3==3){
				acumrandom3= 0;
				cout<<"¿Cual era el nombre del piloto del avion en la pelicula Relatos Salvajes?:"<<endl;
				cin>>resp;
				if((resp=="Javier") or (resp =="javier")or (resp =="JAVIER")){
					cout<<"Tu respuesta es correcta!, sumas 1 punto"<<endl;
					puntos++;
				}else{
					cout<<"Uy! Tu respuesta es incorrecta, sumas 0 puntos"<<endl;
					cout<<"Perdiste, igual: Gracias por jugar!"<<endl;
					cout<<"El total de puntos conseguido fue : "<<puntos<<endl;		
	 				return 0;
	 				getchar();
					getchar();
				}
			}
		
		}//fin de tematica entretenimiento
		
	cout<<"Desea volver a jugar? ingrese 's' en caso afirmativo o 'n' en caso negativo:"<<endl;	
	cin>>confirm;
    
	}// fin while
		
	cout<<"Gracias por jugar"<<endl;
	cout<<"El total de puntos conseguido fue : "<<puntos<<endl;	
		
	return 0;
	getchar();
	getchar();	
		
}	//fin de programa principal
