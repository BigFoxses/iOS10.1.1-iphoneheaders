/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSArray;

@interface DSLogLine : NSObject {

	BOOL _isUsable;
	NSString* _type;
	NSDate* _date;
	NSString* _exception;
	NSArray* _fields;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * date;                     //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL isUsable;                     //@synthesize isUsable=_isUsable - In the implementation block
@property (nonatomic,readonly) NSString * exception;              //@synthesize exception=_exception - In the implementation block
@property (nonatomic,readonly) NSArray * fields;                  //@synthesize fields=_fields - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
+(id)logLinesFromArray:(id)arg1 ;
-(BOOL)isUsable;
-(NSString *)exception;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSDate *)date;
-(NSString *)bundleID;
-(id)initWithLine:(id)arg1 ;
-(NSArray *)fields;
-(id)initWithLogLine:(id)arg1 ;
-(int)valueFromFieldAtIndex:(int)arg1 ;
@end

