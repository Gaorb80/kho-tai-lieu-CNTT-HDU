#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, pheptoan;
	cout << "Chuong trinh tinh a ... b";
	cout << "\n... la cac phep toan: +, -, *, /";
	cout << "\nNhap 2 so nguyen: "; cin >> a >> b;
	do
	{
		cout << "Bang phep toan: \n";
		cout << "1. Cong\n";
		cout << "2. Tru\n";
		cout << "3. Nhan\n";
		cout << "4. Chia\n";
		cout << "Phep toan ban chon la: ";
		cin >> pheptoan;
	} while (pheptoan < 1 || pheptoan > 4);
	cout << "Ket qua: a ... b = ";
	switch(pheptoan)
	{
	    case 1: cout << a + b; break;
	    case 2: cout << a - b; break;
	    case 3: cout << a * b; break;
	    case 4: cout << a / b; break;
	}
	return 0;
}
