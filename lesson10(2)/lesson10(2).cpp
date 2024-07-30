#include <iostream>
using namespace std;

int main()
{
	int m[10] = {};
	srand(time(0));
	int uc_tek = 0;

	for (int i = 0; i < 10; i++)
	{
		m[i] = rand() % 100;
	}
	for (int j = 0; j < size(m); j++)
	{
		if (j % 3 == 0 && j % 5 != 0) {
			cout << j << " ";
			uc_tek++;
		}
		else {
			cout << j << " ";
		}
	}
	cout << "task11" << endl;
	int z[10] = {};
	srand(time(0));
	int task11 = 0, musbet = -1;
	for (int i = 0; i < 10; i++) {
		z[i] = rand() % 40 - 10;
	}
	for (int j = 0; j < 10; j++) {
		cout << z[j] << " ";
	}
	cout << endl;
	for (int j = 0; j < 10; j++) {
		if (z[j] > 0) {
			musbet = j;
			break;
		}
	}
	if (musbet != -1) {
		for (int j = musbet + 1; j < 10; j++) {
			task11 += z[j];
		}
	}
	cout << "cem;" << task11 << endl;
	cout << "task12" << endl;
	int a[20] = {};
	srand(time(0));
	int min = a[0], max = a[0], min_i = 0, max_i = 0;
	for (int i = 0; i < 10; i++) {
		a[i] = rand() % 40 - 10;
	}
	for (int j = 0; j < 20; j++) {
		cout << a[j] << " ";
	}
	for (int i = 0; i < 20; i++)
	{
		if ((a[i]) > max) {
			max = a[i];
			max_i = i;
		}
		else if ((a[i]) < min) {
			min = a[i];
			min_i = i;
		}
	}
	cout << "maxs;" << max << endl;
	cout << "maxs index;" << max_i << endl;
	cout << "min;" << min << endl;
	cout << "min index;" << min_i << endl;
	cout << "task13" << endl;
	double b[10] = { 1.1,1.0,2.0,3.3,3.4,5.2,5.0,7.7,8.8,3.0 };
	int tam_eded = 0;
	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	for (int j = 0; j < 10; j++) {
		if ((b[j]) - int((b[j])) == 0) {
			tam_eded++;
		}
	}
	cout << "tam ededlerin sayi;" << tam_eded;
	cout << "task14" << endl;
	int c[20] = {};
	srand(time(0));
	int reqem_1 = 0, reqem_2 = 0, reqem_3 = 0;
	for (int i = 0; i < 20; i++) {
		c[i] = rand() % 200;
	}
	for (int j = 0; j < 20; j++) {
		cout << c[j] << " ";
	}
	for (int j = 0; j < 20; j++) {
		if ((c[j]) > 99)
		{
			reqem_3++;
		}
		else if ((c[j]) > 9)
		{
			reqem_2++;
		}
		else if ((c[j]) < 10)
		{
			reqem_1++;
		}
	}
	cout << "bir reqemlilerin sayi;" << reqem_1 << endl;
	cout << "iki reqemlilerin sayi;" << reqem_2 << endl;
	cout << "uc reqemlilerin sayi;" << reqem_3 << endl;
	cout << "task15" << endl;
	int d[20] = {};
	srand(time(0));
	int sade = 0;
	for (int i = 0; i < 20; i++) {
		d[i] = rand() % 198 + 2;
	}
	for (int j = 0; j < 20; j++) {
		cout << d[j] << " ";
	}
	for (int j = 0; j < 20; j++) {
		bool sadedirmi = true;
		for (int k = 2; k * k <= d[j]; k++) {
			if (d[j] % k == 0) {

				sadedirmi = false;
				break;
			}

		}if (sadedirmi) {
			sade++;
			cout << "sade;" << d[j] << " ";
		}
	}
	cout << "say;" << sade;
	cout << "task16" << endl;
	int e[10] = {};
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		e[i] = rand() % 10;
	}
	for (int j = 0; j < 10; j++) {
		cout << e[j] << " ";
	}
	cout << endl;
	for (int j = 9; j > -1; j--) {
		cout << e[j] << " ";
	}
	cout << "task17" << endl;
	int f[10] = {};
	int new_f[10] = {};
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		f[i] = rand() % 10;
	}
	for (int j = 0; j < 10; j++) {
		cout << f[j] << " ";
	}
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0) {
			new_f[k] = f[k + 1];
		}
		else {
			new_f[k] = f[k - 1];
		}
	}
	cout << endl;
	for (int k = 0; k < 10; k++) {
		cout << new_f[k] << " ";
	}
	cout << "task18" << endl;
	int A[5] = { 0,2,4,6,8 };
	int B[5] = { 1,3,5,7,9 };
	int C[10] = {};
	int zero = 0;
	int v = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0) {
			C[i] += A[zero];
			zero++;
		}
		else {
			C[i] += B[v];
			v++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << (C[i]) << " ";
	}
	cout << "task20" << endl;
	int AA[5] = {};
	int BB[5] = {};
	int CC[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int index = 0;

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			if (index < 5) {
				AA[index++] = CC[i];
			}
		}
		else {
			if (i / 2 < 5) {
				BB[i / 2] = CC[i];
			}
		}
	}
	cout << "c massivi";
	for (int i = 0; i < 10; i++)
	{
		cout << (CC[i]) << " ";
	}
	cout << "a massivi";
	for (int i = 0; i < 5; i++)
	{
		cout << (AA[i]) << " ";
	}
	cout << "b massivi";
	for (int i = 0; i < 5; i++)
	{
		cout << (BB[i]) << " ";
	}

	

}


