/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface VCPCoreMotionDelegate : NSObject {

	CMMotionManager* motionManager;
	NSOperationQueue* operationQueue;
	SCD_Struct_VC33 quaternionBuffer[64];
	double timestampBuffer[64];
	int quaternionBufferIndex;
	opaque_pthread_mutex_t ringMutex;
	SCD_Struct_VC33 lastReadQuaternion;
	VCPCoreMotionDelegate* weakSelf;
	int accelRingIndex;
	float accelRingX[256];
	float accelRingY[256];
	float accelRingZ[256];
	double accelRingTime[256];
	_sFILE* gyroFile;

}
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(int)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(void)didUpdateAcceleration:(Translation)arg1 time:(double)arg2 ;
-(void)processGyroData:(id)arg1 withError:(id)arg2 ;
-(SCD_Struct_VC33)getQuaternionByTimestamp:(double)arg1 ;
@end

