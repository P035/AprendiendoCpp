#include <iostream>
using namespace std;

class Personaje{
    public:
        string nombre;
        string roll;
        int mana = 100;
        int vida;
        int nivel;
        int poder;

        void Saludar(){
            cout << "Hola!" << endl;
        }
        void SaludarPersonalizado(string x){
            cout << "Hola " << x << "!" << endl;
        }
        void Presentarse(){
            cout << "Hola! Soy un " << this->roll << " y mi nombre es " << this->nombre << endl;
        }
        void Atacar(Personaje atacado){
            int gasto = this->poder - this->nivel; 
            if(gasto <= mana || atacado.RevisarSiMori()){
                if(this->nivel > 50){
                    this->nivel = 50;
                }
                int dano = this->poder / nivel * 2;
                atacado.vida = atacado.vida - dano;
                cout << "TE ATACO CON MI PODER DE " << dano << "!" << endl;
                if(atacado.RevisarSiMori())
                {
                    cout << "Mataste a tu oponente" << endl;
                    cout << atacado.vida << endl;
                    this->mana -= gasto;
                }
                else
                {
                    cout << "Tu oponente sigue con vida" << endl;
                    this->mana -= gasto;
                }
                cout << "Tu mana actual es de: " << this->mana << endl;
            }
            else
            {
                if(atacado.RevisarSiMori()){
                    cout << "No puedes atacar, porque tu enemigo esta muerto!" << endl;;
                }
                else{
                    cout << "No puedes atacar, porque no tienes mana" << endl;
                }
            }
        }
        void MenuDeOpciones(){
            if(RevisarSiMori()){
                cout << "Estas muerto, espera a que diosito te lleve a la ciudad de plata!" << endl << "FIN";
            }
            else{
                cout << "Puedes: " << endl << "1. Atacar a Juan" << endl << "2. Presentarte" << endl << "3. Saludar a alguien" << endl << "4. Saludar" << endl << "5. Salir del juego" << endl << endl;
            }
        }
            
    private:
        bool RevisarSiMori()
        {
            if(this->vida <= 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main(){

    Personaje Juan;
    Juan.nombre = "Juan";
    Juan.roll = "Veterinario de dragones y criaturas fantásticas";
    Juan.poder = 120;
    Juan.nivel = 50;
    Juan.vida = 3;

    Personaje Pinti;
    cout << "Hola! Bienvenido a pintiland en este lugar encontraras muchas cosas. Tales como magia, dragones y tu archienemigo llamado Juan" << endl;
    cout << "Cual es tu nombre? ";
    cin >> Pinti.nombre;
    cout << "Cual es tu trabajo? ";
    cin >> Pinti.roll;
    cout << "Tu vida es de " << Pinti.vida << ", tu poder inicial es de 40 y tu nivel es 20" << endl << endl;
    Pinti.poder = 40;
    Pinti.nivel = 20;

    while(true){
        cout << endl;
        cout << "Que quieres hacer ahora? " << endl;
        Pinti.MenuDeOpciones();
        int opcion;
        cin >> opcion;
        if(opcion == 1){
            cout << endl;
            Pinti.Atacar(Juan);
        }
        else if(opcion == 2){
            cout << endl;
            Pinti.Presentarse();
        }
        else if(opcion == 3){
            cout << endl;
            string saludado;
            cout << "Dime el nombre de la persona que quieres saludar? ";
            cin >> saludado;
            Pinti.SaludarPersonalizado(saludado);
        }
        else if(opcion == 4){
            cout << endl;
            Pinti.Saludar();
        }
        else if(opcion == 5){
            cout << "Bye!" << endl;
            break;
        }
        else
        {
            cout << "Opcion inexistente!" << endl;
        }
    }

    return 0;
}
