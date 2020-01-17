.8086
.model small
.stack 100h
.const
.data
U BYTE 10
V BYTE 12
W BYTE 2
.data?
.code
Start:
MAIN PROC
    mov    ax,@data
    mov    ds,ax
    
    call MyProc

    mov    ah,4Ch
    int    21h
MAIN ENDP

MyProc PROC

    mov cl, W
    mov al, U
    mov bl, V
    mul bl
    div cl
    
MyProc ENDP

end    Start
