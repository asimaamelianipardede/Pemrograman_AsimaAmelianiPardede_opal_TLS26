#include <bits/stdc++.h>
using namespace std;

int main() {
    string pesan;
    cin >> pesan;

    string hasil = "";
    int posisiSebelumnya = 0;

    for (int i = 0; i < pesan.size(); i++) {
        int posisiHuruf = pesan[i] - 'A' + 1;
        int posisiBaru = posisiHuruf + posisiSebelumnya;

        if (posisiBaru > 26) {
            posisiBaru -= 26;
        }

        char hurufBaru = 'A' + (posisiBaru - 1);
        hasil += hurufBaru;

        posisiSebelumnya = posisiHuruf;
    }

    cout << "Pesan asli   : " << pesan << endl;
    cout << "Pesan sandi  : " << hasil << endl;

    return 0;
}
