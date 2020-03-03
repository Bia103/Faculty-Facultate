.data
	n:.word 4
	v:.word 5,10,2,3
	x:.word 0
	y:.word 0
	egale: .asciiz "Egale"
	diferite: .asciiz "Diferite"
.text

main:

li $t1,-4

jal suma
sw $t0,x
sw $t6,y
beq $t0,$t6,afis2

afis1:
la $a0,diferite
li $v0,4
syscall
li $v0,10
syscall 


afis2:
la $a0,egale
li $v0,4
syscall
li $v0,10
syscall 
 

suma:
li $t0,0
li $t6,0
lw $t2,n
li $t3,1
li $t5,5
for:
addi $t1,$t1,4
lw $t7,v($t1)
bgt $t7,$t5,maimare
add $t6,$t6,$t7
j fin
maimare:
add $t0,$t0,$t7
j fin

fin:
addi $t3,$t3,1
bge $t2,$t3,for
jr $ra
