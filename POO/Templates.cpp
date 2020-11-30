#include <iostream>
using namespace std;

template <class T>
class Dato{

	private:
		T dato;
	public:
		Dato(T dato):
		dato(dato){}

		void Tipo(){

			cout << "Indefinido" << endl;
		}
		
};

template <>
class Dato <char>{

	private:
		char dato;
	public:
		Dato(char dato):
		dato(dato){}

		void Tipo(){

			cout << "Es char!" << endl;
		}
};

template<>
class Dato <int>{

	private:
		int dato;
	public:
		Dato(int dato):
		dato(dato){}

		void Tipo(){

			cout << "Es int!" << endl;
		}
};

template<>
class Dato <string>{

	private:
		string dato;
	public:
		Dato(string dato):
		dato(dato){}

		void Tipo(){

			cout << "Es string!" << endl;
		}
};

template<>
class Dato <bool>{

	private:
		bool dato;
	public:
		Dato(bool dato):
		dato(dato){}

		void Tipo(){

			cout << "Es bool!" << endl;
		}
};

int main(){

	Dato<int> obj1(12);
	Dato<char> obj2('a');
	Dato<string> obj3("hola");

	obj1.Tipo();
	obj2.Tipo();
	obj3.Tipo();

	return 0;
}
