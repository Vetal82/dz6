// dz6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 
//urok 8 �������� �� ����. 10 - 11
//#include <iostream>
//#include <string>
//using namespace std;
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//int main()
//{
//	// ��������, ��� ��������
//	// return, ����� �������� � �����
//	int result = Max(10, 30);
//	cout << "Maximum is: " << result << endl;
//	// ��������, ��� ��������
//	// return, ����� ������ ������� �� �����
//	cout << "Maximum is: " << Max(42, 2);
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//int Min(int a, int b) {
//	return a < b ? a : b;
//}
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//int main()
//{
//	// ��������, ��� �������� return,
//	// ����� �������� � �����
//	int result = Max(10, 30);
//	cout << "Maximum is: " << result << endl;
//	// ��������, ��� �������� return,
//	// ����� ������ ������� �� �����
//	cout << "Minimum is: " << Min(10, 30);
//	return 0;
//}

//urok8 ���������� �������� ����.  27 - 28
// 
//#include <iostream>
//using namespace std;
//void SomeFunc() {
//	/*
//����� ����������� ��� ������� ������� �������
//ϳ��� ������ � ������� ���� �� ���������
//� ������ ��� ��������
//*/
//	static int a = 0;
//	a++;
//	cout << a << endl;
//}
//int main()
//{
//	// 1
//	SomeFunc();
//	// 2
//	SomeFunc();
//	// 3
//	SomeFunc();
//	return 0;
//}


//urok 11 ���������� ������� �� ����. 9 - 11

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//template <class T>
//void quickSortR(T a[], long N) {
//	// �� ���� � ����� a[],
//// a[N] � ���� ������� �������.
//// ��������� ��������� �� ������ ����
//	long i = 0, j = N;
//	T temp, p;
//	p = a[N / 2]; // ����������� �������
//	// ��������� �����
//	do {
//		while (a[i] < p) i++;
//		while (a[j] > p) j--;
//		if (i <= j) {
//			temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//			i++;
//			j--;
//		}
//	} while (i <= j);
//	/* ��������� �������, ���� � �� ��������� */
//	if (j > 0) quickSortR(a, j);
//	if (N > i) quickSortR(a + i, N - i);
//}
//int main() {
//	srand(time(NULL));
//	const long SIZE = 10;
//	int ar[SIZE];
//	// �� ����������
//	for (int i = 0; i < SIZE; i++) {
//		ar[i] = rand() % 100;
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	quickSortR(ar, SIZE - 1);
//	// ���� ����������
//	for (int i = 0; i < SIZE; i++) {
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	return 0;
}

//2.	������� ������� Power2(A, N) ������� ����, �� ��������� �������� AN �� ������ ��������� :
//a.A0 = 1;
//b.AN = A - A - ... - A(N �����������), ���� N > 0;
//c.A - N = 1 / (A - A - ... - A) (| N | �����������), ���� N < 0.
//	double Power2(double A, int N = 2);
//�� ��������� ���� ������� ������ AK, AL, AM, ���� ���� ����� A, K, L, M.
//#include <iostream>
//using namespace std;
//
//double Power2(double A, int N = 2) {
//    if (N == 0) {
//        return 1.0; 
//    }
//    else if (N > 0) {
//        double result = 1.0;
//        for (int i = 0; i < N; ++i) {
//            result *= A;
//        }
//        return result;
//    }
//    else {
//        double result = 1.0;
//        for (int i = 0; i > N; --i) {
//            result /= A;
//        }
//        return result;
//    }
//}
//
//int main() {
//    double A = 2.0;
//    int K = 3, L = -2, M = 4;
//
//    double AK = Power2(A, K);
//    double AL = Power2(A, L);
//    double AM = Power2(A, M);
//
//    cout << "AK = " << AK << endl;
//    cout << "AL = " << AL << endl;
//    cout << "AM = " << AM << endl;
//
//    return 0;
//}


//3.	�������� ��������, � ��� ���������� ���� ������� ������.�� �������� ���������� � ���������, ��� ���������� ������� � �������� ������� �����, ������, ������ � �������� ������� �������� �� �����.���������, 7515 ������ - �� 2 ������ 5 ������ 15 ������.
//void calcSecondsToHMS(int seconds);

//#include <iostream>
//    using namespace std;
//
//    void calcSecondsToHMS(int seconds) {
//        setlocale(LC_ALL, "");
//        int hours, minutes, remainingSeconds;
//
//        hours = seconds / 3600;
//        remainingSeconds = seconds % 3600;
//        minutes = remainingSeconds / 60;
//        remainingSeconds %= 60;
//
//        cout << "Hour: " << hours << ", Minut: " << minutes << ", Second: " << remainingSeconds << endl;
//    }
//
//    int main() {
//        int inputSeconds;
//
//        cout << "Enter second ";
//        cin >> inputSeconds;
//
//        calcSecondsToHMS(inputSeconds);
//
//        return 0;
//    }

//4.	���������� ������� ����� � ��������� ������ ��������.��������� ���� � ������� �� ��������������(�� �������� ��������� ����� �� A(10) B(11) C(12) D(13) E(14) F(15) � 16 - ����� ������) �������.
//void decToOCT(int n);
//void decToHEX(int n);
//��������	���������
//179	�CT - 263
//HEX - B3

//#include <iostream>
//#include <string>
//#include <sstream>
//
//using namespace std;
//
//void decToOCT(int n) {
//    string octal;
//    while (n > 0) {
//        int rem = n % 8;
//        char digit = rem + '0';
//        octal = digit + octal;
//        n /= 8;
//    }
//    cout << "OCT - " << octal << endl;
//}
//
//void decToHEX(int n) {
//    string hex;
//    while (n > 0) {
//        int rem = n % 16;
//        char digit;
//        if (rem < 10) {
//            digit = rem + '0';
//        }
//        else {
//            digit = rem - 10 + 'A';
//        }
//        hex = digit + hex;
//        n /= 16;
//    }
//    cout << "HEX - " << hex << endl;
//}
//
//int main() {
//    int num;
//    cout << "������ ����� � ��������� ������ ��������: ";
//    cin >> num;
//
//    decToOCT(num);
//    decToHEX(num);
//
//    return 0;
//}*/

//5.	�������� ���������� �������(����������), ��� �� �������� A � B �������� ������� �� �������������� ������ A% B.
//int modAB(int a, int b);


//#include <iostream>
//using namespace std;
//
//int modAB(int a, int b) {
//    if (a < b) {
//        return a; // ������� ������� A, ���� A < B
//    }
//    else {
//        return modAB(a - b, b); // ���������� ��������� ������� � ����� ��������� A
//    }
//}
//
//int main() {
//    int A = 17;
//    int B = 5;
//
//    int result = modAB(A, B);
//    cout << "������� �� �������������� ������ " << A << " % " << B << " = " << result << endl;
//
//    return 0;
//}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
