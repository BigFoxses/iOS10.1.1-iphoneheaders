/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIGestureRecognizerTransformAnalyzerInfo;

@interface UIGestureRecognizerTransformAnalyzer : NSObject {

	UIGestureRecognizerTransformAnalyzerInfo* _smoothedInfo;
	double _translationWeight;
	double _pinchingWeight;
	double _rotationWeight;
	int _dominantComponent;

}

@property (nonatomic,readonly) int dominantComponent;                                                //@synthesize dominantComponent=_dominantComponent - In the implementation block
@property (assign,nonatomic) double translationWeight;                                               //@synthesize translationWeight=_translationWeight - In the implementation block
@property (assign,nonatomic) double pinchingWeight;                                                  //@synthesize pinchingWeight=_pinchingWeight - In the implementation block
@property (assign,nonatomic) double rotationWeight;                                                  //@synthesize rotationWeight=_rotationWeight - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizerTransformAnalyzerInfo * smoothedInfo;              //@synthesize smoothedInfo=_smoothedInfo - In the implementation block
-(UIGestureRecognizerTransformAnalyzerInfo *)smoothedInfo;
-(id)init;
-(void)reset;
-(id)analyzeTouches:(id)arg1 ;
-(int)dominantComponent;
-(void)setPinchingWeight:(double)arg1 ;
-(void)setRotationWeight:(double)arg1 ;
-(void)setTranslationWeight:(double)arg1 ;
-(double)translationWeight;
-(double)pinchingWeight;
-(double)rotationWeight;
@end

