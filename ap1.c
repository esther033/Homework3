#include <stdio.h>
#include <stdlib.h> // malloc()함수를 포함하기 위한 헤더 포함
void main()
{
int list[5]; 
int *plist[5] = {NULL,}; // 정수에 대한 5개의 포인터 0으로 초기화
plist[0] = (int *)malloc(sizeof(int)); // 4바이트(sizeof(int)) 메모리를 동적 할당하고 plist 포인터 변수에 저장
list[0] = 1; // list[0]에 1 대입
list[1] = 100; // list[1]에 100 대입
*plist[0] = 200; // plist[0]이 가리키는 주소의 값에 200을 대입
printf("list[0] = %d\n", list[0]); // list[0]의 값 1 출력
printf("&list[0] = %p\n", &list[0]); // list[0]의 주소 출력
printf("list = %p\n", list); // list값 출력
printf("&list = %p\n", &list); // list의 주소 출력
printf("----------------------------------------\n\n"); 
printf("list[1] = %d\n", list[1]); // list[1]의 값 출력
printf("&list[1] = %p\n", &list[1]); // list[1]의 주소 값 출력
printf("*(list+1) = %d\n", *(list + 1)); //list[1]이 가리키는 값 출력
printf("list+1 = %p\n", list+1); // list[1]의 주소 값 출력
printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]); // plist[0]이 가리키는 주소의 값 200 출력
printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 주소의 값 출력
printf("&plist = %p\n", &plist); // plist 주소값 출력
printf("plist = %p\n", plist); // plist 값 출력
printf("plist[0] = %p\n", plist[0]); //plist[0]의 값 출력
printf("plist[1] = %p\n", plist[1]); //plist[1]의 값 출력
printf("plist[2] = %p\n", plist[2]); //plist[2]의 값 출력
printf("plist[3] = %p\n", plist[3]); //plist[3]의 값 출력
printf("plist[4] = %p\n", plist[4]); //plist[4]의 값 출력
free(plist[0]);
}

