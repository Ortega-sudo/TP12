/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <unistd.h>
#include <sys/types.h>
#include <syscall.h>
#include <stdio.h>
#include "Hardware.h"

#define ERRCHK (x,y) (((x) != -1)? (y) : (++(y))) 


int export_pins (void)     /* Exporta los pins 17, 4, 18, 23, 24, 25, 22, y 27 
                             que corresponden a los leds 0 a 7 respectivamente*/ 
{
    int error, write_h;
    FILE *export;
    
    error = 0;
    
    if ((export = fopen("/sys/class/gpio/export", "w")) == NULL)//Si no me deja abrir el archivo, salgo indicando error
        {                                   
           error = 1;
        }
    
    if (error == 0)
        {
            write_h = fputs("17", export);
            error = ERRCHK(write_h, error);
            
            write_h = fputs("4", export);
            error = ERRCHK(write_h, error);
            
            write_h = fputs("18", export);
            error = ERRCHK(write_h, error);
            
            write_h = fputs("23", export);
            error = ERRCHK(write_h, error);
            
            write_h = fputs("24", export);
            error = ERRCHK(write_h, error);
            
            write_h = fputs("25", export);
            error = ERRCHK(write_h, error);
            
            write_h = fputs("22", export);
            error = ERRCHK(write_h, error);
            
            write_h = fputs("27", export);
            error = ERRCHK(write_h, error);
        }    
        
    fclose (export);
   return error;     
}


int set_output (void)
{
    FILE *direction;
    int error=0, write_h;
   
    if ((direction = fopen("/sys/class/gpio/gpio17/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
    
    if ((direction = fopen("/sys/class/gpio/gpio4/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
     
    
    if ((direction = fopen("/sys/class/gpio/gpio18/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
    
    
    if ((direction = fopen("/sys/class/gpio/gpio23/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
    
    if ((direction = fopen("/sys/class/gpio/gpio17/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
    
   if ((direction = fopen("/sys/class/gpio/gpio24/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
    
    if ((direction = fopen("/sys/class/gpio/gpio25/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
    
    if ((direction = fopen("/sys/class/gpio/gpio22/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
    
    if ((direction = fopen("/sys/class/gpio/gpio27/direction", "w")) == NULL)
        {                                   
           error = 1;
        }
    if (error==0)
    {
        write_h = fputs("out", direction);
         fclose(direction);
        error = ERRCHK(write_h, error);   
    }
    
    return error;
}

int On_17(void)
{
    FILE * handle;
    int write_h, error=0;
    char *pin17="/sys/class/gpio/gpio17/value";
    
    if((handle=fopen(pin22,"w")) == NULL)
    {
        error=1;
    }
    
    else if (fputc('0', handle) == -1)
    {
        error=1;
    }
    
    else 
    {
        error = 0;
    }
    
return error;
}