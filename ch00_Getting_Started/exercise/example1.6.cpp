#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total; //������һ�����׼�¼�ı���
	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	if (std::cin >> total) {
		Sales_item trans; //����͵ı���
		//���벢����ʣ�ཻ�׼�¼
		while (std::cin >> trans) {
			//����������ڴ�����ͬ����
			if (total.isbn() == trans.isbn())
				total += trans; //���������۶�;
			else {
				//��ӡǰһ����Ľ��
				std::cout << total << std::endl;
				total = trans;//total���ڱ�ʾ��һ��������۶�
			}
		}
		std::cout << total << std::endl; //��ӡ���һ����Ľ��
	}
	else {
		//û�����룡�������
		std::cerr << "No data?!" << std::endl;
		return -1; //��ʾʧ��
	}
	return 0;
}