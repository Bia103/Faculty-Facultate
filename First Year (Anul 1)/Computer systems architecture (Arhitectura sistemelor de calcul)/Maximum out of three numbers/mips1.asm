   .data 
   x : .word 20
   y : .word 50
   z : .word 7
   .text 
   main:
   lw $t1,x
   lw $t2,y
   lw $t3,z
   li $t0,0
   bge $t1,$t2,et1
   move $t0,$t2
   j cond2
   et1: move $t0,$t1
   
   cond2: bge $t0,$t3,et2
   
   move $t0,$t3
   et2:
   
   move $a0,$t0
   li $v0,1
   syscall
   li $v0,10
   syscall
   
   
   
