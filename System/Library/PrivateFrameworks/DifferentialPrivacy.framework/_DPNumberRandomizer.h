/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DPLaplaceNoiseGenerator;

@interface _DPNumberRandomizer : NSObject {

	unsigned long long _range;
	double _epsilon;
	_DPLaplaceNoiseGenerator* _generator;

}

@property (nonatomic,readonly) unsigned long long range;                          //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) double epsilon;                                    //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPLaplaceNoiseGenerator * generator;              //@synthesize generator=_generator - In the implementation block
+(id)numberRandomizerWithRange:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)init;
-(id)description;
-(unsigned long long)range;
-(_DPLaplaceNoiseGenerator *)generator;
-(id)randomize:(id)arg1 ;
-(id)initWithRange:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(double)epsilon;
@end

