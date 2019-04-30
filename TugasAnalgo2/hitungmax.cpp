/* Nama 	: Muhammad Fahmi Alwan
   NPM 		: 140810170052
   Kelas 	: B
   Judul 	: Nilai Max
*/
#include <iostream>

using namespace std;

main(){
    int angka[5] = {6,2,3,4,5};
    int max = angka[0];
    int i=1;

    while(i<5){ 
        if (angka[i] > max){
            max = angka[i];
        }
        i++;
    }

    cout << "max = " << max;
}
