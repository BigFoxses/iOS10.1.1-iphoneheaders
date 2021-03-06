/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/StereoFusion.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StereoFusion.videoprocessor/StereoFusion.videoprocessor-Structs.h>
@interface M2MController : NSObject {

	SCD_Struct_M211 _cap;
	IOSurfaceAcceleratorRef _accelRef;
	BOOL _useCustomCoeff;
	BOOL _compensateGpuShift;
	CFDictionaryRef _runOptions;

}
-(id)init:(BOOL)arg1 ;
-(void)dealloc;
-(int)transform:(CVBufferRef)arg1 srcRect:(CGRect)arg2 dst:(CVBufferRef)arg3 sync_m2m:(BOOL)arg4 ;
-(int)queryCapabilities;
-(int)setCustomFilter:(int)arg1 src:(CVBufferRef)arg2 dst:(CVBufferRef)arg3 luma_param:(float)arg4 chroma_param:(float)arg5 ;
-(int)downsample:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 sync_m2m:(BOOL)arg3 ;
@end

