#include<stdio.h>
#include<unistd.h>                     // find this - open man page // find this - creat man page 
#include<fcntl.h>

// stdin at 0 index 
//  stdout at 1 index 
//  stderr at 2 index 
// these 3 are reserved in file discripter .. its always gets return 3 

int main()
{
        int fd = 0;

        fd = creat("Demo.txt",0777);

        if(fd == -1)
        {
            printf("Unable to create the file \n");

            return -1;
        }
        else
        {
            printf("file gets created with fd : %d \n",fd);
        }
        


        return 0; 
}