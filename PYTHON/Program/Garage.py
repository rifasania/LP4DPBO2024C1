# Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin...

class Garage:
    __namaGarasi = ""
    __luasGarasi = ""
    __daftarKendaraan = []

    def __init__(self):
        self.__namaGarasi = ""
        self.__luasGarasi = ""
        self.__daftarKendaraan = []

    def __init__(self, namaGarasi = "", luasGarasi = "", daftarKendaraan = []):
        self.__namaGarasi = namaGarasi
        self.__luasGarasi = luasGarasi
        self.__daftarKendaraan = daftarKendaraan

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

    def tambahKendaraan(self, kendaraan):
        self.__daftarKendaraan.append(kendaraan)    