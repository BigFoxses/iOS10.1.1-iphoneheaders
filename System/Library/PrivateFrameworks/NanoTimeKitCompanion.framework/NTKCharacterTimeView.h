/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class NTKCharacterResourceLoader, EAGLContext, NTKCharacterDisplayLink, NTKCharacterFrameBuffer, NTKCharacterRenderer, NSString;

@interface NTKCharacterTimeView : UIView <NTKTimeView> {

	NTKCharacterResourceLoader* _loader;
	EAGLContext* _context;
	NTKCharacterDisplayLink* _displayLink;
	unsigned _isRenderOneFrameRequested : 1;
	unsigned _isAnimating : 1;
	unsigned _isBackgrounded : 1;
	unsigned _renderWasIgnored : 1;
	unsigned _layoutWasIgnored : 1;
	unsigned long long _character;
	NTKCharacterFrameBuffer* _framebuffer;
	NTKCharacterRenderer* _renderers[2];
	NTKCharacterRenderer* _renderer;
	BOOL _frozen;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTimeOffset:(double)arg1 ;
-(void)setAnimationFrameInterval:(long long)arg1 ;
-(BOOL)isFrozen;
-(void)setFrozen:(BOOL)arg1 ;
-(void)_stopAnimation;
-(void)_render;
-(void)_endScrubbing;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareToZoom;
-(void)cleanupAfterZoom;
-(void)setOverrideDate:(id)arg1 ;
-(void)scrubToDate:(id)arg1 ;
-(void)setClothingColor:(id)arg1 andDesaturation:(double)arg2 ;
-(void)setZoomFraction:(double)arg1 diameter:(double)arg2 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(void)setOverrideDate:(id)arg1 animated:(BOOL)arg2 enteringOrb:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)enumarateRenderers:(/*^block*/id)arg1 ;
-(void)renderOneFrame;
-(void)_renderOneFrame;
-(void)setOverrideDate:(id)arg1 animated:(BOOL)arg2 enteringOrb:(BOOL)arg3 ;
-(void)applyCharacterTransition:(double)arg1 fromCharacter:(unsigned long long)arg2 toCharacter:(unsigned long long)arg3 ;
-(void)speakTime;
-(void)setCharacter:(unsigned long long)arg1 ;
-(void)_startAnimation;
@end
