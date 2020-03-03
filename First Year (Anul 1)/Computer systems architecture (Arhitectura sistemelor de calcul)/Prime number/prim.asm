.data
	n:.word 7
	x:.byte 0
	y:.asciiz "\n x retine: "	
.text
main:
	li $t0,2
	lw $t1,n 
	div $t1,$t0
	mflo $t2

for:
	bgt $t0,$t2,prim 
	div $t1,$t0
	mfhi $t3
	beq $t3,$0,neprim
	addi $t0,$t0,1
	j for
neprim:
	sb $0,x
	j iesire
prim:
	beq $t2,$0,neprim
	li $t0,1
	sb $t0,x
	
iesire:
	la $a0,y
	li $v0,4
	syscall
	lb $a0,x
	li $v0,1
	syscall
	li $v0, 10 
	syscall
