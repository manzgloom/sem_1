#include <iostream>

// ArtsiukhMiloslava2006
// Windows-1251: 41 72 74 73 69 75 6B 68 4D 69 6C 6F 73 6C 61 76 61 32 30 30 36
// в UTF-8: 41 72 74 73 69 75 6B 68 4D 69 6C 6F 73 6C 61 76 61 32 30 30 36
// в UTF-16: 0041 0072 0074 0073 0069 0075 006B 0068 004D 0069 006C 006F 0073 006C 0061 0076 0061 0032 0030 0030 0036

// јртюхћилославајндреевна2006
// Windows-1251: C0 F0 F2 FE F5 CC E8 EB EE F1 EB E0 E2 E0 C0 ED E4 F0 E5 E5 E2 ED E0 32 30 30 36
// в UTF-8: D090 D180 D182 D18E D185 D09C D0B8 D0BB D0BE D181 D0BB D0B0 D0B2 D0B0 D090 D0BD D0B4 D180 D0B5 D0B5	D0B2 D0BD D0B0 32 30 30 36
// в UTF-16: 0410 0440 0442 044E 0445 041C 0438 043B 043E 0441 043B 0430 0432 0430 0410 043D 0434 0440 0435 0435 0432 043D 0430	0032 0030 0030 0036


// јртюх2006Miloslava
// Windows-1251: C0 F0 F2 FE F5 32 30 30 36 4D 69 6C 6F 73 6C 61 76 61
// в UTF-8: D090 D180 D182 D18E D185 32 30 30 36 4D 69 6C 6F 73 6C 61 76 61
// в UTF-16: 0410 0440 0442 044E 0445 0032 0030 0030 0036 004D 0069 006C 006F 0073 006C 0061 0076 0061

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int number = 0 * 12345678;
	char hello[] = "Hello, ";
	char lfie[] = "ArtsiukhMiloslava2006";
	char rfie[] = "јртюхћилославајндреевна2006";
	char lr[] = "јртюх2006Miloslava";

	wchar_t Lfie[] = L"ArtsiukhMiloslava2006";
	wchar_t Rfie[] = L"јртюхћилославајндреевна2006";
	wchar_t LR[] = L"јртюх2006Miloslava";

	std::cout << hello << lfie << std::endl;
	return 0;
}