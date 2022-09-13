#include <iostream>

using namespace std;

void Quadrat(float *x) {
    *x = *x * *x;
}

void Sortiere (char *a, char *b, char *c) {
    
}

int main() {
    float c = 20;
    cout << c << endl;
    Quadrat(&c);
    cout << c << endl;
    return 0;
}
