#include <stdlib.h>
#include <stdio.h>

#include "portaudio.h"


//error checking 
static void checkErr(PaError err){
    if (err != paNoError){
        //prints out which error you got 
        printf("PortAudio error: %s\n", Pa_GetErrorText(err)); 
        exit(EXIT_FAILURE); 
    }
}

int main() {
    PaError err; 
    err = Pa_Initialize(); 
    checkErr(err); 

    //query the devices that you have 
    int numDevices = Pa_GetDeviceCount(); 
    printf("Number of devices: %d\n", numDevices); 

    //exits if either of these two cases (no device or error finding)
    if(numDevices < 0){
        printf("Error getting device count.\n"); 
        exit(EXIT_FAILURE); 
    } else if (numDevices == 0){
        printf("There are no available devices on this machine.");
        exit(EXIT_SUCCESS); 
    }
    
    PaDeviceInfo* deviceInfo; 
    //iterating through the device info for each device 
    for (int i = 0; i < numDevices; i++){
        
    }

    //deallocate everything that was used 
    err = Pa_Terminate(); 
    checkErr(err); 

    return EXIT_SUCCESS; 
}