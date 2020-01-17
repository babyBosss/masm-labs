#include <iostream>

using namespace std;

int main(){
    
    unsigned int u, v, w, result, rest;
    cout << "Enter u: ";
    cin >> u;
    cout << "Enter v: ";
    cin >> v;
    cout << "Enter w: "; cin >> w;
    __asm {
        mov al, u
        mov bl, v
        mul bl
        mov bl, w
        div bx
        mov result, eax
        mov rest, edx
    }
    cout << "Whole number = " << result << endl;
    cout << "Remainder = " << rest << endl;
    
    return 0;
}
