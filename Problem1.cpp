#include <bits/stdc++.h>
using namespace std;

int main() {
    int jumlahAstronot, nilaiK;
    cin >> jumlahAstronot >> nilaiK;

    vector<int> lingkaranAstronot;
    for (int i = 1; i <= jumlahAstronot; i++) {
        lingkaranAstronot.push_back(i);
    }

    vector<int> urutanGugur;
    int posisiSekarang = 0;

    while (lingkaranAstronot.size() > 1) {
        int jumlahTersisa = lingkaranAstronot.size();
        int posisiGugur = (posisiSekarang + nilaiK - 1) % jumlahTersisa;

        int astronotGugur = lingkaranAstronot[posisiGugur];
        urutanGugur.push_back(astronotGugur);

        lingkaranAstronot.erase(lingkaranAstronot.begin() + posisiGugur);

        if (astronotGugur % 2 == 0) {
            nilaiK += 2;
        } else {
            nilaiK -= 1;
        }

        if (nilaiK < 2) {
            nilaiK = 2;
        }

        if (!lingkaranAstronot.empty()) {
            posisiSekarang = posisiGugur % lingkaranAstronot.size();
        }
    }

    int astronotBertahan = lingkaranAstronot[0];

    cout << "Urutan astronot yang gugur: ";
    for (int i = 0; i < urutanGugur.size(); i++) {
        cout << urutanGugur[i];
        if (i != urutanGugur.size() - 1) cout << ", ";
    }
    cout << endl;

    cout << "Astronot yang bertahan: " << astronotBertahan << endl;

    return 0;
}
