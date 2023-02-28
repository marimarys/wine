#include <iostream>
using namespace std;

class Wine {
private:
	string name;
	string view;
	int quantity;
	double volume;
public:
	Wine() {
		name = "";
		view = "";
		quantity = 0;
		volume = 0.7;
	}
	Wine(string fname, string fview, int fquantity, double fvolume) {
		name = fname;
		view = fview;
		quantity = fquantity;
		volume = fvolume;

	}
	string getView() { return view; }
	void setView(string fview) { view = fview; }

	string getName() { return name; }
	void setName(string fname) { name = fname; }

	int getQuantity () { return quantity; }
	void setQuantity(double fquantity) { quantity = fquantity; }

	double getVolume() { return volume; }
	void setVolume(double fvolume) { volume = fvolume; }

	void print() {
		cout << name << " " << view << " " << "bottles:" << quantity << ", " << volume << "l" << endl;
	}

	};

	int main() {
		Wine w1;
		w1.setName("Martini,");
		w1.setView("red,");
		w1.setQuantity(10);
		w1.setVolume(7);
		Wine w2("J.P.Chenet,", "white,", 15, 10.5);
		w1.print();
		w2.print();
		
	}