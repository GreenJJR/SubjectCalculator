#include <iostream>
#include <windows.h>

int main(void)
{
	int subnum, subarg = 0, subscore[100];

	std::cout << "���� ���� �˷��ּ���!\n\n>";
	std::cin >> subnum;

	system("cls");

	for (int i = 1; i <= subnum; i++)
	{
		std::cout << i << "��° ���� ������ �˷��ּ���! \n\n>";
		std::cin >> subscore[i];
		subarg += subscore[i];
		system("cls");
	}

	subarg /= subnum;
	std::cout << "��� ����: " << subarg << "�� �Դϴ�.\n" << std::endl;

	system("pause");
	return 0;
}