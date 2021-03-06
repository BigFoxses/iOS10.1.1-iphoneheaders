/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCPHoughTransform : NSObject {

	float* _edgeMap;
	int _mapWidth;
	int _mapHeight;
	int* _accumulator;
	int _accWidth;
	int _accHeight;
	int _accHalfHeight;
	float _angleStep;
	BOOL _verbose;

}
-(void)dealloc;
-(void)Transform;
-(id)initWithEdgeMap:(float*)arg1 mapWidth:(int)arg2 mapHeight:(int)arg3 angleStep:(float)arg4 ;
-(int)DetectLinesWithThreshold:(int)arg1 output:(id)arg2 ;
@end

