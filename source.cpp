#include "header.h"

void Mahasiswa(simpul &L, string nama) {
    simpul baru = new node;
    if (baru == NULL) {
        cout << "Alokasi memori gagal" << endl;
        return;
    }

    baru->nama = nama;
    for (int i = 0; i < MAX; ++i) {
        baru->kehadiran[i] = 0;
    }

    baru->next = L;
    L = baru;

    cout << "Data mahasiswa berhasil dimasukkan." << endl;
}
void Kehadiran(simpul &L, string nama) {
    simpul bantu = L;
    int pertemuan;
    cout << "Masukkan Pertemuan (1-14): ";
    cin >> pertemuan;
    cin.ignore();  //Mengabaikan spasi dibagian input atau cin
    
    while (bantu != NULL) {
        if (bantu->nama == nama) {
            if (pertemuan >= 1 && pertemuan <= MAX) {
                if (bantu->kehadiran[pertemuan - 1] == 0) {
                    bantu->kehadiran[pertemuan - 1] = 1;
                    cout << "Data kehadiran mahasiswa berhasil dimasukkan." << endl;
                } else {
                    cout << "Kehadiran pada pertemuan tersebut sudah tercatat." << endl;
                }
            } else {
                cout << "Pertemuan tidak valid." << endl;
            }
            return;
        }
        bantu = bantu->next;
    }
    cout << "Mahasiswa tidak ditemukan." << endl;
}

void Cetak(simpul L) {
    if (L == NULL) {
        cout << "Tidak ada data mahasiswa." << endl;
        return;
    }

    simpul bantu = L;
    while (bantu != NULL) {
        cout << "Nama: " << bantu->nama << endl;
        cout << "Kehadiran: ";
        for (int i = 0; i < MAX; ++i) {
            cout << bantu->kehadiran[i] << " ";
        }
        cout << endl;
        bantu = bantu->next;
    }
}
