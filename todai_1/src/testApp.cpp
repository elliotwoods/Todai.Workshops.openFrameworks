#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	image.allocate(512, 512, OF_IMAGE_COLOR);
}

//--------------------------------------------------------------
void testApp::update(){
	fillPixels();
}

//--------------------------------------------------------------
void testApp::draw(){
	image.draw(0,0);
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

//--------------------------------------------------------------
void testApp::fillPixels() {

	// loop through rows
	for (int i=0; i<512; i++) {

		//loop through columns
		for (int j=0; j<512; j++) {
			//red
			image.getPixels()[(j + 512 * i) * 3 + 0] = ofRandom(255);
			
			//green
			image.getPixels()[(j + 512 * i) * 3 + 1] = ofRandom(255);

			//blue
			image.getPixels()[(j + 512 * i) * 3 + 2] = ofRandom(255);
		}
	}

	image.update();
}