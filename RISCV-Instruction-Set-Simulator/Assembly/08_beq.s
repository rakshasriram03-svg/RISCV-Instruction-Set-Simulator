.text
.globl main

main:
    li x1, 5
    li x2, 5

    beq x1, x2, equal

    li x3, 0
    j end

equal:
    li x3, 1

end:
