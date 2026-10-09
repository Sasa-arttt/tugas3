#include <iostream>
#include "pelajaran.h"

using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran P;

    P.namapel = namapel;
    P.kodepel = kodepel;

    return P;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namapel << endl;
    cout << "kode pelajaran : " << pel.kodepel << endl;
}