#include <iostream>

using namespace std;
int main () {

    int FirstValue = 10, SecondValue = 8, ThirdValue = 2, temp;

    cout<<">>>MENUKAR VARIABEL MENGGUNAKAN VARIABEL TAMABAHAN<<<" <<endl<<endl;
    cout<<"Nilai Sebelum di Tukar:"<<endl;
    cout<<"FirstValue="<<FirstValue<<endl;
    cout<<"SecondValue="<<SecondValue<<endl;
    cout<<"ThirdValue="<<ThirdValue<<endl<<endl;

    temp=FirstValue;
    FirstValue = SecondValue;
    SecondValue = temp;

    temp=SecondValue;
    SecondValue = ThirdValue;
    ThirdValue = temp;

    cout<<"Nilai Setelah di Tukar:"<<endl;
    cout<<"FirstValue="<<FirstValue<<endl;
    cout<<"SecondValue="<<SecondValue<<endl;
    cout<<"thirdValue="<<ThirdValue<<endl<<endl<<endl;
    cout<<"Terima Kasihhhh... :>"<<endl;

    return 0;

}



