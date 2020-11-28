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
		int ataque, posibilidad_critico;
	
	public:
		int duracion;
		virtual void Atacar(Persona *obj) = 0;

};

class Varita_Fuego : public Varita{

	public:
		Varita_Fuego(int i, int x, int y){
			
			ataque = i;
			posibilidad_critico = x;
			duracion = y;
		}
		void Atacar(Persona *obj){
			if(duracion  >= 0){
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
			if(duracion  >= 0){	
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
	 * En este ejercicio copiare el código del ejercicio polimorfismo y aquí haré lo mismo, pero con
	 * funciones virtuales puras. Esto hará que uno no pueda usar la clase padre y que esta solo sirva como base
	 * para crear nuevas varitas.
	 * 
	 * Si uno trata de crear un objeto de una clase padre que tiene alguna función virtual pura esto
	 * dará un error.
         */	

	Persona P035(250);
	Varita_Rayo rayo(7, 4, 7);
	Varita *varita_de_rayo = &rayo;
	Varita_Fuego fuego(8, 3, 6);
	Varita *varita_de_fuego = &fuego;
	cout << "Bienvenido a la herramienta de practica de varitas mágicas. El juego termina cuando mates a tu oponente" << endl; 
	int opcion;
	while(1){
		cout << "Menu de opciones: " << endl;
		cout << "  Apreta 1 para atacar con tu varita de fuego." << endl;
		cout << "  Apreta 2 para atacar con tu varita de rayo." << endl;
		cout << "  : ";
		cin >> opcion;
		switch(opcion){
		
			case 1:
				varita_de_fuego->Atacar(&P035);
				cout << endl;
				break;
			case 2:
				varita_de_rayo->Atacar(&P035);
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
		else if(varita_de_rayo->duracion < 0 and varita_de_fuego->duracion < 0){
			cout << "Se han roto las dos varitas!" << endl << "PERDISTE" << endl;
			break;
		}
	}
	return 0;
}
