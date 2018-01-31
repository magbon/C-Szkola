#include <iostream>
using namespace std;

void first_sentence() {
	cout << "I'm fresh to death\n";
}
void second_sentence() {
	cout << "I'm in the zone\n";
}

double celcius_to_f(int celcius) {
	double f = 1.8 * celcius + 32;
	return f;
}

int main() {
	// your code goes here
	int age, celcius, i, mile;
	cout << "Magdalena B\n" ;
	
	cout << "Podaj odległość w milach morskich:\n";
	cin >> mile;
	mile = mile * 1852;
	cout << "To " << mile << " km\n";
	
	for (i = 0; i < 2; i++){
		first_sentence();
		second_sentence();
	}
	
	cout << "Podaj swój wiek:\n";
	cin >> age;
	age = age * 12;
	cout << "Twój wiek w miesiącach to " << age << "\n";
	
	cout << "Podaj temeraturę w stopniach celcjusza:\n";
	cin >> celcius;
	cout << celcius << " w stopniach Fahreneita to " <<  celcius_to_f(celcius);
	
	return 0;
}