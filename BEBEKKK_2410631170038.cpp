#include <iostream>

using namespace std;
int main() {

    int TotalBebek = 20, TotalTeman = 13, BebekperTeman, SisaBebek;

    cout<<">>>MENGHITUNG BERAPA EKOR BEBEK YANG DIBERIKAN TEMAN PAK TATANG, DAN SISA BEBEKNYA.<<<"<<endl<<endl;

    // Menghitung jumlah bebek yang diterima per teman (takut bingung saya kang makanya saya kasih penjelasan hehe)
    BebekperTeman = TotalBebek / TotalTeman;
    // Menghitung sisa bebek (takut bingung saya kang makanya saya kasih penjelasan hehe)
    SisaBebek = TotalBebek % TotalTeman;

    cout<<"Setiap teman akan menerima " << BebekperTeman << " ekor bebek. "<<endl;
    cout<<"Jumlah bebek yang tersisa adalah " << SisaBebek << " ekor."<<endl<<endl;
    cout<<"Jadi, teman Pak Tatang masing masing menerima 1 ekor bebek, dan bebek yang tersisa berjumlah 7 ekor."<<endl<<endl<<endl;
    cout<<"Terima Kasihhh.... :>"<<endl;

    return 0;
}
