#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if (n > m)
    {
        printf("%c > %c\n", 'a', 'b');
    }
    else if (n < m)
    {
        printf("%c < %c\n", 'a', 'b');
    }
    else if (n == m)
    {
        printf("%c == %c\n", 'a', 'b');
    }
}

//==========solution_01==============
// #include <stdio.h>

// using namespace std;

// int main(){
// 	int a,b;
// 	scanf("%d %d",&a,&b);
// 	if(a > b){
// 		printf("a > b\n");
// 	}else if(a < b){
// 		printf("a < b\n");
// 	}else{
// 		printf("a == b\n");
// 	}
// }
