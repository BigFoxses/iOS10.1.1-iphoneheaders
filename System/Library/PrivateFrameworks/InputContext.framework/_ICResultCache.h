/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface _ICResultCache : NSObject {

	NSArray* _cachedResults;
	NSDate* _start;
	double _ttlInSeconds;

}
-(void)clear;
-(void)addResults:(id)arg1 ;
-(id)initWithTTL:(double)arg1 ;
-(id)searchWithTrigger:(id)arg1 ;
-(id)searchWithValue:(id)arg1 ;
-(BOOL)fuzzyMatchItem:(id)arg1 withValue:(id)arg2 ;
@end

