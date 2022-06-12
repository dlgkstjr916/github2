// 국가별 코로나 확진자 현황
#include <stdio.h>



struct country {
	int number;

	char name[20];
	int count;
};

int main(void)
{
	struct country list[5] = {{1,"한국", 500000}, {2,"미국",1500000}, {3,"중국",3000000}, {4,"일본",700000}, {5,"캐나다",800000}};
	int i;
	

	for(i = 0; i < 5; i++ ) {
		printf("%d %s %d \n", list[i].number, list[i].name, list[i].count);//각 나라별 확진자 수 출력
	}

	

	return 0;
}