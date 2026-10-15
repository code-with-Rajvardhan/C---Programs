#include<stdio.h>
#include<unistd.h>                      
#include<fcntl.h>

// stdin at 0 index 
//  stdout at 1 index 
//  stderr at 2 index 
// these 3 are reserved in file discripter .. its always gets return 3 
// ufdt - user file discripter table 

int main()
{
        int fd = 0;

        fd = open("Hello.txt",O_RDWR);

        if(fd == -1)
        {
            printf("Unable to open the file \n");

            return -1;
        }
        else
        {
            printf("file gets opened with fd : %d \n",fd);
            write(fd,"Jay Ganesh...",13);
            
            close(fd);
        }
        


        return 0; 
}