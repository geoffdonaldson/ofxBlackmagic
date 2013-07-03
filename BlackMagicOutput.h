//
//  BlackMagicOutput.h
//  Lichtmaler
//
//  Created by Jens Heinen on 08.10.11.
//  Copyright 2011 Lichtfaktor. All rights reserved.
//

#ifndef Lichtmaler_BlackMagicOutput_h
#define Lichtmaler_BlackMagicOutput_h

#include "DeckLinkAPI.h"
#include "ofMain.h"
//#include "MSAOpenCL.h"

using namespace std;

class BlackMagicOutput{
private:
	// DeckLink
	uint32_t					mWidth;
	uint32_t					mHeight;
	
	IDeckLink*					pDL;
	IDeckLinkOutput*			pDLOutput;
	IDeckLinkMutableVideoFrame*	pDLVideoFrame;
	
public:
	BlackMagicOutput();
	~BlackMagicOutput();
    
	bool setup(int deviceIndex, int outputIndex);
	void renderToDevice(ofFbo outputFrameBuffer);
    void renderToDevice(ofTexture outputFrameBuffer);
    
    int getWidth(){
        return mWidth;
    };
    
    int getHeight(){
        return mHeight;
    };
};

#endif
