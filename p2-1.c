#include <stdio.h>
#define MAX_SIZE 100 //정적 변수 100 정의
float sum(float [], int); //float형 sum 함수정의
float input[MAX_SIZE], answer; //float형 100개의 공간을가진 input배열 , answer 함수정의
int i; // int형 i 정의
void main(void)
{
    printf("[----- [Seok Won Park] [2017018003] -----]\n");
    for(i=0; i < MAX_SIZE; i++) //input배열에 0~99까지 1씩증가시키면서 값을 넣음
        input[i] = i;
    /* for checking call by reference */
    printf("address of input = %p\n", input); // input배열의 주소출력 input[0]의 주소가 출력된다
    answer = sum(input, MAX_SIZE); // sum함수에 input과 MAX_SIZE를 넣어서 호출후 return값을 answer에다가 넣음
    printf("The sum is: %f\n", answer); //answer값 출력
}

float sum(float list[], int n)

{
    printf("value of list = %p\n", list); //리스트의 값 list자체는 list[0]을 가르키는 포인터이기때문 list[0]의 주소가 출력된다 여기서는 input리스트가 들어가있기떄문 input[0]의 주소를 출력
    printf("address of list = %p\n\n", &list); //sum함수에 있는 리스트의 주소 여기서는 input배열을 받아올 list의 주소이다
    int i; //int형 변수 i정의
    float tempsum = 0; //float형 변수 tempsum 0을로 정의
    for(i = 0; i < n; i++) // i를 0부터 1씩증가시켜 n보다 작을때까지 여기서 n은 MAX_SIZE를 받아와 100이다
        tempsum += list[i]; //tempsum에다가 값을 계속 더해줌
    return tempsum; //answer에 들어갈 값 tempsum을 리턴
}