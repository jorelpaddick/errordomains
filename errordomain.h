/**************************************************************************
* AUTHOR: Jorel Paddick (18847897)
* FILE NAME: errordomain.h
* CREATED: 24-03-2018
* MODIFIED: Sat 24 Mar 12:41:20 2018
* PURPOSE: Defines a set of exceptions for C++ without using classes and
*     polymorphism so as to achieve c like programming with exceptions
***************************************************************************/
#ifndef ERROR_DOMAIN 
#define ERROR_DOMAIN 
#define Error(msg, code) (Error){(msg),(code)}
#define ArithmeticError(msg, code) (ArithmeticError){(msg),(code)}
#define DivisionByZeroError(msg, code) (DivisionByZeroError){(msg),(code)}
#define InvalidArgumentError(msg, code) (InvalidArgumentError){(msg),(code)}
#define IndexError(msg, code) (IndexError){(msg),(code)}
#define InputOutputError(msg, code) (InputOutputError){(msg),(code)}
#define OSError(msg, code) (OSError){(msg),(code)}
#define UnimplementedError(msg, code) (UnimplementedError){(msg),(code)}

// Base Error type
typedef struct Error {
    char message[256];
    int errorNumber;
} Error;

/**************************************************************************
 * ArithmeticError:
 * Throw this exception when an error occurs on numeric caclulations
 *************************************************************************/
typedef struct ArithmeticError{
    char message[256];
    int errorNumber;
} ArithmeticError;

/**************************************************************************
 * DivisionByZeroError:
 * Throw this exception when division by zero occurs 
 *************************************************************************/
typedef struct DivisionByZeroError{
    char message[256];
    int errorNumber;
} DivisionByZeroError;


/**************************************************************************
 * InvalidArgumentError:
 * Throw this exception when an argument is erroneous
 *************************************************************************/
typedef struct InvalidArgumentError{
    char message[256];
    int errorNumber;
} InvalidArgumentError;

/**************************************************************************
 * IndexError:
 * Throw this exception when an array index is out of bounds or erroneous
 *************************************************************************/
typedef struct IndexError{
    char message[256];
    int errorNumber;
} IndexError;

/**************************************************************************
 * InputOutputError:
 * Throw this exception when an input/output operation fails 
 *************************************************************************/
typedef struct InputOutputError{
    char message[256];
    int errorNumber;
} InputOutputError;

/**************************************************************************
 * OSError:
 * Throw this exception when an operating system problem arises 
 *************************************************************************/
typedef struct OSError{
    char message[256];
    int errorNumber;
} OSError;

/**************************************************************************
 * UnimplementedError:
 * Throw this exception when a feature has not been implemented yet 
 *************************************************************************/
typedef struct UnimplementedError{
    char message[256];
    int errorNumber;
} UnimplementedError;

#endif
