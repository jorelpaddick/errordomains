/**************************************************************************
* AUTHOR:                                                                   
* FILE NAME: demo.c
* CREATED: 24-03-2018
* MODIFIED: Sat 24 Mar 13:32:37 2018
* PURPOSE:                                                                  
***************************************************************************/
#include <stdio.h>
#include "errordomain.h"

void fun() 
{
    // Syntax is identical to throwing an object 
    // and calling it's constructor   
    throw Error("A detailed message", 0x1234ABCD); //Message and error code 
    // Using a compound literal, you can omit arguments
    throw (Error) {"A detailed message"};
    // also
    throw (Error){"", -2}; // Will work
    // Check the list of created error types in the README.md
    throw UnimplementedError("more errors to come", 0xFACE);
}

int main(int argc, const char *argv[])
{
    try
    {
        fun();
    }
    catch(Error e)
    {
        printf("An error has occured: %s\n", e.message);
        printf("Error Code: %08x\n", e.errorNumber);
    }

    return 0;
}


