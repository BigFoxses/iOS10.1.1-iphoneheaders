/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDate.h>

@interface CLKDate : NSDate
+(double)timeIntervalSinceReferenceDate;
+(id)date;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)complicationDate;
+(id)unmodifiedDate;
+(id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)complicationDateWithTimeIntervalSinceNow:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(double)timeIntervalSinceNow;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
@end
