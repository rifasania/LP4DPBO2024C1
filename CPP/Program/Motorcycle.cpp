#pragma once
#include <iostream>
#include <string>
#include "Vehicle.cpp"

using namespace std;

class Motorcycle : public Vehicle{
    private:
        string jenisMotor;
        string kapasitasTangki;

    public:
        Motorcycle(){
        }

        Motorcycle(string platNomor, string merk, string tahunProduksi, string warna, string jenisMotor) : Vehicle(platNomor, merk, tahunProduksi, warna){
            this->jenisMotor = jenisMotor;
            kapasitasTangki = "";
        }

        Motorcycle(string platNomor, string merk, string tahunProduksi, string warna, string jenisMotor, string kapasitasTangki) : Vehicle(platNomor, merk, tahunProduksi, warna){
            this->jenisMotor = jenisMotor;
            this->kapasitasTangki = kapasitasTangki;
        }

        void setJenisMotor(string jenisMoto){
            this->jenisMotor = jenisMotor;
        }

        string getJenisMotor(){
            return jenisMotor;
        }

        void setKapasitasTangki(string kapasitasTangki){
            this->kapasitasTangki = kapasitasTangki;
        }

        string getKapasitasTangki(){
            return kapasitasTangki;
        }

        ~Motorcycle(){
        }
};