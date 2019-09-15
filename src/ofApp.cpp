#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float x;
    
    for (float x = 0; x <= 500; x += 20)
    {
        ofDrawLine(x,0,0,x);
    }
    
    for (float x = 0; x <= 500; x += 10)
    {
        ofDrawLine(x,500-x, x+500,1000-x);
    }
    
}
