#include <iostream>

using namespace std;
int main () {

    int FirstValue= 10, SecondValue= 8, temp;

    cout<<">>>MENUKAR VARIABEL<<<" <<endl<<endl;
    cout<<"Nilai Sebelum di Tukar:"<<endl;
    cout<<"FirstValue="<<FirstValue<<endl;
    cout<<"SecondValue="<<SecondValue<<endl<<endl;

    temp=FirstValue;
    FirstValue = SecondValue;
    SecondValue = temp;

    cout<<"Nilai Setelah di Tukar:"<<endl;
    cout<<"FirstValue="<<FirstValue<<endl;
    cout<<"SecondValue="<<SecondValue<<endl<<endl<<endl;
    cout<<"Terima Kasihhhh... :>"<<endl;

    return 0;

}
