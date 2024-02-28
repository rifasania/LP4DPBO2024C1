# Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin...

from Vehicle import Vehicle

class Car(Vehicle):
    __jumlahKursi = ""
    __jumlahPintu = ""

    def __init__(self):
        self.__jumlahKursi = ""
        self.__jumlahPintu = ""

    def __init__(self, platNomor="", merk="", tahunProduksi="", warna="", jumlahKursi="", jumlahPintu=""):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu

    def setJumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi

    def getJumlahKursi(self):
        return self.__jumlahKursi    

    def setJumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu   

    def getJumlahPintu(self):
        return self.__jumlahPintu