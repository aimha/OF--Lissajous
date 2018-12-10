#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	fbo.allocate(ofGetWidth() * 2, ofGetHeight() * 2, GL_RGBA32F_ARB);
	fbo.begin();
	ofClear(255, 255, 255, 0);
	fbo.end();

	ofEnableAlphaBlending();

	r = 500;
	agent_r = 2;
	theta = 0;
	eta = 0;


	circle_center.set(ofGetWidth(), ofGetHeight());
	ofSetCircleResolution(100);
	
	ofBackground(2, 0, 40);
}

//--------------------------------------------------------------
void ofApp::update(){
	fbo.begin();
	ofSetColor(2, 0, 40, 2);
	ofRect(0, 0, ofGetWidth() * 2, ofGetHeight() * 2);
	fbo.end();

	for (int i = 0; i < 10; i++) {
		agent_one_position.set(circle_center.x + r * cos(theta), circle_center.y + r * sin(theta));
		agent_two_position.set(circle_center.x + r * cos(eta), circle_center.y + r * sin(eta));
		
		theta += 2.75 / 1000.0;
		eta += 7.33 / 1000.0;
		
		fbo.begin();
		ofSetColor( 255 , 0, 80);
		ofNoFill();
		ofCircle(agent_one_position.x, agent_two_position.y, agent_r);
		fbo.end();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255);
	fbo.draw( 0, 0, ofGetWidth(), ofGetHeight());
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
