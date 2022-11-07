# Buffer-Overflow-Example
A buffer overflow built using C. This example program is used for SECU73000 Assignment 3 where the class explores several software vulnerabilities. 

# To Run
Using the command line and your complier to turn off any overflow or stack curruption warnings, we can trigger a buffer overflow to gain access to the critical information behind a login. 

1. Open a command line interface and navigate to the cloned file. 
2. Using G++ (Or the complier of your choice, commands may differ) enter in the command `gcc -g -fno-stack-protector -D_FORTIFY_SOURCE=0 -o example example.c`
3. In the same terminal, execute the complied application by entering `example.exe`
4. Now enter the password `password`
5. The system should let you in. 


However, to trigger a buffer overflow, you'll need to overflow the input buffer by entering in any characters greater than the buffer limit (Limit is 15)
Repeat and continue from step 3, but instead of using the password, type in any characters greater than 15. 
The system should print out `Wrong password` but still provide access rights to the user. This is beacuse the buffer was filled and continued into the next set of memory addresses, ensuring the boolean value was not 0; anything greater than 0 would allow access rights. 
