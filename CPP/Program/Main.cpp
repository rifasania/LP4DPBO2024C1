#include <iostream>
#include <vector>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    Car mobil1("B1234CD", "Honda", "2021", "Putih", 6, 4);
    Car mobil2("B5678EF", "Toyota", "2020", "Hitam", 4, 4);
    Motorcycle motor1("B1234GH", "Honda", "2022", "Hitam", "Matic", "10 liter");
    Motorcycle motor2("B5435IJ", "Yamaha", "2020", "Merah", "Matic", "5 liter");
    Motorcycle motor3("B9876KL", "Kawasaki", "2021", "Hitam", "Sport", "20 liter");

    ParkingLot parkir("10", "5");
    Garage garasi("Garasi Utama", "100 m2");

    garasi.tambahKendaraan(&mobil1);
    garasi.tambahKendaraan(&mobil2);
    garasi.tambahKendaraan(&motor1);
    garasi.tambahKendaraan(&motor2);
    garasi.tambahKendaraan(&motor3);
    garasi.setParkingLot(parkir);

    cout << "---INFORMASI GARASI---" << endl;
    cout << "Nama Garasi        : " << garasi.getNamaGarasi() << endl;
    cout << "Luas Garasi        : " << garasi.getLuasGarasi() << endl;
    cout << "Kapasitas          : " << garasi.getParkingLot().getKapasitas() << endl;
    cout << "Jumlah Kendaraan   : " << garasi.getParkingLot().getJumlahKendaraan() << endl;
    cout << endl;
    cout << "Daftar Kendaraan   :" << endl;
    for (Vehicle* i : garasi.getDaftarKendaraan()) {
        if (typeid(*i) == typeid(Car)) {
            cout << "->  Jenis Kendaraan : Mobil" << endl;
        } else if (typeid(*i) == typeid(Motorcycle)) {
            cout << "->  Jenis Kendaraan : Motor" << endl;
        }
        cout << "->  Plat Nomor     : " << i->getPlatNomor() << endl;
        cout << "->  Merk           : " << i->getMerk() << endl;
        cout << "->  Tahun Produksi : " << i->getTahunProduksi() << endl;
        cout << "->  Warna          : " << i->getWarna() << endl;
        // if (typeid(*i) == typeid(Car)) {
        //     cout << "->  Jumlah Kursi : " << i->getJumlahKursi() << endl;
        //     cout << "->  Jumlah Pintu : " << i->getJumlahPintu() << endl;
        // } else if (typeid(*i) == typeid(Motorcycle)) {
        //     cout << "->  Jenis Motor : " << i->getJenisMotor() << endl;
        //     cout << "->  Kapasitas Tangki : " << i->getKapasitasTangki() << endl;
        // }
        cout << endl;
    }

    return 0;
}
