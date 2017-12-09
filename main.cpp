#include "ofApp.h"
#include "ofAppGlutWindow.h"

//--------------------------------------------------------------
int main(){
    ofAppGlutWindow window; // create a window
    // set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
    ofSetupOpenGL(&window, 800, 700, OF_FULLSCREEN);
    ofRunApp(new ofApp()); // start the app
}

