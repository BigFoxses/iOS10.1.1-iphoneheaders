/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FUChartPoint.h>

@class NSDate, NSNumber, NSString;

@interface FUChartPointNumeric : NSObject <FUChartPoint> {

	NSDate* _xValue;
	NSNumber* _yValue;

}

@property (nonatomic,retain) NSNumber * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * xValue;                       //@synthesize xValue=_xValue - In the implementation block
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
-(NSString *)description;
-(id)initWithXValue:(id)arg1 yValue:(id)arg2 ;
-(float)yValueFloatRepresentation;
-(NSDate *)xValue;
-(NSNumber *)yValue;
-(id)allYValues;
-(id)yValueForKey:(id)arg1 ;
-(void)setXValue:(NSDate *)arg1 ;
-(void)setYValue:(NSNumber *)arg1 ;
@end

