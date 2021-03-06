/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPAudioAnalyzer.h>

@class VCPEndPointDetector;

@interface VCPVoiceDetectorV3 : VCPAudioAnalyzer {

	VCPEndPointDetector* _voiceDetector;
	VCPEndPointDetector* _musicDetector;

}
-(void)dealloc;
-(int)sampleBatchSize:(double)arg1 ;
-(int)initializeAudioUnit:(const AudioStreamBasicDescription*)arg1 ;
-(int)processAudioSamples;
-(id)audioFormatRequirements;
-(int)finalize:(const SCD_Struct_VC6*)arg1 ;
-(int)loadModel;
@end

