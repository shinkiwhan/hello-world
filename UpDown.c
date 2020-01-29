#include <stdio.h>
#include <time.h>

int main(void){
  srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0) {
		printf("남은 기회 %d번\n", chance--);
		printf("숫자를 맞춰보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ↓↓\n\n");
		}
		else if (answer < num) {
			printf("UP ↑↑\n\n");
		}
		else if (answer == num) {
			printf("정답입니다!");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생했습니다.");
		}
		if (chance == 0) {
			printf("모든 기회를 다 사용하셨네요. 따라단 따라단");
		}
	}

	return 0;
}
