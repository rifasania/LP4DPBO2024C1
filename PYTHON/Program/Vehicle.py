# Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin...

class Vehicle:
    __platNomor = ""
    __merk = ""
    __tahunProduksi = ""
    __warna = ""

    def __init__(self):
        self.__platNomor = ""
        self.__merk = ""
        self.__tahunProduksi = ""
        self.__warna = ""

    def __init__(self, platNomor = "", merk = "", tahunProduksi = "", warna = ""):
        self.__platNomor = platNomor
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna    

    def setPlatNomor(self, platNomor):
        self.__platNomor = platNomor

    def getPlatNomor(self):
        return self.__platNomor

    def setMerk(self, merk):
        self.__merk = merk

    def getMerk(self):
        return self.__merk        

    def setTahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi

    def getTahunProduksi(self):
        return self.__tahunProduksi

    def setWarna(self, warna):
        self.__warna = warna

    def getWarna(self):
        return self.__warna                 