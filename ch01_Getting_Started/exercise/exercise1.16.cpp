#include <iostream>

int main()
{
	int currval = 0, sum = 0;
	//��ȡ����ֱ�������ļ�β���������ж����ֵ�ĺͣ�
	while (std::cin >> currval) 
		sum += currval;
	std::cout << sum << std::endl;
	return 0;
}