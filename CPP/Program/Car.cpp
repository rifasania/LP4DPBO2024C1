#pragma once
#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Car : public Vehicle{
    private:
        int jumlahKursi;
        int jumlahPintu;

    public:
        Car(){
        }

        Car(string platNomor, string merk, string tahunProduksi, string warna, int jumlahKursi) : Vehicle(platNomor, merk, tahunProduksi, warna){
            this->jumlahKursi = jumlahKursi;
            jumlahPintu = 0;
        }

        Car(string platNomor, string merk, string tahunProduksi, string warna, int jumlahKursi, int jumlahPintu) : Vehicle(platNomor, merk, tahunProduksi, warna){
            this->jumlahKursi = jumlahKursi;
            this->jumlahPintu = jumlahPintu;
        }

        void setJumlahKursi(int jumlahKursi){
            this->jumlahKursi = jumlahKursi;
        }

        int getJumlahKursi(){
            return jumlahKursi;
        }

        void setJumlahPintu(int jumlahPintu){
            this->jumlahPintu = jumlahPintu;
        }

        int getJumlahPintu(){
            return jumlahPintu;
        }

        ~Car(){
        }
};