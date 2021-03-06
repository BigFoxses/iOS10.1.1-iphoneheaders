/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/CKTypingIndicatorLayerProtocol.h>

@class CALayer, CAStateController, NSString;

@interface HWTypingIndicatorLayer : CALayer <CKTypingIndicatorLayerProtocol> {

	CALayer* _rootAnimationLayer;
	CAStateController* _stateController;

}

@property (nonatomic,retain) CALayer * rootAnimationLayer;                     //@synthesize rootAnimationLayer=_rootAnimationLayer - In the implementation block
@property (nonatomic,retain) CAStateController * stateController;              //@synthesize stateController=_stateController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_loadTypingIndicatorFile;
-(CALayer *)rootAnimationLayer;
-(void)setRootAnimationLayer:(CALayer *)arg1 ;
-(Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2 ;
-(id)CAMLParser:(id)arg1 resourceForURL:(id)arg2 ;
-(void)CAMLParser:(id)arg1 didLoadResource:(id)arg2 fromURL:(id)arg3 ;
-(id)init;
-(void)stopAnimation;
-(void)stopPulseAnimation;
-(void)startGrowAnimation;
-(void)startShrinkAnimation;
-(void)startPulseAnimation;
-(CAStateController *)stateController;
-(void)setStateController:(CAStateController *)arg1 ;
@end

