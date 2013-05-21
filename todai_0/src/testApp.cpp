#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true);

	target1 = ofRectangle(100, 100, 300, 50);

	clicked = false;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	string framerate = ofToString(ofGetFrameRate());
	ofDrawBitmapString(framerate, 20, 20);

	//set style of rectangle
	if (clicked) {
		ofNoFill();
	} else {
		ofFill();
	}

	//--
	//circle x, y, radius, with style
	ofPushStyle();
	ofNoFill();
	ofSetColor(200, 100, 100);
	ofSetLineWidth(4.0f);
	ofEnableSmoothing();

	ofCircle(100, 300, 50);

	ofPopStyle();
	//--

	//line
	ofLine(100, 400, 200, 400);

	ofRect(target1);
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
	if (target1.inside(x, y)) {
		clicked = ! clicked;
	}
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