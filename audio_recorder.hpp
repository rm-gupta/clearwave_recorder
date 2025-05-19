//Defines the interface of the audio recorder class 
//only declarations here 

#include "portaudio.h"

class AudioRecorder {
    public: 
        //callback function used by PA when audio processing needed 
        static int PaStreamCallback( const void *input,
            void *output,
            unsigned long frameCount,
            const PaStreamCallbackTimeInfo* timeInfo,
            PaStreamCallbackFlags statusFlags,
            void *userData ); 
        
        void startRecording(); 
        //ptr to portAudio stream 
        //where to save the recording 
        //how long to record 

};