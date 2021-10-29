#include <stdio.h>
int main(void)
{
	//디버그 단축키:ctrl+F5
	//정수형 변수 int
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/


	//실수형 변수 float double에 대한 예제
	/*float f = 46.5f;
	printf("%.2f\n", f); //소수점 둘째 까지만 찍고싶으면 .2f
	double d = 4.428;
	printf("%.3lf\n", d);*/

	/*const int YEAR = 2000; //상수 .절대 바뀔수 없는 값
	printf("태어난 연도:%d\n", YEAR);*/
	
	//연산
	//10
	/*int add;
	printf("%dx%d=%d \n", 1923,31234,1923*31234);*/

	//scanf
	//키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요:");
	scanf_s("%d", &input);
	printf("입력값:%d\n", input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요:");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값:%d\n", one);
	printf("두번째 값:%d\n", two);
	printf("세번째 값:%d\n", three);*/

	// 문자(한글자) ,문자열(한 글자 이상의 여러글자)
	/*char ff = 'A';
	printf("%c\n", ff);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// 프로젝트
    // 경찰관이 범죄자의 정보를 입수 (조서작성)
	// 이름? 나이? 몸무게? 키 ? 범죄명?

	/*printf("이름이 뭐예요?");
	char name[256];
	scanf_s("%s", name, sizeof(name));
	
	printf("나이가 어떻게 되세요?");
	int age;
	scanf_s("%d", &age);

	printf("몸무게가 어떻게 되세요?");
	float weight;
	scanf_s("%f",&weight);

	printf("키가 어떻게 되세요?");
	double height;
	scanf_s("%lf",&height);

	printf("범죄명이 어떻게 되세요?");
	char what[256];
	scanf_s("%s", what, sizeof(what));

	//조서내용출력

	printf("이름:%s\n",name);
	printf("나이:%d\n",age);
	printf("몸무게:%.2f\n",weight);
	printf("키:%.2lf\n",height);
	printf("범죄명:%s\n",what);*/





	return 0;
}
