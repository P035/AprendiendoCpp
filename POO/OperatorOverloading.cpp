#include <iostream>
using namespace std;

class Concatenador{

	private:
		string str;
	public:
		Concatenador(){}
		Concatenador(string str):
		str(str){}
		Concatenador operator+(Concatenador &objeto){
			Concatenador stri;
			stri.str = this->str + objeto.str;
			return stri;
		}
		void GetStr(){
			cout << str << endl;
		}
};

int main(){
	Concatenador objeto1("caca "), objeto2("peo");
	Concatenador concatenado = objeto1 + objeto2;
	concatenado.GetStr();
	return 0;

}
