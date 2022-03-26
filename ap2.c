#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; //5개 공간가진 int형 리스트 정의
    int *plist[5]; //5개 공간가진 int형 포인터 리스트 정의
    list[0] = 10; // 리스트 [0]번에 10값저장
    list[1] = 11; // 리스트 [1]번에 11값저장
    plist[0] = (int*)malloc(sizeof(int)); // 포인터리스트 [0]번에 int사이즈로 동적할당
    printf("[----- [Seok Won Park] [2017018003] -----]\n");
    printf("list[0] \t= %d\n", list[0]); // 리스트[0]번의 값출력
    printf("address of list \t= %p\n", list); // 리스트 자체의 주소를 출력 리스트[0]의 주소가 출력된다
    printf("address of list[0] \t= %p\n", &list[0]); // 리스트[0]의 주소가 출력됨
    printf("address of list + 0 \t= %p\n", list+0); //리스트[0]주소에 0만큼을 증가시킨 주소가 출력됨
    printf("address of list + 1 \t= %p\n", list+1); //리스트[0]주소에 1만큼을 증가시킨 주소가 출력됨 int형이라서 4증가된주소출력됨
    printf("address of list + 2 \t= %p\n", list+2); //리스트[0]주소에 2만큼을 증가시킨 주소가 출력됨 int형이라서 8증가된주소출력됨
    printf("address of list + 3 \t= %p\n", list+3); //리스트[0]주소에 3만큼을 증가시킨 주소가 출력됨 int형이라서 12증가된주소출력됨
    printf("address of list + 4 \t= %p\n", list+4); //리스트[0]주소에 4만큼을 증가시킨 주소가 출력됨 int형이라서 16증가된주소출력됨
    printf("address of list[4] \t= %p\n", &list[4]); //리스트[4]주소를 출력함 리스트[0]주소를 4만큼 증가시킨 주소와 주소가같음
    free(plist[0]);//동정할당된 메모리를 초기화시켜줌
}