/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEventWeightedHistogram.h>
#import <libobjc.A.dylib/RTEventHistogram.h>

@class NSMutableOrderedSet, NSNumber, NSString;

@interface RTEventDateBasedDecayHistogram : RTEventWeightedHistogram <RTEventHistogram> {

	NSMutableOrderedSet* _dateSet;
	NSNumber* _decayRate;

}

@property (nonatomic,retain) NSMutableOrderedSet * dateSet;              //@synthesize dateSet=_dateSet - In the implementation block
@property (nonatomic,retain) NSNumber * decayRate;                       //@synthesize decayRate=_decayRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)dateSetForEventArray:(id)arg1 ;
+(void)resetDateSet:(id)arg1 forEventArray:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reset;
-(void)clear;
-(void)addEvent:(id)arg1 weight:(double)arg2 ;
-(double)decayTimeExponent:(id)arg1 ;
-(NSNumber *)decayRate;
-(id)initWithDateSet:(id)arg1 decayRate:(id)arg2 ;
-(id)initWithDecayRate:(id)arg1 ;
-(NSMutableOrderedSet *)dateSet;
-(id)initWithEventArray:(id)arg1 decayRate:(id)arg2 ;
-(void)resetWithEventArray:(id)arg1 ;
-(void)setDateSet:(NSMutableOrderedSet *)arg1 ;
-(void)setDecayRate:(NSNumber *)arg1 ;
@end

