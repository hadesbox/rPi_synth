#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

#define PORT 12345

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    void sendUniforms(ofShader * _shader);
    void runSystem(int _sys);
    
    void loadShaders();
    
    ofxOscReceiver receiver;
    
    vector<int> gateIn;
    vector<float> CV;
    int system, subSystem;
    int lastSystem;
    bool fx0, fx1, fx2;

    bool debugMode;
    bool keyboardMode;
    
    vector<ofShader> shaders;
    ofShader * selectedShader;
    ofFbo mainImage;
		
};
