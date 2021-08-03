#include <iostream>
#include <cstdio>
#include <iomanip>

#define linhas 12
#define colunas 12

using namespace std;

int main () {

    /*freopen ("entrada.in", "r", stdin););
    freopen("output.txt","w",stdout);*/
    int z;
    while((cin >> z) != EOF)
    {
        int ara[z][z];
        int a,b,c,d,e,f,g,h;
        for(a=0; a<z; a++)
        {
            for(b=0; b<z; b++)
                ara[a][b]=3;
        }
        for(a=0; a<z; a++)
            ara[a][a]=1;
        d=z-1;
        for(a=0,b=d; a<z;a++,b--)
            ara[a][b]=2;
        for(a=0; a<z; a++)
        {
            for(b=0; b<z; b++)
                printf("%d",ara[a][b]);
            printf("\n");
        }
    }
    return 0;
}
