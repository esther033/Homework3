#include <stdio.h>
void print_one(int *ptr, int rows); //void printone함수 원형 선언
int main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t 박에스더   2022041054\t\n\n");           //""의 내용인 이름, 학번 출력
int one[] = {0, 1, 2, 3, 4}; //one 배열 선언 후 {0, 1, 2, 3, 4}로 초기화
printf("one = %p\n", one); //one을 16진수로 출력(=one[0]의 주소)
printf("&one = %p\n", &one); //one의 주소 16진수로 출력(=one[0]의 주소)
printf("&one[0] = %p\n", &one[0]); //one[0]의 주소를 16진수로 출력
printf("\n"); 
printf("------------------------------------\n"); 
printf(" print_one(&one[0], 5) \n"); 
printf("------------------------------------\n");
print_one(&one[0], 5);  //printone 함수 호출
printf("------------------------------------\n");
printf(" print_one(one, 5) \n"); 
printf("------------------------------------\n");
print_one(one, 5);
return 0;
}
void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i; //변수 i 선언
printf ("Address \t Contents\n"); 
for (i = 0; i < rows; i++) //i=0부터 rows 까지 반복하는 반복문
printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i(=ptr[i]의 주소)를 16진수로 출력, *(ptr+i)의 값(=ptr[i]) 출력
printf("\n");
printf("\n");
}
