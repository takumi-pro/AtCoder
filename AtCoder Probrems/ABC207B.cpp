// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     double A, B, C, D, red, blue, prob = 10000;
//     int count = 0;
//     cin >> A >> B >> C >> D;
//     for (int i = 0;; i++)
//     {
//         if (i == 0)
//         {
//             blue = A + B;
//             red = C;
//             count += 1;
//             continue;
//         }
//         if (D < (blue / red) && prob > (blue / red))
//         {
//             prob = blue / red;
//             blue += B;
//             red += C;
//             count += 1;
//         }
//         else if (prob < (blue / red))
//         {
//             count = -1;
//             break;
//         }
//         else
//         {
//             break;
//         }
//     }

//     cout << count << endl;
// }
