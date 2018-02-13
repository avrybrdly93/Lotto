#include "LottoGame.h"

LottoNumbersRand lottonum;
LottoNumbersUser usernum;

int main()
{
	srand(time(NULL));
	lottonum.LottoNumbersRand::implementValues();
	displayLottoNumbers();
	usernum.LottoNumbersUser::chooseMain();
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
	std::cout << "Enter your five main numbers between 1 and 70." << std::endl;
	for(int i = 0; i < 5; i++)
	{
		std::cin >> usernum.mainNumbers[i];
		if(usernum.mainNumbers[i] > 70 || usernum.mainNumbers[i] < 1)
		{
			std::cout << "Sorry, enter a number between 1 and 70." << std::endl;
			i--;
		}
	}
	std::sort(usernum.LottoNumbersUser)
	std::cout << "Here are your five numbers: ";
	for(int i = 0; i < 5; i++)
	{
		std::cout << usernum.mainNumbers[i] << " ";
		if(usernum.mainNumbers[i] == lottonum.mainNumbers[i])
		{
		std::cout << "Congrats! You just won the lottery!" << std::endl;
		}
		else
		{
		std::cout << "Sorry, your numbers didn't match" << std::endl;
		}
	}
	
}

void LottoNumbersUser::choosePower()
{
	std::cout << "Now, enter your power number." << std::endl;
	std::cin >> usernum.powerNumber;
}

void displayLottoNumbers()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << lottonum.mainNumbers[i] << " ";
	}

	std::cout << lottonum.powerNumber << std::endl;
}

/*
	while(num != guess) {
		guess = ((rand() % 70) + 1);
		std::cout << guess << std::endl;
		increment++;
		}
	*/