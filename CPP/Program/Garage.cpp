#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.cpp"
#include "ParkingLot.cpp"

using namespace std;

class Garage{
    private:
        string namaGarasi;
        string luasGarasi;
        vector<Vehicle*> daftarKendaraan;
        ParkingLot parkingLot;

    public:
        Garage(){
        }

        Garage(string namaGarasi){
            this->namaGarasi = namaGarasi;
            luasGarasi = "";
        }

        Garage(string plaNomor, string luasGarasi){
            this->namaGarasi = plaNomor;
            this->luasGarasi = luasGarasi;
        }

        Garage(string namaGarasi, string luasGarasi, vector<Vehicle*> daftarKendaraan){
            this->namaGarasi = namaGarasi;
            this->luasGarasi = luasGarasi;
            this->daftarKendaraan = daftarKendaraan;
        }

        void setNamaGarasi(string namaGarasi){
            this->namaGarasi = namaGarasi;
        }

        string getNamaGarasi(){
            return namaGarasi;
        }

        void setLuasGarasi(string luasGarasi){
            this->luasGarasi = luasGarasi;
        }

        string getLuasGarasi(){
            return luasGarasi;
        }
        
        void setDaftarKendaraan(vector<Vehicle*> daftarKendaraan){
            this->daftarKendaraan = daftarKendaraan;
        }

        vector<Vehicle*> getDaftarKendaraan(){
            return daftarKendaraan;
        }

        void setParkingLot(ParkingLot parkingLot) {
            this->parkingLot = parkingLot;
        }

        ParkingLot getParkingLot() {
            return parkingLot;
        }

        void tambahKendaraan(Vehicle* kendaraan) {
            daftarKendaraan.push_back(kendaraan);
        }

        ~Garage(){
        }
};