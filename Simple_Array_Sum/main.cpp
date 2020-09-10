#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d) {
    int Maxnum = a;
   
    switch (Maxnum) {
    case 1: b > Maxnum;
        Maxnum = b;
        break; 
    
      case 2: c > Maxnum;
          Maxnum = c;
         break;
    
      case 3: d > Maxnum;
          Maxnum = d;
          break;
    
      default:
          Maxnum = a;
          break;
    }
    return Maxnum; 
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
