#ifndef SACH_H
#define SACH_H

#include "TaiLieu.h"

// TÍNH KẾ THỪA đa cấp: DoiTuong -> TaiLieu -> Sach
class Sach : public TaiLieu {
private:
    string tacGia;
    string theLoai;

public:
    Sach();
    Sach(string ma, string ten, string tg, string nxb, int nam, string tl);
    
    // TÍNH ĐA HÌNH - Override
    void nhap();
    void xuat();
    
    void ghiFile(ofstream& f);
    void docFile(ifstream& f);
    
    string getTacGia();
    string getTheLoai();
    void setTacGia(string tg);
    void setTheLoai(string tl);
};

#endif