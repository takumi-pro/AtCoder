#include <iostream>
#include <stdio.h>

using namespace std;

// int main(void)
// {
// int S, h, m, s;
// cin >> S;
// h = S / 3600;
// m = (S % 3600) / 60;
// s = (S % 3600) % 60;
// cout << h << ':' << m << ':' << s << endl;
// return 0;
// }

//==========solution_01===========
#include <stdio.h>

int main()
{
    int S;
    scanf("%d", &S);
    printf("%d:%d:%d\n", S / 3600, (S % 3600) / 60, S % 60);
}
