//
//  main.c
//  MyRemove
//
//  Created by Omar Gudino on 11/6/13.
//  Copyright (c) 2013 Omar Gudino. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[])
{
    int success;
    
    char fileName[100];
    scanf("%s", fileName);
    
    success = unlink(fileName);
    
    if (success == 0) {
        printf("File Deleted\n");
    } else {
        printf("There was an error\n");
    }
    
    return 0;
}


