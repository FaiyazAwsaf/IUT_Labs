#include<stdio.h>

int main(void){

    int gsi, groupID, publishCode, itemNum, cd;

    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d", &gsi, &groupID, &publishCode, &itemNum, &cd);
    printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gsi, groupID, publishCode,itemNum, cd);

    return 0;
}

