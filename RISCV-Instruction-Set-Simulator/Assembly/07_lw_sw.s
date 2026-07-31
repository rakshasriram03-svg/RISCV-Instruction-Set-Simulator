.data
value: .word 25

.text
.globl main

main:
    la x1, value
    lw x2, 0(x1)

    li x3, 100
    sw x3, 0(x1)
    