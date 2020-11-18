#include <iostream>
using namespace std;

class Str{

	private:
		class output{
			private:
				string str;
			public:
				output(){}
				output(string str):
				str(str){}
				output operator<< (Str &objeto){
					cout << objeto.str << endl;
				}	
		};
		string str;
	public:
		Str(string str):
		str(str){}
		output out;

};

int main(){

	Str stri("hola");
	stri.out << stri;	

	return 0;
}
