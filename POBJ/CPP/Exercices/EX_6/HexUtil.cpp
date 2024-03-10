#include "HexUtil.h"
#include <iostream>
#include <iomanip>

using namespace std;

int HexUtil::SaisirInt() {
    int x;
    cin >> x;
    return x;
}

short int HexUtil::SaisirShort() {
    short int x;
    cin >> x;
    return x;
}

float HexUtil::SaisirFloat() {
    float x;
    cin >> x;
    return x;
}

double HexUtil::SaisirDouble() {
    double x;
    cin >> x;
    return x;
}

void HexUtil::ShowHex(int x) {
    unsigned char* pData = reinterpret_cast<unsigned char*>(&x);
    for (int i = sizeof(int) - 1; i >= 0; --i) {
        cout << setfill('0') << setw(2) << hex << static_cast<int>(pData[i]) << " ";
    }
    cout << endl;
}

void HexUtil::ShowHex(short int x) {
    unsigned char* pData = reinterpret_cast<unsigned char*>(&x);
    for (int i = sizeof(short int) - 1; i >= 0; --i) {
        cout << setfill('0') << setw(2) << hex << static_cast<int>(pData[i]) << " ";
    }
    cout << endl;
}

void HexUtil::ShowHex(float x) {
    unsigned char* pData = reinterpret_cast<unsigned char*>(&x);
    for (int i = sizeof(float) - 1; i >= 0; --i) {
        cout << setfill('0') << setw(2) << hex << static_cast<int>(pData[i]) << " ";
    }
    cout << endl;
}

void HexUtil::ShowHex(double x) {
    unsigned char* pData = reinterpret_cast<unsigned char*>(&x);
    for (int i = sizeof(double) - 1; i >= 0; --i) {
        cout << setfill('0') << setw(2) << hex << static_cast<int>(pData[i]) << " ";
    }
    cout << endl;
}
