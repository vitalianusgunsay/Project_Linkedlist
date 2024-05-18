#include<iostream>
#include<stdlib.h>
#include<string>
#define MAX 14

using namespace std;

typedef struct node *simpul;

struct node {
    string nama;
    int kehadiran[MAX];
    simpul next;
};

void Mahasiswa(simpul &L, string nama);
void Kehadiran(simpul &L, string nama);
void Cetak(simpul L);
