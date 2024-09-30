#include <iostream>
using namespace std;

int main() {
    while (true) {
        int SoTienGui, ThoiGianGui;

        std::cin >> SoTienGui >> ThoiGianGui;

        float LaiSuat = 0;

        if (SoTienGui < 10) LaiSuat = 3;
        else if (SoTienGui >= 10 && SoTienGui < 50) LaiSuat = 4;
        else if (SoTienGui >= 50 && SoTienGui < 100) LaiSuat = 5;
        else LaiSuat = 6;

        if (ThoiGianGui >= 6 && ThoiGianGui < 12) LaiSuat = LaiSuat + 0.5;
        else if (ThoiGianGui >= 12) LaiSuat += 1;

        int TienLai = SoTienGui * (LaiSuat / 100) * (ThoiGianGui / 12) * 1000000;

        std::cout << "Số tiền lãi là: " << TienLai << ' ' << "VND" << std::endl;
    }
    return 0;
}