#include <iostream>

using namespace std;

int main()
{
    int a,b,c,min;
   scanf("%d%d%d",&a,&b,&c);
    min =a;
    if(b<min && b<c){
        min = b;
    }
    else if(c<min && c<b){
        min = c;
    }
    else if(a<b && a<c){
        min =a;
    }
    printf("%d",min);
    return 0;
}