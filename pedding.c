#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t 박에스더   2022041054\t\n\n");           //""의 내용인 이름, 학번 출력 
struct student pst; //student 객체 pst 선언
printf("size of student = %ld\n", sizeof(struct student));//student구조체의 메모리 크기 출력
printf("size of int = %ld\n", sizeof(int)); //int의 메모리 크기 출력
printf("size of short = %ld\n", sizeof(short)); //short의 메모리 크기 출력
return 0;
}