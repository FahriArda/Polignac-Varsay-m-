#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Kaca kadar olan asallar kontrol edilsin? ";
    cin >> limit; // Kullanıcıdan sınırı alır

    for (int k = 2; k <= 8; k += 2) {
        int sayac = 0;

        for (int p = 2; p <= limit; p++) {
            // p asal mı kontrolü
            bool pAsal = true;
            for (int i = 2; i * i <= p; i++) {
                if (p % i == 0) pAsal = false;
            }

            // p + k asal mı kontrolü
            bool pkAsal = true;
            for (int i = 2; i * i <= (p + k); i++) {
                if ((p + k) % i == 0) pkAsal = false;
            }

            // Her ikisi de asalsa sayacı bir artır
            if (pAsal && pkAsal) {
                sayac++;
            }
        }
        cout << "k=" << k << " farkli asal cifti sayisi: " << sayac << endl;
    }

    return 0;
}
