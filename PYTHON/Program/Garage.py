# Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin...

class Garage:
    __namaGarasi = ""
    __luasGarasi = ""
    __daftarKendaraan = []
    __parkingLot = None

    def __init__(self):
        self.__namaGarasi = ""
        self.__luasGarasi = ""
        self.__daftarKendaraan = []

    def __init__(self, namaGarasi = "", luasGarasi = "", daftarKendaraan = [], parkingLot = None):
        self.__namaGarasi = namaGarasi
        self.__luasGarasi = luasGarasi
        self.__daftarKendaraan = daftarKendaraan
        self.__parkingLot = parkingLot

    def setNamaGarasi(self, namaGarasi):
        self.__namaGarasi = namaGarasi

    def getNamaGarasi(self):
        return self.__namaGarasi

    def setLuasGarasi(self, luasGarasi):
        self.__luasGarasi = luasGarasi

    def getLuasGarasi(self):
        return self.__luasGarasi

    def setDaftarKendaraan(self, daftarKendaraan):
        self.__daftarKendaraan = daftarKendaraan

    def getDaftarKendaraan(self):
        return self.__daftarKendaraan 

    def setParkingLot(self, parkingLot):
        self.__parkingLot = parkingLot

    def getParkingLot(self):
        return self.__parkingLot     

    def tambahKendaraan(self, kendaraan):
        self.__daftarKendaraan.append(kendaraan)    