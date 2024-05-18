#include "header.h"

int main() {
    simpul L = NULL;
    int pilih;
    string nama;

    do {
        cout << "------------------------------\n"
             << "    Menu Pilihan\n"
             << "------------------------------\n"
             << " [1] Tambah Mahasiswa\n"
             << " [2] Tambah Kehadiran Mahasiswa\n"
             << " [3] Cetak Seluruh Data\n"
             << " [0] Keluar\n\n"
             << "------------------------------\n"
             << "Masukkan Pilihan : ";
        cin >> pilih;
        cin.ignore();  //Mengabaikan spasi dibagian input atau cin

        switch (pilih) {
            case 1:
                cout << "Masukkan Nama Mahasiswa: ";
                getline(cin, nama); //Menggunakan getline agar bisa membaca nama yg lebih dari 1 kata
                Mahasiswa(L, nama);
                break;
            case 2:
                cout << "Masukkan Nama Mahasiswa: ";
                getline(cin, nama);
                Kehadiran(L, nama);
                break;
            case 3:
                Cetak(L);
                break;
            case 0:
                cout << "Keluar program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (pilih != 0);
    
    while (L != NULL) {
        simpul temp = L;
        L = L->next;
        delete temp; 
    }
    return 0;
}
