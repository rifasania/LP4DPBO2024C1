#pragma once
#include <iostream>
#include <string>

using namespace std;

class ParkingLot {
    private:
        string kapasitas;
        string jumlahKendaraan;

    public:
        ParkingLot(){
        }

        ParkingLot(string kapasitas, string jumlahKendaraan) {
            this->kapasitas = kapasitas;
            this->jumlahKendaraan = jumlahKendaraan;
        }

        void setKapasitas(string kapasitas) {
            this->kapasitas = kapasitas;
        }

        string getKapasitas() {
            return kapasitas;
        }

        void setJumlahKendaraan(string jumlahKendaraan) {
            this->jumlahKendaraan = jumlahKendaraan;
        }

        string getJumlahKendaraan() {
            return jumlahKendaraan;
        }

        ~ParkingLot(){
        }
};
