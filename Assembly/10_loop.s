.text
.globl main

main:
    li x1, 5
    li x2, 0

loop:
    addi x2, x2, 1
    addi x1, x1, -1

    bne x1, x0, loop
