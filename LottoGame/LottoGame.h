#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

struct LottoNumbers
{
	int mainNumbers[5];
	int powerNumber;
};

struct LottoNumbersRand : LottoNumbers
{
	void implementValues();
};

struct LottoNumbersUser : LottoNumbers
{
	void chooseMain();
	void choosePower();
};

void displayLottoNumbers();