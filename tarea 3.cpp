#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void randomizar();
	
class calzado 
	{
	private:
	int talla;
	char ladoPie;
	
	public:
		//dando datos a talla y ladoPie
		calzado()
		{
			talla = 30 ;
			ladoPie = 'd';
		}
		calzado (int tam)
		{
			ladoPie = 'd';
			talla = tam;
		}
			calzado (int tam, char lado)
			{
				ladoPie = lado;
				talla = tam;
			}
		bool esParDe(calzado cal1)
		{
	bool r;
		if(talla == cal1.talla and ladoPie != cal1.ladoPie)
		r= true;
		else
			r= false;
		return r ;
		}

calzado crearPar()
{
	calzado par;
	par.talla = talla;
	if(par.ladoPie!='d')
		ladoPie='i';
	else
		ladoPie='d';
	return par;
}	
};
void randomizar()
{
	int ra,ral,rb,rbl;
	char lad,lad2;
	srand(time(NULL));
	ra=40+rand()%5;
	ral=rand()%2;
	rb=40+rand()%5;
	rbl=rand()%2;
	cout<<"talla: "<<ra<<endl;
	if(ral==0)
		lad='I';
	else
		lad='D';
	cout<<"lado: "<<lad<<endl;
	cout<<"talla 2: "<<rb<<endl;
	if(rbl==0)
		lad2='I';
	else
		lad2='D';
	cout<<"lado 2: "<<lad2<<endl;
	short n;
	do
	{
		cout<<"diga si los calzados son pares o no (1=si 2=no)"<<endl;
		cin>>n;
	}while(n>2 or n<=0);
	if(n==1 and ra==rb and rbl!=ral)
		cout<<"correcto"<<endl;
	if(n==2 and ra!=rb and (rbl!=ral or rbl==ral))
		cout<<"correcto"<<endl;
	else
		cout<<"incorrecto, vuelve a intentar"<<endl;
}

int main(int argc, char *argv[])
{
	
	calzado a,b(30,'d'),c(30,'i'),d(30,'d');
	//if(a.esParDe(b))
	//	cout<<"a es par de b"<<endl;
	//else
	//	cout<<"a no es par de b"<<endl;
	cout<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"randomizado: "<<endl;
	cout<<"-------------------------------"<<endl;
    randomizar();

	return 0;
}
//talla = 40+rand()%5 funcion randomizar 
//
//tarea crear app en consola que cree dos pares de calzado (randomizar talla de 40-15 y lado de L-D)
//mostrar datos del los calzados y preguntar al usuario (mirando en pantalla)
