.8086
.model small
.stack
.data
.code

main proc
mov ds,ax
mov ah,00h
mov al, 10d
mov ah, 15d
mov bl, 8d
mov bh, 10d
mov cl, 17d
mov ch, 30d
cmp al, bl
jl no
cmp ah, bh
jl no
cmp al, cl
ja no
cmp ah, ch
ja no
mov ax,1
jmp finally
no:
mov ax,0
finally:
mov ax,4c00h
int 21h ; Call DOS interrupt 21h
main endp

end main
