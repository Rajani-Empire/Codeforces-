#include<stdio.h>
int main()
{

long long int m,n,a;
scanf("%lld%lld%lld",&m,&n,&a);

long long int h,w; 

if(m%a !=0)
{
    h=(m/a)+1;

}
else
{
    h=m/a;
}


if(n%a !=0)
{
    w=(n/a)+1;

}
else
{
    w=n/a;
}


long long int ans;
ans=h*w;

printf("%lld",ans);
      

    return 0;
}
