#include <iostream>
#include <iostream>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n"<<endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}

	int jumlah(int a, int b) {
		return a + b;
	}
};

class pengarang : public orang {
public:
	string penerbit;

	pengarang(string pNama, string pSekolah) :
		orang(pNama)
		penerbit(pPenerbit) {
		cout << "pengarang dihapus\n" << endl;
	}
	~pengarang() {
		cout << "pengarang dihapus\n" << endl;
	}
	string perkenalan() {
		return "Halo, nama saya " + nama + " dari penerbit " + "\n\n";
	}
};

int main() {
	pengarang("joko", "GAME PRESS"");
		cout << pengarang.perkenalan();
	cout << "Hasil = " << orang::jumlah(10, 90) << endl;

	return 0;

}