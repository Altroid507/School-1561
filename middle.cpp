#include "middle.h"
#include <iostream>

using namespace std;

void itc_num_print(int number) {
    cout << number;
}

int itc_len_num(long long number) {
    int l;
    l = 0;
    while (number > 0) {
        number = number / 10;
        l += 1;
    }
    return l;
}

int itc_sum_num(long long number) {
    int summa;
    summa = 0;
    while (number > 0) {
        summa += number % 10;
        number = number / 10;
    }
    return summa;
}

long long itc_multi_num(long long number) {
    long long multi;
    multi = 1;
    while (number > 0) {
        multi = multi * (number % 10);
        number = number / 10;
    }
    return multi;
}

int itc_max_num(long long number) {
    int maxim;
	maxim = 0;
    while (number > 0) {
        if ((number % 10) > maxim) maxim = number % 10;
        number = number / 10;
    }
    return maxim;
}

int itc_min_num(long long number) {
	int minim;
	minim = number;
	while (number > 0) {
		if ((number % 10) < minim) minim = number % 10;
		number = number / 10;
	}
	return minim;
}

int itc_rev_num(long long number) {
	int rev;
	rev = 0;
	while (number > 0) {
		rev += number % 10;
		number = number / 10;
		if (number > 0) rev = rev * 10;
	}
	return rev;
}

int itc_null_count(long long number) {
	int countr;
	countr = 0;
	while (number > 0) {
		if (number % 10 == 0) countr += 1;
		number = number / 10;
	}
	return countr;
}

bool itc_mirror_num(long long number) {
	return 0;
}

int itc_second_max_num(long long number) {
	int maxim, maxim2;
	maxim = 0;
	maxim2 = 0;
	if (number / 10 == 0) return -1;
	while (number > 0) {
		if ((number % 10) > maxim2 && (number % 10) <= maxim) maxim2 = (number % 10);
		if ((number % 10) > maxim) {
			maxim2 = maxim;
			maxim = number % 10;
		}
		number = number / 10;
	}
	return maxim2;
}

int itc_second_simple_max_num(long long number) {
	int maxim, maxim2;
	maxim = 0;
	maxim2 = 0;
	if (number / 10 == 0) return -1;
	while (number > 0) {
		if ((number % 10) > maxim2 && (number % 10) <= maxim) maxim2 = (number % 10);
		if ((number % 10) > maxim) {
			maxim2 = maxim;
			maxim = number % 10;
		}
		number = number / 10;
	}
	if (maxim == maxim2) return -1;
	return maxim2;
}

long long itc_bin_num(long long number) {
	long long res;
	res = 0;
	while (number >= 2) {
		res += number % 2;
		res = res * 10;
		number = number / 2;
	}
	res += number;
	return itc_rev_num(res);
}