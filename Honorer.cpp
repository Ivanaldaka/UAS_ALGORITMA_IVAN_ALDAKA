#include <iostream>
#include <string>
#include <limits>
using namespace std;

// [cite: 35] Struct data & [cite: 36] Class Hitung
struct Pegawai { string n; int j, h=25000, l, t; };
class Calc { public: void f(Pegawai *p) { 
    p->l = (p->j > 8) ? (p->j - 8) * 1500 : 0; // [cite: 22, 23]
    p->t = p->h + p->l; } 
};

int main() {
    cout << "NAMA: IVAN ALDAKA\nNIM: 251011701269\n";
    int p, n = 0; Pegawai *d = nullptr; Calc c;

    // [cite: 38, 45, 47] Menu Utama
    while (true) {
        cout << "\n1.Input 2.Tabel 3.Exit: "; 
        if (!(cin >> p)) { cin.clear(); cin.ignore(100, '\n'); continue; }
        if (p == 3) break;

        if (p == 1) {
            cout << "Jumlah Pegawai: "; cin >> n;
            d = new Pegawai[n]; //  Pointer Dinamis
            for (int i=0; i<n; i++) { // [cite: 44, 46] Loop
                cout << "Nama & Jam: "; cin >> d[i].n >> d[i].j;
                c.f(&d[i]);
            }
        } else if (p == 2 && n > 0) {
            cout << "\nPT. MERIANG GEMBIRA [cite: 26]\nNama\tHonor\tJam\tLembur\tTotal\n";
            int tot = 0;
            for (int i=0; i<n; i++) {
                cout << d[i].n << "\t" << d[i].h << "\t" << d[i].j << "\t" << d[i].l << "\t" << d[i].t << endl;
                tot += d[i].t;
            }
            cout << "Total Honor: Rp " << tot << " [cite: 30]\n";
        }
    }
    return 0;
}