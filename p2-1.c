#include <stdio.h>
#define MAX_SIZE 100 //#define 매크로를 사용하여 MAX_SIZE = 100
float sum1(float list[], int); //sum1함수 원형 선언
float sum2(float *list, int); //sum2함수 원형 선언
float sum3(int n, float *list); //sum3함수 원형 선언
float input[MAX_SIZE], answer; //input[MAX_SIZE], answer를 전역변수로 선언
int i; //i를 전역변수로 선언
void main(void)
{
printf("[----- [Your Name] [Student ID] -----]\n"); //""안의 내용 출력
printf("\t 박에스더   2022041054\t\n\n");           //""의 내용인 이름, 학번 출력
for(i=0; i < MAX_SIZE; i++) //i=0부터 100까지 반복되는 반복문
input[i] = i; //input[i]에 i저장
/* for checking call by reference */
printf("--------------------------------------\n");
printf(" sum1(input, MAX_SIZE) \n"); 
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input을 16진수로 출력(=input[0]의 주소)
answer = sum1(input, MAX_SIZE); //input[MAX_SIZE], answer를 전역변수로 선언
printf("The sum is: %f\n\n", answer); //answer값을 10진수로 출력
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n"); 
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input을 16진수로 출력(=input[0]의 주소) 
answer = sum2(input, MAX_SIZE); //input[MAX_SIZE], answer를 전역변수로 선언
printf("The sum is: %f\n\n", answer); //answer값을 10진수로 출력
printf("--------------------------------------\n"); 
printf(" sum3(MAX_SIZE, input) \n"); 
printf("--------------------------------------\n");
printf("input \t= %p\n", input); //input을 16진수로 출력(=input[0]의 주소) 
answer = sum3(MAX_SIZE, input); //input[MAX_SIZE], answer를 전역변수로 선언
printf("The sum is: %f\n\n", answer); //answer값을 10진수로 출력
}

float sum1(float list[], int n) {
    printf("list \t= %p\n", list); //list를 16진수로 출력
    printf("&list \t= %p\n\n", &list); //list의 주소를 16진수로 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++) //i=0부터 i<n까지 반복되는 반복문
        tempsum += list[i]; //tempsum에 list[i]의 값을 더하고 저장
    return tempsum;
}
float sum2(float *list, int n) {
    printf("list \t= %p\n", list); //list를 16진수로 출력
    printf("&list \t= %p\n\n", &list); //list의 주소를 16진수로 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++) //i=0부터 i<n까지 반복되는 반복문
         tempsum += *(list + i); //tempsum에 list+i의 값을 더하고 저장
    return tempsum; 
}
/* stack variable reuse test */
float sum3(int n, float *list) {
    printf("list \t= %p\n", list);  //list를 16진수로 출력
    printf("&list \t= %p\n\n", &list); //list의 주소를 16진수로 출력
    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++) //i=0부터 i<n까지 반복되는 반복문
        tempsum += *(list + i); //tempsum에 list+i의 값을 더하고 저장
    return tempsum;
}