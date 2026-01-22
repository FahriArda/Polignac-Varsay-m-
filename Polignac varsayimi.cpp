#include <iostream>

using namespace std;

// Bir sayinin asal olup olmadigini kontrol eden fonksiyon (Dizi kullanmaz)
bool asalMi(int sayi) {
    if (sayi < 2) return false;
    for (int i = 2; i * i <= sayi; i++) {
        if (sayi % i == 0) return false;
    }
    return true;
}

int main() {
    int limit;
    cout << "Hangi sayiya kadar kontrol edilsin?: ";
    cin >> limit;

    // k değerlerini manuel olarak kontrol ediyoruz (Dizi yerine tek tek)
    int k_listesi[] = { 2, 4, 6, 8 };
    // Not: Buradaki k_listesi sadece basit bir döngü için, 
    // isterseniz bunu da silip her k için koda manuel bloklar ekleyebiliriz.

    cout << "\n--- Polignac Ciftleri Sayimi (Dizi Kullanilmadan) ---\n";

    for (int i = 0; i < 4; i++) {
        int k = k_listesi[i];
        int sayac = 0;

        cout << "\nk = " << k << " icin hesaplaniyor..." << endl;

        for (int p = 2; p <= limit; p++) {
            // p asal mi ve p+k asal mi kontrol et
            if (asalMi(p) && asalMi(p + k)) {
                sayac++;
                // Sadece ilk birkac tanesini ekrana yazdir
                if (sayac <= 3) {
                    cout << "  Bulunan: (" << p << ", " << p + k << ")" << endl;
                }
            }
        }
        cout << "Toplam " << k << "-farkli asal cifti: " << sayac << endl;
        cout << "-------------------------------------------" << endl;
    }

    return 0;
}