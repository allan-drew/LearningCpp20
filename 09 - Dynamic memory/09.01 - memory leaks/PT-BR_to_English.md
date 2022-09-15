

# VAZAMENTO DE MEMÓRIA MEMORY LEAKS 

O new deve ser sempre balanceado com o uso de um delete.
Caso contrário, tem-se um vazamento de memória.

Memory leak (vazamento de memória): 
Ao alocarmos um novo bloco de memória com o 'new int' e fazermos o FirstPointer apontar para esse novo bloco de memória, perderemos acesso ao bloco de memória antigo (o endereço não estará mais guardado no ponteiro FirstPointer), pois o ponteiro estará apontando para outro bloco de memória

A primeira memória alocada e não liberada continuará alocada até o programa ser encerrado.

Ao alocar memória e NÃO liberar, por diversas vezes, em determinado instante poderá faltar memória. Um crash poderá ocorrer 

// =========================================== 

# MEMORY LEAKS 
The new must always be balanced with the use of a delete.
Otherwise, you have a memory leak.

When we allocate a new memory block with the 'new int' and make the FirstPointer point to this new memory block, we will lose access to the old memory block (the address will no longer be stored in the FirstPointer pointer), as the pointer will be pointing to another block of memory

The first memory allocated and not released will remain allocated until the program is terminated.

When allocating memory and NOT releasing it several times, at a given moment there may be a lack of memory. A crash may occur






