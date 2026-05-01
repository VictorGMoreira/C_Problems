#include <stdio.h>

int s(int n, int k){
    if(n==1)
    return 0;
    return (s(n-1,k)+k)%n; //((n-1)+k) resto de n
}

int main(){
    
    int N,n,k;
    scanf("%d", &N);
    
    for(int i=1; i<=N; ++i){
        scanf("%d %d", &n, &k);
        
        printf("Case %d: %d\n", i, s(n,k)+1); //n,k de sobrevivente + 1 : 
    }
    return 0;
}

