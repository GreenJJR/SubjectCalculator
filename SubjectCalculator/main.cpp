#include <iostream>
#include <windows.h>

int main(void)
{
	int subnum, subarg = 0, subscore[100];

	std::cout << "과목 수를 알려주세요!\n\n>";
	std::cin >> subnum;

	system("cls");

	for (int i = 1; i <= subnum; i++)
	{
		std::cout << i << "번째 과목 점수를 알려주세요! \n\n>";
		std::cin >> subscore[i];
		subarg += subscore[i];
		system("cls");
	}

	subarg /= subnum;
	std::cout << "평균 점수: " << subarg << "점 입니다.\n" << std::endl;

	system("pause");
	return 0;
}