#include <iostream>

using namespace std;

class Worker {
	public:
		string name;
		string surname;
		string nationality="Polska ";
		
//definicja metody showName		
	void showName(){
		cout << "Twoje imi�: " << name << endl;
	};	
	
	//definicja (prototyp) metody showSurname
	void showSurname();
	
	//definicja (prototyp) metody showAllData
	void showAllData();
};

//definicja metody showSurname
	void Worker::showSurname(){
		cout << "test metody showSurname";	
	};

//definicja metody showAllData
	void Worker::showAllData(){
	count << "Imie i nazwisko: " << name << " " << surname << "\nNarodowo��: " << nationality;
	};
		
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker pracownik;
	pracownik.name="Krystyna";
	cout << "Narodowo��: " << pracownik.nationality;	
	pracownik.nationality="USA ";
	cout << "Narodowo��: " << pracownik.nationality << endl;	
	pracownik.showName() ;
	pracownik.showSurname();
	cout << endl;
	pracownik.showAllData();
	return 0;
}
