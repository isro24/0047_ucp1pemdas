/*
    IsroUsman_20220140047
    
1.  (variabel beserta tipe data)
    string nama;
    int nim;
    float nilai;

2.  (Prosedur dan fungsi)
    a. prosedural
        float nilai1, nilai2;
        void input (){
            cout << "Masukkan Nilai Pertama :";
            cin >> nilai1;
            cout << "Masukkan Nilai Kedua :";
            cin >> nilai2;
        }
    b. fungsi
        float Pernjumlahan (float a, float b){
            return a * b;
        }

3.  (While Looping)
    char pilih;
    do
    {
        cout << "Udah makan" << endl;
        cout << "Mau nambah tapi masih kenyang" << endl;
        cout << "Nambah gak ya" << endl;
        cin >> pilih;
    } while (pilih == 'y');

4.  (IfElse)
    float nilPemro, nilAlgo, rerata;
    string status;

    cout << "Masukkan Nilai Pemro :";
    cin >> nilPemro;
    cout << "Masukkan Nilaii Algo :";
    cin >> nilAlgo;

    rerata = (nilPemro * nilAlgo) /2.0;

    if (rerata >= 80 || nilPemro >80){
        status = "Nilai Bagus";
    }
    else{
        status = "Nilai Brutal";
    }

    cout << "Statusmu adalah " << status << endl;1
}

5.  (Struct)
    struct Saya {
        string nama;
        int umur;
        char kelas;
    };

int main(){
    Saya saya;

    cout <<"Masukkan Nama Saya : " ;
    getline(cin, saya.nama);
    cout <<"Masukkan Umur Saya : " ;
    cin >> saya.umur;
    cout <<"Masukkan Kelas Saya : " ;
    cin >> saya.kelas; 

    cout << endl;
    cout << "Nama :" << saya.nama << endl;
    cout << "NIM :" << saya.umur << endl;
    cout << "Kelas :" << saya.kelas << endl;
}
    */

//6.
#include <iostream>
using namespace std;

string Status(int sensor1, int sensor2) {
    string status;
    float sensorindex = (sensor1 + sensor2) / 2;

    if (sensorindex >= 75 || sensor1 >= 45 || sensor2 >= 45) {
        status = "Sehat";
    }
    else {
        status = "Tidak Sehat";
    }
    return status;
}

void data(string kota[], int sensor1[], int sensor2[]){
    int sehat = 0;
    cout << "Nama Kota\tStatus" << endl;
    for (int i=0; i<2; i++){
        string status = Status(sensor1[i], sensor2[i]);
        cout << kota[i] << "\t" << status << endl;
        if (status == "Sehat") {
            sehat++;
        }
    }

    cout << "Total Kota yang Sehat: " << sehat << endl;
    cout << "Total Kota yang Tidak Sehat: " << 2 - sehat << endl;
}

int main(){
    string kota[] = {"Tanggerang", "Bekasi"};
    int sensor1[] = {80, 80};
    int sensor2[] = {0, 0};

    data(kota, sensor1, sensor2);

    return 0;
}

