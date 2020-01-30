#include <stdio.h>
#include <time.h>

//물고기 6마리
//어항에 산다. 근데 사막
//덥다. 물이 증발한다
//물이 다 증발하기 전 어항에 물을 줘라
//난 물고기는 키워서 먹어

int level;
int arrayFish[6];
int* cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main(void) {
	long startTime = 0; // 게임 시작 시간
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; // 최근에 물을 준 시간 간격

	int num; // 몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData();

	cursor = arrayFish; // cursor[0] ... cursor[1] ...

	startTime = clock(); // 현재 시간을 1/1000초 단위로 반환
	while (1) {
		printfFishes();
		printf("몇 번 어항에 물을 주시겠어요? ");
		scanf_s("%d", &num);

		// 입력값 체크
		if (num < 1 || num>6) {
			printf("\n입력값이 잘못되었습니다\n");
			continue;
		}

		// 총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 마지막으로 물 준 시간 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		// 어항의 물 증발
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물을 준다
		// 1. 어항의 물이 0 이면? 물을 주지 않는다
		if (cursor[num - 1] <= 0) {
			printf("%d 번 물고기는 이미 죽었습니다 ... 물을 주지 않습니다\n", num);
		}
		// 2. 어항의 물이 0 이 아닌 경우? 물을 준다! 100을 넘지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d 번 어항에 물을 줍니다\n\n", num);
			cursor[num - 1] += 1;
		}

		// 레벨업을 할 건지 확인 (레벨업은 20초마다)
		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf(" *** 축 레벨업! %d 레벨로 업그레이드 ***\n\n", level);

			//최종 레벨 : 5
			if (level == 5) {
				printf("\n\n축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다\n\n");
				exit(0);
			}
		}

		// 물고기 생사여부 확인
		if (checkFishAlive() == 0) {
			//모두 죽음
			printf("모든 물고기가 ... ㅠㅠ ...\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아있어요!\n");
			//뭔가 살아있음
		}
		prevElapsedTime = totalElapsedTime;

		// 10초 -> 15초 [5초 : prev -> 15초] -> 25초 (10초...?)
	}

	return 0;
}

void initData() {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100; // 어항의 물 높이 (0 ~ 100)
	}
}

void printfFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0)
			return 1; //true
	}
	return 0;
}
