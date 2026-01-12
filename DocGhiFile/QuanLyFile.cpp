#include "QuanLyFile.h"
#include <fstream>

QuanLyFile::QuanLyFile(string tenFile) {
    this->tenFile = tenFile;
}

void QuanLyFile::ghiFileText(string noiDung) {
    ofstream file(tenFile);   // mở file để ghi
    if (file.is_open()) {
        file << noiDung;
        file.close();
    }
}
