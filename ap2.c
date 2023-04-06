#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); 
printf("\t박에스더    2022041054\t\n\n");  
int list[5];
int *plist[5]; // 정수에 대한 5개의 포인터 선언
list[0] = 10; // list[0]에 10을 대입
list[1] = 11; // list[1]에 11을 대입
plist[0] = (int*)malloc(sizeof(int)); // 크기가 4바이트(sizeof(int))인 메모리를 동적 할당하고 plist 포인터 변수에 저장
printf("list[0] \t= %d\n", list[0]); // list[0]의 값 출력
printf("list \t\t= %p\n", list); // list 값 출력
printf("&list[0] \t= %p\n", &list[0]); // list[0]의 주소 출력
printf("list + 0 \t= %p\n", list+0); // list[0]의 주소 출력
printf("list + 1 \t= %p\n", list+1); // list[1]의 주소 출력
printf("list + 2 \t= %p\n", list+2); // list[2]의 주소 출력
printf("list + 3 \t= %p\n", list+3); // list[3]의 주소 출력
printf("list + 4 \t= %p\n", list+4); // list[4]의 주소 출력
printf("&list[4] \t= %p\n", &list[4]); // list[4]의 주소 출력
// int형 변수는 4비트이므로 list[i+1]의 주소는 list[i]+sizeof(int)이다. 
free(plist[0]); // 동적할당한 메모리를 해제(메모리 반환)
}