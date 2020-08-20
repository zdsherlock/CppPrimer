#include <iostream>

int main()
{
	int currval = 0, sum = 0;
	//读取数据直到遇到文件尾，计算所有读入的值的和；
	while (std::cin >> currval) 
		sum += currval;
	std::cout << sum << std::endl;
	return 0;
}