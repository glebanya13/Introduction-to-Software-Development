#include <iostream>
// ShershniovGleb2006
// 53 68 65 72 73 68 6E 69 6F 76 47 6C 65 62 32 30 30 36 // utf-8
// 53 68 65 72 73 68 6E 69 6F 76 47 6C 65 62 32 30 30 36 // windows 1251
// 0053 0068 0065 0072 0073 0068 006E 0069 006F 0076 0047 006C 0065 0062 0032 0030 0030 0036 //utf-16

// ШершнёвГлеб2006
// D0A8 D0B5 D180 D188 D0BD D18E D0B2 D093 D0BB D0B5 D0B1 32 30 30 36 // utf-8
// C8 E5 F0 F8 ED EB E2 C3 BB E5 E1 32 30 30 36 // windows 1251
// 0428 0435 0440 0448 043D 0451 0432 0413 043B 0435 0431 0032 0030 0030 0036 // utf-16

// Шершнёв2006Gleb
// D0A8 D0B5 D180 D188 D0BD D18E 32 30 30 36 47 6C 65 62 // utf-8
// D8 E5 F0 F8 ED E1 32 30 30 36 47 6C 65 62 // windows 1251
// 0428 0435 0440 0448 043D 0451 0032 0030 0030 0036 0047 006C 0065 0062 // utf-16

int main()
{
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "ShershniovGleb2006";
    char rfie[] = "ШершнёвГлеб2006";
    char lf[] = "Шершнёв2006Gleb";

    wchar_t Lfie[] = L"ShershniovGleb2006";
    wchar_t Rfie[] = L"ШершнёвГлеб2006";
    wchar_t LR[] = L"Шершнёв2006Gleb";

    std::cout << hello << lfie << std::endl;
    return 0;
}