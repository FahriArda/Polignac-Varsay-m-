#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Hangi sayiya kadar kontrol edilsin? ";
    cin >> limit;

    for (int k = 2; k <= 8; k += 2) {
        int sayac = 0;
        cout << "\n--- k=" << k << " Icin Asal Ciftleri ---" << endl;

        for (int p = 2; p <= limit; p++) {
            // p asal mi?
            bool pAsal = true;
            for (int i = 2; i * i <= p; i++) {
                if (p % i == 0) pAsal = false;
            }

            // p + k asal mi?
            bool pkAsal = true;
            for (int i = 2; i * i <= (p + k); i++) {
                if ((p + k) % i == 0) pkAsal = false;
            }

            // Ikisi de asalsa ekrana yazdir ve sayacı artır
            if (pAsal && pkAsal) {
                cout << "(" << p << ", " << p + k << ") ";
                sayac++;
            }
        }
        cout << "\nToplam " << k << "-farkli cift sayisi: " << sayac << endl;
    }

    return 0;
}
