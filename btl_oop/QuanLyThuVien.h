#ifndef QUANLYTHUVIEN_H
#define QUANLYTHUVIEN_H

#include "Sach.h"
#include "SinhVien.h"
#include <vector>

// TÍNH ĐÓNG GÓI - Đóng gói logic nghiệp vụ
class QuanLyThuVien {
private:
    vector<Sach*> dsSach;
    vector<SinhVien*> dsSV;
    
    Sach* timSach(string ma);
    SinhVien* timSV(string ma);
    void luuDuLieu();
    void docDuLieu();

public:
    QuanLyThuVien();
    ~QuanLyThuVien();
    
    // 12 chức năng theo đề bài
    void themSach();               // 1
    void suaSach();                // 2
    void xoaSach();                // 3
    void themSV();                 // 4
    void suaSV();                  // 5
    void xoaSV();                  // 6
    void muonSach();               // 7
    void traSach();                // 8
    void lietKeToanBoSach();       // 9
    void lietKeSachCuaSV();        // 10
    void lietKeSachDangMuon();     // 11
};

#endif