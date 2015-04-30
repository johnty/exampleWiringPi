#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    if (wiringPiSPISetup (0, 1000000) < 0)
         printf("error init wiringPi\n");
    else
         printf("\n\n\n\nsuccessfully loaded wiringPi!!!!\n");
    for (int i=0; i<500; i++) {
         printf("adc test read: %i\n", readADC(0));
    }

}

int ofApp::readADC(int adcnum) {

    uint8_t buff[3];
    int adc;
    if ((adcnum > 7) || (adcnum < 0))
        return -1;
    buff[0] = 1;
    buff[1] = (8+adcnum)<<4;
    buff[2] = 0;
    wiringPiSPIDataRW(0, buff, 3);
    adc = ((buff[1]&3) << 8) + buff[2];
    return adc;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    string output = "ADC values: ";
    for (int i=0; i<8; i++) {
        int val = readADC(i);
        output += ofToString(val)+" ";
    }
    ofSetColor(255,0,0);
    ofDrawBitmapString(output, 100, 100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
