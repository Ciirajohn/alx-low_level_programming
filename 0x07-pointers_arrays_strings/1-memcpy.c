#include "main.h"
/**
*_memcpy -  copy number bytes  adress "from" to adress "to"
*@dest: where the content is to be copied
*@src: source of the data to be copied
*@n: size of the memory in bytes
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{

     unsigned int i;

     i = 0;

     while (i < n)    /*Declaring WHILE*/
     {
          *(dest + i) = *(src + i); /* add 1 position  dest  and  src*/
            i++;

     } /*END WHILE*/


       return (dest);

}