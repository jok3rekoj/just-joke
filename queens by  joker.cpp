#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int N,ans[12],M[12][12];
void queens(int n, int k);
int check(int i, int j);

int main(int argc, char** argv) {
    while(~scanf("%d",&N)){
        memset(ans,0,sizeof(ans));
        memset(M,0,sizeof(M));
        queens(0,0);
    }
return 0;
}

void queens(int n, int k){
    if(n>N){
        if(k==N){
            printf(" %d",ans[0]);
            for(int i=1; i<N;i++){
                printf(" %d",ans[i]);
            }
            puts("");
            return;
        }
        else return;
    }
    for(int i=0; i<N; i++){
        if(check(i,n)==1){
            k++;
            ans[n]=i;
            M[i][n]=1;
            queens(n+1,k);
            M[i][n]=0;
            ans[n]=0;
            k--;
        }
    }

    return;
}

int check(int i, int j){

    if(M[i][j]==1) return 0;
    for(int z=1;z<N;z++){
        if(M[i][j+z]==1 || M[i][j-z]==1 ||
           M[i-z][j]==1 || M[i+z][j]==1 ||
           M[i+z][j+z]==1 || M[i-z][j-z]==1 ||
           M[i-z][j+z]==1 || M[i+z][j-z]==1) return 0;
    }
    return 1;
}
