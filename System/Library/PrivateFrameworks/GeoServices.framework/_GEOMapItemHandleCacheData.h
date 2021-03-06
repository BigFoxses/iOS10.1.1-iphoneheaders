/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSData;

@interface _GEOMapItemHandleCacheData : NSObject {

	NSDate* _timestamp;
	NSData* _data;

}

@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long cost; 
-(void)dealloc;
-(NSDate *)timestamp;
-(NSData *)data;
-(unsigned long long)cost;
-(id)initWithTimestamp:(id)arg1 data:(id)arg2 ;
@end

