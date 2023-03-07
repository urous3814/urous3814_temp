#include <stdio.h>
int main(Void)
{
	int debt = 0,money = 2000, workCount=0;
	char answer1, answer2;
	printf("연어 아보카도 덮밥을 먹는 알고리즘 \n");
	printf("현재 돈은 2,000원 이다. 돈 5,000 원을 빌린다?(Y/N): ");
	answer1 = getchar();
	getchar();  //엔터키 처리
	if (answer1 == 'y' || answer1 == 'Y')
	{
		money += 5000;
		debt += 5000;
		printf("돈을 5,000원 빌린다. \n  현재 가진 돈은 %d원이다. \n", money);
	}
	while (1)
	{

		printf("알바를 30분 합니까? 돈을 1,000원 얻는다.(Y/N): ");
		answer2 = getchar();
		getchar();  //엔터키 처리
		if (answer2 == 'y' || answer2 == 'Y')
		{
			workCount += 1;
			money += 1000;
			printf("알바를 30분 한다. 돈을 1,000원 얻는다. \n  현재 가진 돈은 %d원이다. \n", money);
		}
		else if (money >= 10000)
		{
			break;
		}
		else
		{
			printf("돈이 부족합니다. ");
		}
	}
	money = money - 10000;
	printf("돈 10,000원이 모여 연어 아보가도 덥밮을 먹는다. \n  결과적으로 당신은 연어 아보카도 덮밥과 %d원의 돈, %d원의 빚을 얻었고 %d분 일하였다. \n", money, debt, workCount*30);
	return 0;
}
