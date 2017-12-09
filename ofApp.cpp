#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(false);
    
    ofImage distortionMap;
    distortionMap.loadImage("distortion.png");
    
    //set up a slit scan with a maximum capacity of frames
    // in the distortion buffer
    slitScan.setup(ofGetWidth(),ofGetHeight(), 120);
    
    slitScan.setDelayMap(distortionMap);
    //blending means the edges between the scans are feathered
    slitScan.setBlending(true);
    
    //time delay is the deepest in history the delay can go
    //and width is the number of frames the distortion will encompass
    //note that the delay cannot be more than the total capacity
    slitScan.setTimeDelayAndWidth(0, 120);
    
    //set up the grabber
    grabber.initGrabber(ofGetWidth(),ofGetHeight());
    

    
    verdana.loadFont("Economica-BoldItalic.ttf",12);
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
    if(grabber.isFrameNew()){
        slitScan.addImage(grabber);
    }
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    slitScan.getOutputImage().draw(0, 0);

    
    
// ofSetColor(0, 0, 255);
// ofDrawRectangle(15,680,-100, 160, 25);
    
//    char tempString[255];
//    sprintf(tempString," capture this by pressing [x] ");
//    ofSetColor(0,0, 0, 0);
//    verdana.drawString(tempString ,70,560);
//
    verdana.drawString(" capture this by pressing [x] ", 70, 800);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
 
        if(key == 'x'){
            img.grabScreen(0, 0 , ofGetWidth(), ofGetHeight());
            img.save("screenshot.png");
        }
    }


//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

