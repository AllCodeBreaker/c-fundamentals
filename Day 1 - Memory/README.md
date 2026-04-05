# Day 1: Memory
In C programming, you directly interact with the memory unit (RAM). It is mandatory to know how memory works to master the actual working internals to programs.

## Components of Memory (RAM)

RAM is a continuous block of temporary storing memory unit (volatile). It is used to store temporary data which CPU can access later. It is used because it is much more faster than perment storing unit (non-volatile) like HHD, SSD etc.
<br />
RAM is divided into different sections...

|-------------------|
|       Stack       |
|       Heap        |
|   BSS Segment     |
|   Data Segment    |
|   Text Segment    |
|-------------------|


You dont have to master all but you haould have this basic knowledge of all these sections, mainly you have to know stack and heap which is most important. 


### Stack

Stack is a Small section of storage block of RAM used by CPU to store local variables, function calls, parameters, and return address. It works on the LIFO (Last In First Out) principle. Stack is always go downwards (higher address to lower address) and when the size exceeds it cause stack overflow issue. 
<br />

#### Registers

|-------|-------|
|Stack Pointer (SP /RSP)|Maps to the top of the stack|
|Base Pointer (BP, RBP)| Base address of the stack|
|Instruction Pointer (IP, RIP)|Points to next instruction|
|-----|------------|


### Heap

Heap is used for dynamic memory allocation. For stack everything is handled automatically but for heap you have to do everything manually. Unlike stack, heap grows upwards (lower address to higher address).

To use this memory you have to us memory allocation methods like malloc, calloc etc. After usage you have to free it otherwise it may cause certian issues. 
    