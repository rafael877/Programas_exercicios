#include <iostream>
int main (void) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((b> c && d> a) && (c + d> b + a) && (c> = 0 && d> = 0) && (a% 2 == 0))
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;
    return (0);
}
