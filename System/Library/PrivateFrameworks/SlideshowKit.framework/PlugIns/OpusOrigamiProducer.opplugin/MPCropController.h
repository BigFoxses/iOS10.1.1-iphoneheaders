/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MPDocument, NSRecursiveLock;

@interface MPCropController : NSObject {

	id _delegate;
	MPDocument* _authoredDocument;
	NSRecursiveLock* _cropLock;

}
+(void)releaseSharedController;
+(id)sharedController;
-(void)batchCrop:(id)arg1 ;
-(void)cropSlidesInDocument:(id)arg1 withOptions:(id)arg2 ;
-(void)applyCropToSlide:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)_applyCropToSlidesInEffectContainersWithArguments:(id)arg1 ;
-(double)durationOfSlide:(id)arg1 ;
-(void)setupWithDocument:(id)arg1 andOptions:(id)arg2 ;
-(void)applyStationaryCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyCropToSlidesInEffectContainers:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)applyMultiFaceAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(CGPoint)checkFarApartROIs:(id)arg1 withImageSize:(CGSize)arg2 visibleAspectRatio:(double)arg3 roiCenter:(CGPoint)arg4 ;
-(void)cropSlidesForLayerGroup:(id)arg1 inDocument:(id)arg2 withOptions:(id)arg3 ;
-(void)applyAnimatedCropToSlide:(id)arg1 withOptions:(id)arg2 centeredAt:(CGPoint)arg3 alwaysZoomIn:(BOOL)arg4 ;
-(void)applyCropToSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropToBreakSlide:(id)arg1 withOptions:(id)arg2 ;
-(void)applyAnimatedCropWithROIsToSlide:(id)arg1 withOptions:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)cleanup;
@end

