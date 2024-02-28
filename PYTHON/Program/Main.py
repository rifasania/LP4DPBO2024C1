# Saya Rifa Sania NIM 2206697 mengerjakan Latihan Praktikum 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin...

from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

mobil1 = Car("B1234CD", "Honda", "2021", "Putih", 6, 4)
mobil2 = Car("B5678EF", "Toyota", "2020", "Hitam", 4, 4)
motor1 = Motorcycle("B1234GH", "Honda", "2022", "Hitam", "Matic", "10 liter")
motor2 = Motorcycle("B5435IJ", "Yamaha", "2020", "Merah", "Matic", "5 liter")
motor3  = Motorcycle("B9876KL", "Kawasaki", "2021", "Hitam", "Sport", "20 liter") 

# listKendaraan = []
# listKendaraan.append(mobil1)
# listKendaraan.append(mobil2)
# listKendaraan.append(motor1)
# listKendaraan.append(motor2)
# listKendaraan.append(motor3)

garasi = Garage("Garasi Utama", "100 m2")

garasi.tambahKendaraan(mobil1)
garasi.tambahKendaraan(mobil2)
garasi.tambahKendaraan(motor1)
garasi.tambahKendaraan(motor2)
garasi.tambahKendaraan(motor3)

print("Informasi Garasi")
# garasi.printKendaraan()
print("Nama Garasi : " + garasi.getNamaGarasi())
print("Luas Garasi : " + garasi.getLuasGarasi())
print("Daftar Kendaraan :")
print()
for i in garasi.getDaftarKendaraan():
    print("Plat Nomor : " + i.getPlatNomor())
    print("Merk : " + i.getMerk())
    print("Tahun Produksi : " + i.getTahunProduksi())
    print("Warna : " + i.getWarna())
    print()


    