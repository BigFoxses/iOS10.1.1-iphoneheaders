/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSError, NSDictionary;

@interface _HKWorkoutEvent : NSObject <NSSecureCoding> {

	NSUUID* _sessionId;
	long long _eventType;
	NSDate* _date;
	NSError* _error;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) NSUUID * sessionId;                   //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(long long)eventType;
-(NSUUID *)sessionId;
-(NSDictionary *)metadata;
-(NSError *)error;
-(id)initWithEventType:(long long)arg1 sessionId:(id)arg2 date:(id)arg3 metadata:(id)arg4 ;
-(id)initWithSessionId:(id)arg1 error:(id)arg2 ;
@end

