#include <stdio.h>
#include <time.h>

typedef struct {
	char* name;
} CHAMPION;

CHAMPION champ[148];

typedef struct {
	char* line;
} LINE;

LINE line[5];

typedef struct {
	char* role;
} ROLE;	

ROLE role[10];

void InitChampion();
void InitLine();
void InitRole();

void printLine();
void printRole();
void printChamp();

int main(void) {
	srand(time(NULL));

	int champNum = 148;

	InitChampion();
	InitLine();
	InitRole();

	while (1) {
		printf("======== 이번 컨셉은... ========\n");
		getchar();

		int champSelect = rand() % champNum;
		int lineSelect = rand() % 5;
		int roleSelect = rand() % 10;

		printLine(lineSelect);
		printRole(roleSelect);
		printChamp(champSelect);
	}
	
	return 0;
}

void InitChampion() {
	champ[0].name = "가렌";
	champ[1].name = "갈리오";
	champ[2].name = "갱플랭크";
	champ[3].name = "그라가스";
	champ[4].name = "그레이브즈";
	champ[5].name = "나르";
	champ[6].name = "나미";
	champ[7].name = "나서스";
	champ[8].name = "노틸러스";
	champ[9].name = "녹턴";
	champ[10].name = "누누와 윌럼프";
	champ[11].name = "니달리";
	champ[12].name = "니코";
	champ[13].name = "다리우스";
	champ[14].name = "다이애나";
	champ[15].name = "드레이븐";
	champ[16].name = "라이즈";
	champ[17].name = "라칸";
	champ[18].name = "람머스";
	champ[19].name = "럭스";
	champ[20].name = "럼블";
	champ[21].name = "레넥톤";
	champ[22].name = "레오나";
	champ[23].name = "렉사이";
	champ[24].name = "렝가";
	champ[25].name = "루시안";
	champ[26].name = "룰루";
	champ[27].name = "르블랑";
	champ[28].name = "리 신";
	champ[29].name = "리븐";
	champ[30].name = "리산드라";
	champ[31].name = "마스터 이";
	champ[32].name = "마오카이";
	champ[33].name = "말자하";
	champ[34].name = "말파이트";
	champ[35].name = "모데카이저";
	champ[35].name = "모르가나";
	champ[37].name = "문도 박사";
	champ[38].name = "미스 포츈";
	champ[39].name = "바드";
	champ[40].name = "바루스";
	champ[41].name = "바이";
	champ[42].name = "베이가";
	champ[43].name = "베인";
	champ[44].name = "벨코즈";
	champ[45].name = "볼리베어";
	champ[46].name = "브라움";
	champ[47].name = "브랜드";
	champ[48].name = "블라디미르";
	champ[49].name = "블리츠크랭크";
	champ[50].name = "빅토르";
	champ[51].name = "뽀삐";
	champ[52].name = "사이온";
	champ[53].name = "사일러스";
	champ[54].name = "샤코";
	champ[55].name = "세나";
	champ[56].name = "세주아니";
	champ[57].name = "세트";
	champ[58].name = "소나";
	champ[59].name = "소라카";
	champ[60].name = "쉔";
	champ[61].name = "쉬바나";
	champ[62].name = "스웨인";
	champ[63].name = "스카너";
	champ[64].name = "시비르";
	champ[65].name = "신 짜오";
	champ[66].name = "신드라";
	champ[67].name = "신지드";
	champ[68].name = "쓰레쉬";
	champ[69].name = "아리";
	champ[70].name = "아무무";
	champ[71].name = "아우렐리온 솔";
	champ[72].name = "아이번";
	champ[73].name = "아지르";
	champ[74].name = "아칼리";
	champ[75].name = "아트록스";
	champ[76].name = "아펠리오스";
	champ[77].name = "알리스타";
	champ[78].name = "애니";
	champ[79].name = "애니비아";
	champ[80].name = "애쉬";
	champ[81].name = "야스오";
	champ[82].name = "에코";
	champ[83].name = "엘리스";
	champ[84].name = "오공";
	champ[85].name = "오른";
	champ[86].name = "오리아나";
	champ[87].name = "올라프";
	champ[88].name = "요릭";
	champ[89].name = "우디르";
	champ[90].name = "우르곳";
	champ[91].name = "워윅";
	champ[92].name = "유미";
	champ[93].name = "이렐리아";
	champ[94].name = "이블린";
	champ[95].name = "이즈리얼";
	champ[96].name = "일라오이";
	champ[97].name = "자르반 4세";
	champ[98].name = "자야";
	champ[99].name = "자이라";
	champ[100].name = "자크";
	champ[101].name = "잔나";
	champ[102].name = "잭스";
	champ[103].name = "제드";
	champ[104].name = "제라스";
	champ[105].name = "제이스";
	champ[106].name = "조이";
	champ[107].name = "직스";
	champ[108].name = "진";
	champ[109].name = "질리언";
	champ[110].name = "징크스";
	champ[111].name = "초가스";
	champ[112].name = "카르마";
	champ[113].name = "카밀";
	champ[114].name = "카사딘";
	champ[115].name = "카서스";
	champ[116].name = "카시오페아";
	champ[117].name = "카이사";
	champ[118].name = "카직스";
	champ[119].name = "카타리나";
	champ[120].name = "칼리스타";
	champ[121].name = "케넨";
	champ[122].name = "케이틀린";
	champ[123].name = "케인";
	champ[124].name = "케일";
	champ[125].name = "코그모";
	champ[126].name = "코르키";
	champ[127].name = "퀸";
	champ[128].name = "클레드";
	champ[129].name = "키아나";
	champ[130].name = "킨드레드";
	champ[131].name = "타릭";
	champ[132].name = "탈론";
	champ[133].name = "탈리야";
	champ[134].name = "탐 켄치";
	champ[135].name = "트런들";
	champ[136].name = "트리스타나";
	champ[137].name = "트린다미어";
	champ[138].name = "트위스티드 페이트";
	champ[139].name = "트위치";
	champ[140].name = "티모";
	champ[141].name = "파이크";
	champ[142].name = "판테온";
	champ[143].name = "피들스틱";
	champ[144].name = "피오라";
	champ[145].name = "피즈";
	champ[146].name = "하이머딩거";
	champ[147].name = "헤카림";
}

void InitLine() {
	line[0].line = "탑";
	line[1].line = "정글";
	line[2].line = "미드";
	line[3].line = "원딜";
	line[4].line = "서폿";
}

void InitRole() {
	role[0].role = "극AD";
	role[1].role = "극AP";
	role[2].role = "하이브리드";
	role[3].role = "극공속";
	role[4].role = "극탱";
	role[5].role = "극이속";
	role[6].role = "사용템";
	role[7].role = "치명타";
	role[8].role = "흡혈";
	role[9].role = "단식";
}

void printLine(int lineSelect) {
	printf("\n라인 : %s\n", line[lineSelect]);
}

void printRole(int roleSelect) {
	printf("\n컨셉 : %s\n", role[roleSelect]);
}

void printChamp(int champSelect) {
	printf("\n챔피언 : %s\n", champ[champSelect]);
}
