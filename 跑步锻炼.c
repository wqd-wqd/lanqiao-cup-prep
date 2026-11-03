#include<stdio.h>
int main(){
    int m[2][10]={
        {1,3,5,7,8,10,12},{4,6,9,11}
    };
    int y=2000,w=6;
    int sum=0;
    int d=1,m0=1;
    int d0=0;
        for(;;y++){
            for(m0=1;m0<=12;m0++){
                int i;
                for(i=0;i<7;i++)if(m[0][i]==m0){d0=31;break;}
                for(i=0;i<4;i++)if(m[1][i]==m0){d0=30;break;}
                if(m0==2&&y%4==0)d0=29;
                else if(m0==2)d0=28;
                for(d=1;d<=d0;d++,w++){
                    if(w>7)w-=7;
            if(w==1||d==1)sum+=2;
            else sum+=1;
            if(y==2020&&m0==10&&d==1)goto result;
        }
    }
}
result:
    printf("%d",sum);
    return 0;
}