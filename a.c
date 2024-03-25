#include <stdio.h>
int main(void){
    
    printf("int 자료형의 크기: %d바이트\n",sizeof(int));
    printf("float 자료형의 크기: %d바이트\n",sizeof(float));
    printf("double 자료형의 크기: %d바이트\n",sizeof(double));
    printf("char 자료형의 크기: %d바이트\n",sizeof(char));
    printf("long int 자료형의 크기: %d바이트\n",sizeof(long int));
    printf("long long int 자료형의 크기: %d바이트\n",siz햣eof(long long int));
    printf("unsigned int 자료형의 크기: %d바이트\n",sizeof(unsigned int));
    return 0;
}
// gcc 파일명
// ./a.out
// ls
// pwd 위치알기
// cd .. 뒤로가기