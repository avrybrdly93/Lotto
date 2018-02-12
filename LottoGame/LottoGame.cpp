#include "LottoGame.h"

LottoNumbersRand lottonum;
LottoNumbersUser usernum;

int main()
{
	srand(time(NULL));
	lottonum.LottoNumbersRand::implementValues();

	for (int i = 0; i < 5; i++)
	{
		std::cout << lottonum.mainNumbers[i] << " ";
	}

	std::cout << lottonum.powerNumber << std::endl;

	

}

void LottoNumbersRand::implementValues()
{
	for(int i = 0; i < 5; i++)
	{
		lottonum.mainNumbers[i] = ((rand() % 70) + 1);
	}

	lottonum.powerNumber = ((rand() % 30) + 1);
	std::sort(lottonum.mainNumbers, lottonum.mainNumbers + 5);
}

void LottoNumbersUser::chooseMain() 
{
	std::cout << "Enter your five main numbers." << std::endl;
	for(int i = 0; i < 5; i++)
	{
		std::cin >> usernum.mainNumbers[i];
	}
}

void LottoNumbersUser::choosePower()
{
	std::cout << "Now, enter your power number." << std::endl;
	std::cin >> usernum.powerNumber;
}


/*
	while(num != guess) {
		guess = ((rand() % 70) + 1);
		std::cout << guess << std::endl;
		increment++;
		}
	*/