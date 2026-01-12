#ifndef QUANLYFILE_H
#define QUANLYFILE_H

#include <string>
using namespace std;

class QuanLyFile {
private:
    string tenFile;

public:
    QuanLyFile(string tenFile);
    void ghiFileText(string noiDung);
};

#endif
