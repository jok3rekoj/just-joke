#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int Max(int x, int y);
int Min(int x, int y);
void Med(int x);

int point;

int main(int argc, char** argv) {
srand(time(0));
int K, x, y;
int ans;
K=rand()%1;
switch(K)
{
case 0:
    puts("�˷��ͳ���");
    point=0;
    for(int i=1; i<=10; i++){
        puts("");
        printf("�}Ŀ %d :\n",i);
        K=rand()%3;
        switch(K){
            case 0://
                x=rand()%100+1;
                y=rand()%100+1;
                printf("%d X %d = ? \n",x,y);
                scanf("%d",&ans);
                if(ans==x*y){
                    puts("���_!!");
                    point+=10;
                }
                else{
                    puts("�e�`!!");
                }
                break;
            case 1://
                x=rand()%100+1;
                y=rand()%100+1;
                printf("%d X ? = %d \n",x,x*y);
                scanf("%d",&ans);
                if(ans==y){
                    puts("���_!!");
                    point+=10;
                }
                else{
                    puts("�e�`!!");
                }
                break;
            case 2://
                x=rand()%100+1;
                y=rand()%100+1;
                printf(" %d / %d = ? \n",x*y,y);
                scanf("%d",&ans);
                if(ans==x){
                    puts("���_!!");
                    point+=10;
                }
                else{
                    puts("�e�`!!");
                }
                break;
        }
    }
    printf("���� %d\n",point);
    break;

case 1:
    puts("���c����");
    point=0;
    for(int i=1; i<=10; i++){
        puts("");
        printf("�}Ŀ %d :\n",i);
        K=rand()%3;
        switch(K){
        case 0://
            x=rand()%50+1;
            y=rand()%50+1;
            printf("Ո���� %d �� %d �������\n",x,y);
            scanf("%d",&ans);
            if(ans==Max(x,y)){
                puts("���_!!");
                point+=10;
            }
            else{
                puts("�e�`!!");
            }
            break;
        case 1://
            x=rand()%50+1;
            y=rand()%50+1;
            printf("Ո���� %d �� %d ����С������\n",x,y);
            scanf("%d",&ans);
            if(ans==Min(x,y)){
                puts("���_!!");
                point+=10;
            }
            else{
                puts("�e�`!!");
            }
            break;
        case 2:
            x=rand()%50+1;
            printf("Ո���� %d ��������",x);
            Med(x);
            break;

        }
    }
    printf("���� %d\n",point);
    break;

case 2:
    puts("��߅��");
    break;
}
return 0;
}
int Max(int x, int y){

    int bigxy;

    for(int i=1;i<=x;i++)
    {
        if(x%i==0 && y%i==0)
        bigxy=i;
    }

    return bigxy;
}
int Min(int x, int y){

    int bigxy,sdxy;

    for(int i=1;i<=x;i++)
    {
        if(x%i==0 && y%i==0)
        bigxy=i;
    }
    sdxy=(bigxy)*(x/bigxy)*(y/bigxy);
    return sdxy;
}
void Med(int x){
    int a[50], n, i, ans;
    memset(a,0,sizeof(a));
    for(n=0, i=1;i<=x;i++){
        if(x%i==0){
            a[i]=1;
            n++;
        }
    }
    for(i=0;i<n;i++){
        scanf("%d",ans);
        if(a[ans]==0){
            puts("�e�`!!");
            n=-1;
            break;
        }
    }
    if(n!=-1){
        puts("���_!!");
        point+=10;
    }


}
