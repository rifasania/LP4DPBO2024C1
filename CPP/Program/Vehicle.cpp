#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle{
    private:
        string platNomor;
        string merk;
        string tahunProduksi;
        string warna;

    public:
        Vehicle(){
        }

        Vehicle(string platNomor){
            this->platNomor = platNomor;
            merk = "";
            tahunProduksi = "";
            warna = "";
        }

        Vehicle(string plaNomor, string merk){
            this->platNomor = plaNomor;
            this->merk = merk;
            tahunProduksi = "";
            warna = "";
        }

        Vehicle(string platNomor, string merk, string tahunProduksi){
            this->platNomor = platNomor;
            this->merk = merk;
            this->tahunProduksi = tahunProduksi;
            warna = "";
        }
        
        Vehicle(string platNomor, string merk, string tahunProduksi, string warna){
            this->platNomor = platNomor;
            this->merk = merk;
            this->tahunProduksi = tahunProduksi;
            this->warna = warna;
        }

        void setPlatNomor(string platNomor){
            this->platNomor = platNomor;
        }

        string getPlatNomor(){
            return platNomor;
        }

        void setMerk(string merk){
            this->merk = merk;
        }

        string getMerk(){
            return merk;
        }
        
        void setTahunProduksi(string tahunProduksi){
            this->tahunProduksi = tahunProduksi;
        }

        string getTahunProduksi(){
            return tahunProduksi;
        }

        void setWarna(string warna){
            this->warna = warna;
        }

        string getWarna(){
            return warna;
        }

        ~Vehicle(){
        }
};