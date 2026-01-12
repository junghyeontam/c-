#ifndef DOITUONG_H
#define DOITUONG_H

#include <string>
using namespace std;

// TÍNH TRỪU TƯỢNG - Lớp cơ sở
class DoiTuong {
protected:
    string ma;
    string ten;

public:
    DoiTuong();
    DoiTuong(string ma, string ten);
    virtual ~DoiTuong();
    
    // Phương thức thuần ảo
    virtual void nhap() = 0;
    virtual void xuat() = 0;
    
    // Getter/Setter - TÍNH ĐÓNG GÓI
    string getMa();
    string getTen();
    void setMa(string m);
    void setTen(string t);
};

#endif