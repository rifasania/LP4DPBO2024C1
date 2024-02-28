# Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin...

class ParkingLot:
    __kapasitas = ""
    __jumlahKendaraan = ""

    def __init__(self):
        self.__kapasitas = ""
        self.__jumlahKendaraan = ""

    def __init__(self, kapasitas = "", jumlahKendaraan = ""):
        self.__kapasitas = kapasitas
        self.__jumlahKendaraan = jumlahKendaraan

    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def getKapasitas(self):
        return self.__kapasitas

    def setJumlahKendaraan(self, jumlahKendaraan):
        self.__jumlahKendaraan = jumlahKendaraan

    def getJumlahKendaraan(self):
        return self.__jumlahKendaraan