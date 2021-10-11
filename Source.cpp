#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <io.h>
using namespace std;

int main()
{
	/*const char* path = "D:\\example\\b_data.dat";
	int n = 10, imax, imin,i;
	int* a, max, min;
	FILE* f;
	if (fopen_s(&f, path, "wb") != NULL)
		cout << "The file cannot be opened";
	else
	{
		for (int i = 0; i < n; i++)
		{
			fwrite(&i, sizeof(int), 1, f);
		}
		fclose(f);
	}
	if (fopen_s(&f, path, "rb") != NULL)
		cout << "The file cannot be opened";
	else
	{
		a = new int[n];
		fread(a, sizeof(int), n, f);
		for (imax = imin = 0, max = min = a[0], i = 1; i < n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
				imax = i;
			}
			if (a[i] < min)
			{
				min = a[i];
				imin = i;
			}
		}
		fseek(f, sizeof(int) + imax * sizeof(double), SEEK_SET);
		fseek(f, sizeof(int) + imin * sizeof(double), SEEK_SET);
		fwrite(&max, sizeof(double), 1, f);
		fclose(f);
		delete[]a;
	}*/
	

	struct _finddata_t myfileinfo;
	char str[200];
	cin >> str;
	long done = _findfirst(str, &myfileinfo);
	//cout << myfileinfo.name;
	/*if (done == -1)
		cout << "The surch result is unsuccessful";
	else
		cout << myfileinfo.name;*/
	while (done != -1)
	{
		cout << myfileinfo.name << "\n";
		done = _findnext(done, &myfileinfo);
	}
	while (done != -1)
	{
		cout << myfileinfo.name << "\n";
		done = _findnext(done, &myfileinfo);
	}
	//_A_NORMAL;
	//_A_RDONLY;
	//_A_ARCH;
	//time_t time_create;
	//time_t time_acces;
	//time_t time_write;
	//_fsize_t size;
	return 0;
}