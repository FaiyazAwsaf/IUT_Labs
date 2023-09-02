#include<stdio.h>

int main(void){

    int c1, c2, c3, c4, answer;
    int i=3;


    scanf("%d%d%d%d", &c1, &c2, &c3, &c4);

    if (c1 != c2 && c1 != c3 && c1 != c4){
        i--;
    }

    if (c2 != c3 && c2 != c4){
        i--;
    }

    if (c3 != c4){
        i--;
    }


    printf("%d", i);




return 0;
}
