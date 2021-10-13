#include <iostream>

using namespace std;

class Vehicle {
  public:
    int kecepatan;
    
    Vehicle(int kecepatan) {
      this->kecepatan = kecepatan;
    }
    
    void jalankan() {
      cout << "kendaraan berjalan...";
    }
    
    void stop() {
      cout << "kendaraan berhenti...";
    }
};

class Truck : public Vehicle {
  public:
    int kapasitas;
    char* warna;
    
    Truck(int kecepatan, int kapasitas, char* warna) : Vehicle(kecepatan) {
      this->kapasitas = kapasitas;
      this->warna = warna;
    }
    
    void masukkanMuatan() {
      cout << "memasukkan muatan...";
    }
};

class Car : public Vehicle {
  public:
    int warna;
    char* jenis;
    
    Car(char* jenis, int warna, int kecepatan) : Vehicle(kecepatan) {
      this->jenis = jenis;
      this->warna = warna;
    }
    
    void nyalakanLampu() {
      cout << "menyalakan lampu...";
    }
};
