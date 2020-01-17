.8086
.model small
.stack 100h
.const
.data
U BYTE 10
V BYTE 12
W BYTE 2
macro umnozh
{
mov cl, W
    mov al, U
    mov bl, V
    mul bl
    div cl

}
.code
            
Start:
    mov    ax,@data
    mov    ds,ax
    umnozh
    mov    ah,4Ch
    int    21h
    
end    Start
