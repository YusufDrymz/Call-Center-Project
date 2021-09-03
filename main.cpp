#include <iostream>
#include "HepsiHarranda.hpp"
using namespace std;
int main() {
	HepsiHarranda hh;
	hh.temsilciEkle(Temsilci(1, "Ali"));
	hh.temsilciEkle(Temsilci(2, "Berkay"));
	hh.temsilciEkle(Temsilci(3, "Ceren"));
	hh.temsilciEkle(Temsilci(4, "Deniz"));
	hh.temsilciEkle(Temsilci(5, "Eray"));
	hh.musterileriDosyadanOku("musteriler.txt");
	hh.simulate();
	hh.gorusmeListele();
	cin.ignore();
	return 0;
}
