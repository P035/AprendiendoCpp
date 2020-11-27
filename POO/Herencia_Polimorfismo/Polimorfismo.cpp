#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Persona{

	public:
		bool Estado_de_Vida(){
			if(vida <= 0){
				return false;
			}
			else{
				return true;
			}
		}
		string efecto;
		int vida;
		Persona(int vida):
		vida(vida){}

		void SerAtacado(){
			if(Estado_de_Vida()){
				cout << "Ah!" << endl << "Vida restante: " << vida << endl;
			}
			else{
				cout << "Ah me muerooo! :(" << endl << "Has matado a una persona." << endl;
			}
		}

};

class Varita{
	protected:
		int ataque, posibilidad_critico, duracion;
	
	public:
		void Atacar(Persona *obj){
			
			cout << "Yo te ataco con mi palo sin magia!" << endl;
			obj->vida -= 1;
			obj->SerAtacado();
			duracion--;
		}

};

class Varita_Fuego : public Varita{

	public:
		Varita_Fuego(int i, int x, int y){
			
			ataque = i;
			posibilidad_critico = x;
			duracion = y;
		}
		void Atacar(Persona *obj){
			if(duracion  > 0){
				cout << "Te ataco con fuego!" << endl;
				int quemaduras = rand() % 15 + 1; 
				int aux1 = duracion / 2;
				aux1 = aux1 - duracion;
				int dano = ataque + aux1;
				int randi = rand() % posibilidad_critico + 1;
				if(randi < posibilidad_critico){
					dano = dano + dano / 2;
				}
				obj->vida -= dano;
				int contador = 0;
				if(obj->vida > 0){
					for(int i = 0; i < quemaduras; i++){
						if(obj->vida > 0){
							obj->vida -= 1;
							cout << "Quemandoo..." << endl;
							contador++;
						}
					}
					cout << endl;
				} 
				obj->SerAtacado();
				cout << endl;
				cout << "Daño aplicado en ataque: " << dano << endl;
				cout << "Daño aplicado en quemaduras: " << contador << endl;
				cout << "Duracion restante de varita: " << duracion << endl; 
				duracion--;
			}
			else{
				cout << "Varita rota, no se puede usar :c" << endl;
			}
		}
};

class Varita_Rayo : public Varita{

	private:
		int contador = 1;
	public:
		Varita_Rayo(int i, int x, int y){
			ataque = i;
			posibilidad_critico = x;
			duracion = y;	
		}
		void Atacar(Persona *obj){
			if(duracion  > 0){	
				contador++;
				cout << "Te ataco con rayo!" << endl;
				int aux1 = duracion / 2;
				aux1 = aux1 - duracion;
				int dano = ataque + aux1;
				int randi = rand() % posibilidad_critico + 1;
				if(randi < posibilidad_critico){
					dano = dano + dano / 2;
				}
				obj->vida -= dano;
				int dano_bonus = (dano / 4) * (duracion * 2);
				if(obj->efecto == "electrizado"){
					obj->vida -= dano_bonus;
				}
				obj->SerAtacado();
				cout << endl;
				cout << "Daño aplicado en ataque: " << dano << endl;
				if(obj->efecto == "electrizado"){
					cout << "Daño bonus aplicado por electrificación: " << dano_bonus << endl;;
				}
				else{
					cout << "Enemigo electrificado!" << endl;
					obj->efecto = "electrizado";
				}
				cout << "Duración restante de varita: " << duracion << endl;
				duracion--;
			}
			else{
				cout << "Varita rota, no se puede ocupar :c" << endl;
			}
				


		}
};

int main(){
	srand(time(0));	
	/*
	 * El polimorfismo es una de las cosas más importantes de la herencia.
	 * 
	 * La palbra polimorfismo nace de 'poli' que significa más de una o muchas y 'morfo o morfismo en este caso' que significa forma o formas (que tiene más de una forma).
	 * 
	 * Por lo tanto la gracia del polimorfismo es hacer que funciones heredadas puedan funcionar distinto en cada clase hijas
	 *
	 * En el ejemplo de hoy creare la clase padre varita mágica. Esta clase tendrá el método atacar y tres atributos importantes: ataque, posibilidad_critico y duración. Ademas este programa
	 * tendrá la clase persona, a la cual atacaremos con las varitas.
	 *
	 * Crearemos tres clases hijas de la clase padre y estas serán varita de hielo, varita de fuego y varita normal.
	 */	

	Persona P035(300);
	Varita_Rayo varita_de_rayo(7, 4, 7);
	Varita palo;
	Varita_Fuego varita_de_fuego(8, 3, 6);
	cout << "Bienvenido a la herramienta de practica de varitas mágicas. El juego termina cuando mates a tu oponente" << endl; 
	int opcion;
	while(1){
		cout << "Menu de opciones: " << endl;
		cout << "  Apreta 1 para atacar con tu palo." << endl;
		cout << "  Apreta 2 para atacar con tu varita de fuego." << endl;
		cout << "  Apreta 3 para atacar con tu varita de rayo." << endl;
		cout << "  : ";
		cin >> opcion;
		switch(opcion){
		
			case 1:
				palo.Atacar(&P035);
				cout << endl;
				break;
			case 2:
				varita_de_fuego.Atacar(&P035);
				cout << endl;
				break;
			case 3:
				varita_de_rayo.Atacar(&P035);
				cout << endl;
				break;
			default:
				cout << "Opción inválida!" << endl;
				cout << endl;
				break;
		}
		if(P035.Estado_de_Vida() == false){
		
				break;
		}
	}
	return 0;
}
