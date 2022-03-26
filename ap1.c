#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //5개의 공간이있는 int형 리스트
    int *plist[5] = {NULL,}; //5개의 주소를 가질수있는 int형 포인터리스트 또한 이 리스트의 값들을 NULL값으로 초기화시킴
    plist[0] = (int *)malloc(sizeof(int)); // int의 크기 4바이트만큼 동적 메모리 할당
    list[0] = 1; // list0번 주소에 1값 저장
    list[1] = 100; // list1번 주소에 100값 저장
    *plist[0] = 200; // plist 0번 주소가 가지고있는 주소에 200값 저장
    printf("[----- [Seok Won Park] [2017018003] -----]\n"); 
    printf("value of list[0] = %d\n", list[0]); // list[0]번의 값 출력
    printf("address of list[0] = %p\n", &list[0]); //list[0]번주소의 주소출력
    printf("value of list = %p\n", list); //list는 list[0]을 가르키는 포인터이다. 값 출력함으로 즉 [0]번 주소값이 출력된다
    printf("address of list (&list) = %p\n", &list); //list주소 값 출력 0번 주소값이 출력됨
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]); // list[1]번의 값출력 
    printf("address of list[1] = %p\n", &list[1]); // list[1]번의 주소출력
    printf("value of *(list+1) = %d\n", *(list + 1)); // list포인터를 1만큼증가 시켜 list[1]를 가르키게한 포인터에 들어있는 주소의 값을 출력
    printf("address of list+1 = %p\n", list+1); // list[0]+1 에 대한 주소를 출력
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); //*plist[0]포인터가 가지고있는 주소의 값을 출력
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]번의 주소를 출력
    printf("&plist = %p\n", &plist); //plist의 주소를 출력
    printf("plist = %p\n", plist); //plist또한 plist[0]번을 가르키는 포인터이며 이포인터의 값을 출력한다 즉 [0]번주소의 주소가 출력된다
    printf("plist[0] = %p\n", plist[0]);//plist[0]번의 값출력
    printf("plist[1] = %p\n", plist[1]);//plist[1]번의 값출력
    printf("plist[2] = %p\n", plist[2]);//plist[2]번의 값출력
    printf("plist[3] = %p\n", plist[3]);//plist[3]번의 값출력
    printf("plist[4] = %p\n", plist[4]);//plist[4]번의 값출력
    free(plist[0]);//동적할당을 초기화시켜줌
}