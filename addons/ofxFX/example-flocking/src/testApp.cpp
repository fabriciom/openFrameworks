#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	//ofEnableAlphaBlending();
    width = 640;
    height = 480;
    
	ofSetWindowShape(width,height);
    
    flocking.allocate(width,height,1000);
    flocking.setParticleSize(20).setTimpeStep(0.0005);
}

//--------------------------------------------------------------
void testApp::update(){
	ofSetWindowTitle(ofToString(ofGetFrameRate()));
    
    flocking.begin();
    // Draw here an obstacle
    flocking.end();
    
	flocking.update();
}

//--------------------------------------------------------------
void testApp::draw(){
	ofBackground(0);
	
	ofSetColor(255, 255);
	flocking.draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 
}