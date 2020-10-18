#include "ofApp.h"

int red[768];
int green[768];
int blue[768];

//--------------------------------------------------------------
void ofApp::setup(){
    int i;
    ofBackground(0, 0, 0);
    for (i=0; i<768; i++) {
        /* case1 */
        //red[i] = ofRandom(0, 255);
        //green[i] = ofRandom(0, 255);
        //blue[i] = ofRandom(0, 255);
        /* case2 */
        //red[i] = ofRandom(0, 31);
        //green[i] = ofRandom(63, 127);
        //blue[i] = ofRandom(127, 255);
        /* case3 */
        //red[i] = ofRandom(191, 255);
        //green[i] = ofRandom(127, 255);
        //blue[i] = ofRandom(127, 255);
        /* case4 */
        red[i] = ofRandom(0, 31);
        green[i] = ofRandom(31, 63);
        blue[i] = ofRandom(31, 63);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int i;
    for (i=0; i<768; i++) {
        ofSetColor(red[i], green[i], blue[i]);
        ofDrawLine(0, i, ofGetWidth(), i);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
