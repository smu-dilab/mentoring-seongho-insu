#include <stdio.h>

// 애플리케이션 프로그램을 작성하는 경우에는 반환형을 void로 작성하면 안됩니다.

// main 함수의 반환값은 운영체제로 간다.

// 이 프로그램을 실행해서 관리하는 부모 프로세스가 해당 프로세스가 정상종료되었는지 확인하는 용도로 사용.
 
int main ()  {

    printf("Hello world!");

    return 0;
}