#include <stdio.h>

int main (){
    int N, i, x,y;
    scanf("%d", &N);
    y=N-1;
    int bolas[N];
    
    for(i=0; i<N; i++){
        scanf("%d", &bolas[i]);
    }

    for (i=0; i<N; i++){
        for (x=0; x<y; x++){
            if((bolas[x]+bolas[x+1])==0){
                bolas[x] = -1;
            }else{
                bolas[x] = 1;
            }
            //printf("%d", bolas[x]);            
        }
        //printf("\n");
        y--;
    }

    if(bolas[0] == 1){
        printf("preta\n");
    }else{
        printf("branca\n");
    }

    return 0;
}