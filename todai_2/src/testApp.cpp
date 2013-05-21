#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	//use the default device anyway
	//but let's set to use the first device available
	camera.setDeviceID(0);

	camera.initGrabber(320, 240);
	output.allocate(320, 240, OF_IMAGE_GRAYSCALE);
}

//--------------------------------------------------------------
void testApp::update(){
	camera.update();

	unsigned char * inputPointer = camera.getPixels();
	unsigned char * outputPointer = output.getPixels();

	for (int i=0; i<320*240; i++) {
		*outputPointer = 0;
		*outputPointer += *inputPointer++ / 3;
		*outputPointer += *inputPointer++ / 3;
		*outputPointer += *inputPointer++ / 3;
		outputPointer++;
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	camera.draw(0,0);
	output.draw(320, 0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	if (key == 'f')
		ofToggleFullscreen();
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