#include <iostream>
using namespace std;
typedef unsigned long type;
int countDist(type a, type b);
int main()
{
    int q;  cin >> q;
    for (int i=0; i<q; i++) {
        type a,b;
        cin >> a >> b;
        cout << countDist(a,b) << endl;
    }
}
int countDist(type a, type b) {
    int dist = 0;
    while (a != b) {
        (a > b) ? a >>= 1 : b >>= 1;
        dist++;
    }
    return dist;
}
