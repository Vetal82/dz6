// dz6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// 
//urok 8 приклади на стор. 10 - 11
//#include <iostream>
//#include <string>
//using namespace std;
//int Max(int a, int b) {
//	return a > b ? a : b;
//}
//int main()
//{
//	// Значення, яке повернув
//	// return, можна записати в змінну
//	int result = Max(10, 30);
//	cout << "Maximum is: " << result << endl;
//	// Значення, яке повернув
//	// return, можна відразу вивести на екран
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
//	// Значення, яке повернув return,
//	// можна записати в змінну
//	int result = Max(10, 30);
//	cout << "Maximum is: " << result << endl;
//	// Значення, яке повернув return,
//	// можна відразу вивести на екран
//	cout << "Minimum is: " << Min(10, 30);
//	return 0;
//}

//urok8 Опрацювати приклади стор.  27 - 28
// 
//#include <iostream>
//using namespace std;
//void SomeFunc() {
//	/*
//Змінна створюється при першому виклику функції
//Після виходу з функції вона не знищується
//і зберігає своє значення
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


//urok 11 Опрацювати приклад на стор. 9 - 11

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//template <class T>
//void quickSortR(T a[], long N) {
//	// На вході — масив a[],
//// a[N] — його останній елемент.
//// поставити покажчики на вихідні місця
//	long i = 0, j = N;
//	T temp, p;
//	p = a[N / 2]; // центральний елемент
//	// процедура поділу
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
//	/* рекурсивні виклики, якщо є що сортувати */
//	if (j > 0) quickSortR(a, j);
//	if (N > i) quickSortR(a + i, N - i);
//}
//int main() {
//	srand(time(NULL));
//	const long SIZE = 10;
//	int ar[SIZE];
//	// до сортування
//	for (int i = 0; i < SIZE; i++) {
//		ar[i] = rand() % 100;
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	quickSortR(ar, SIZE - 1);
//	// після сортування
//	for (int i = 0; i < SIZE; i++) {
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	return 0;
}

//2.	Описати функцію Power2(A, N) дійсного типу, що знаходить величину AN за такими формулами :
//a.A0 = 1;
//b.AN = A - A - ... - A(N співмножників), якщо N > 0;
//c.A - N = 1 / (A - A - ... - A) (| N | співмножників), якщо N < 0.
//	double Power2(double A, int N = 2);
//За допомогою цієї функції знайти AK, AL, AM, якщо дано числа A, K, L, M.
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


//3.	Написати програму, у якій користувач задає кількість секунд.Це значення передається в процедуру, яка переводить секунди у відповідну кількість годин, хвилин, секунд і виводить отримані значення на екран.Наприклад, 7515 секунд - це 2 години 5 хвилин 15 секунд.
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

//4.	Користувач вводить число в десятковій системі числення.Перевести його у вісімкову та шістнадцяткову(не забуваємо замінювати числа на A(10) B(11) C(12) D(13) E(14) F(15) у 16 - ричній системі) системи.
//void decToOCT(int n);
//void decToHEX(int n);
//Введення	Результат
//179	ОCT - 263
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
//    cout << "Введіть число в десятковій системі числення: ";
//    cin >> num;
//
//    decToOCT(num);
//    decToHEX(num);
//
//    return 0;
//}*/

//5.	Напишіть рекурсивну функцію(підпрограму), яка за заданими A і B обчислює залишок від цілочисельного ділення A% B.
//int modAB(int a, int b);


//#include <iostream>
//using namespace std;
//
//int modAB(int a, int b) {
//    if (a < b) {
//        return a; // Залишок дорівнює A, якщо A < B
//    }
//    else {
//        return modAB(a - b, b); // Рекурсивно викликаємо функцію з новим значенням A
//    }
//}
//
//int main() {
//    int A = 17;
//    int B = 5;
//
//    int result = modAB(A, B);
//    cout << "Залишок від цілочисельного ділення " << A << " % " << B << " = " << result << endl;
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
