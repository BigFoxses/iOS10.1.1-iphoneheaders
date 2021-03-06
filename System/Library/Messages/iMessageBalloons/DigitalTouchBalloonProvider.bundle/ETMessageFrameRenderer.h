/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <libobjc.A.dylib/ETMessageDelegate.h>

@class ETMessage, SKView, SKScene, ETGLSketchView;

@interface ETMessageFrameRenderer : NSObject <ETMessageDelegate> {

	ETMessage* _message;
	CGRect _videoFrame;
	SKView* _sceneView;
	SKScene* _scene;
	ETGLSketchView* _sketchView;
	BOOL _finishedRendering;
	double _startTime;

}

@property (assign,nonatomic) double startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL finishedRendering;              //@synthesize finishedRendering=_finishedRendering - In the implementation block
-(BOOL)finishedRendering;
-(void)setFinishedRendering:(BOOL)arg1 ;
-(id)initWithMessage:(id)arg1 videoFrame:(CGRect)arg2 ;
-(CGImageRef)_createSketchImageForTime:(double)arg1 ;
-(CGImageRef)_createSceneImageForTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(CGImageRef)createImageForTime:(double)arg1 ;
-(void)messageWillReachSizeLimit:(id)arg1 ;
-(void)messageWillStopPlaying:(id)arg1 ;
-(void)messageDidStopPlaying:(id)arg1 ;
@end

