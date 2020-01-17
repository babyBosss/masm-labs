#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    int res;
    int left, right, bottom, up, x, y;
    cout << "Enter six coordinates: left, right, bottop, up, x, y";
    cin >> left >> right >> bottom >> up >> x >> y;
    int r = 0;
    // int item_size = sizeof(int);
    __asm {
        mov res, 1
        
        mov eax, left
        mov ebx, x
        cmp ebx, eax
        jb outside
        
        mov eax, right
        mov ebx, x
        cmp ebx, eax
        ja outside

        mov eax, bottom
        mov ebx, y
        cmp ebx, eax
        jb outside

        mov eax, up
        mov ebx, y
        cmp ebx, eax
        ja outside

        jmp after

        outside:
        mov res, 0
        
        after:
    }
    cout << "Dot is " << (res == 1 ? "in" : "out") << "side a rectangle" << '\n';
    cin >> res;
}
