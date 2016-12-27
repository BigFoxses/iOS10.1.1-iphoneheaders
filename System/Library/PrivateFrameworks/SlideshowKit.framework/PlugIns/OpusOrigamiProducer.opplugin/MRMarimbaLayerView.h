/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <UIKit/UIView.h>

@class MRTouchSet, UIPinchGestureRecognizer, UITapGestureRecognizer, MRMarimbaLayer;

@interface MRMarimbaLayerView : UIView {

	MRTouchSet* _touchSet;
	UIPinchGestureRecognizer* _pinchRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	MRMarimbaLayer* _marimbaLayer;

}

@property (readonly) MRMarimbaLayer * marimbaLayer;              //@synthesize marimbaLayer=_marimbaLayer - In the implementation block
-(void)pinch:(id)arg1 ;
-(MRMarimbaLayer *)marimbaLayer;
-(BOOL)marimbaInteractivityIsEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tap:(id)arg1 ;
@end
