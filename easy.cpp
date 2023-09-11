#include <iostream>
#include "easy.h"

using namespace std;

void itc_name(void) {
	cout << "Michael\n";
}

void itc_fio(void) {
	cout << "Alter\n";
	itc_name();
	cout << "Glebovich\n";

}

int itc_abs(int num) {
	if (num < 0) {
		return num * -1;
	}
	return num;
}

double itc_fabs(double num) {
	if (num < 0) {
		return num * -1.0;
	}
	return num;
}

int itc_revnbr(int num) {
	return ((num % 10) * 100) + ((num / 10 % 10) * 10) + (num / 100);
}

bool itc_iseven(int num) {
	return num % 2 == 0;
}

int itc_max(int num, int num2) {
	if (num > num2) return num;
	return num2;
}

int itc_min(int min1, int min2) {
	if (min1 < min2) return min1;
	return min2;
}

double itc_fmax(double num, double num2) {
	if (num > num2) return num;
	return num2;
}

double itc_fmin(double num, double num2) {
	if (num < num2) return num;
	return num2;
}

int itc_sqrt(int num) {
	int ch;
	ch = -1;
	for (int i = 1; i <= num; i++) {
		if (i * i == num) ch = i;
	}
	return ch;
}

int itc_skv(int num) {
	if (num > 0) return num * num;
	return -1;
}

int itc_spr(int a, int b) {
	if (a > 0 && b > 0) return a * b;
	return -1;
}

int itc_str(int a, int b, int c) {
	int p, f;
	p = (a + b + c) / 2;
	f = p * (p - a) * (p - b) * (p - c);
	return itc_sqrt(f);
}

double itc_scir(int radius) {
	if (radius > 0) return 3.14 * radius * radius;
	return -1;
}

double itc_pow(int num, int step) {
	double res;
	res = 1.0;
	if (step > 0) {
		for (int i = 1; i <= step; i++) {
			res = res * num;
		}
	}
	else {
		res = num;
		for (int i = 0; i >= step; i--) {
			res = res / num;
		}
	}
	return res;
}

bool itc_ispositive(int num) {
	return num >= 0;
}

bool itc_ispositive_d(double num) {
	return num >= 0;
}
