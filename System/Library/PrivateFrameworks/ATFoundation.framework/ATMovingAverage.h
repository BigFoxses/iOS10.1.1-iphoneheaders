/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATMovingAverage : NSObject {

	unsigned long long _window;
	double* _values;
	unsigned long long _count;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) double average; 
-(void)dealloc;
-(unsigned long long)window;
-(void)reset;
-(id)initWithWindow:(unsigned long long)arg1 ;
-(void)update:(double)arg1 ;
-(double)average;
@end

