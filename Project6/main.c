// ������ �ڷγ� Ȯ���� ��Ȳ
#include <stdio.h>



struct country {
	int number;

	char name[20];
	int count;
};

int main(void)
{
	struct country list[5] = {{1,"�ѱ�", 500000}, {2,"�̱�",1500000}, {3,"�߱�",3000000}, {4,"�Ϻ�",700000}, {5,"ĳ����",800000}};
	int i;
	

	for(i = 0; i < 5; i++ ) {
		printf("%d %s %d \n", list[i].number, list[i].name, list[i].count);//�� ���� Ȯ���� �� ���
	}

	

	return 0;
}