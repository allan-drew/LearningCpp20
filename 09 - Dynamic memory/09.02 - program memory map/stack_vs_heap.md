
##  PROGRAM MEMORY MAP 


Virtual memory : a trick that fools your program into thinking it is the only program running on your OS. And all memory resources belong to it. 
    
Each program is abstracted into a process, and each process has access to the memory range 0 ~ 2^n - 1 where n is 32 on 32 bit systems and 64 on 64 bit systems.

Real Memory (RAM) x Virtual memory (0 ~ 2^n - 1) 

The entire program is not loaded in real memory by the CPU and MMU. Only parts that are about to be executed are loaded. Making effective use of real memory, a valuable and lacking resource. 

The memory map is a standard format defined by the OS. All programs written for that OS must conform to it. It's usually divided into some sections.  
System; Stack; Heap; Data; Text  
    Stack --> store local variables (a, b, c...), function calls,...  
    Heap --> Additional memory that can be queried for at run time  
    Text --> load the actual binary of our program. So the cpu can execute it  


### STACK x HEAP:

**Stack :**     
*Memory is finite     
*The developer isn't in full control of the memory lifetime    
*Lifetime is controlled by the scope mechanism    

**Heap :**   
*Memory is finite    
*The developer is in full control of when memory is allocated and when it's released     
*Lifetime is controlled explicitly through 'new' and 'delete' operators (developer is in full control of when the variable comes to life and when the variable dies)    


