/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSLock, NSString, NSObject;

@interface GEOLogMessageFactory : NSObject {

	NSLock* _lock;
	NSString* _carrierOperatorName;
	NSLock* _carrierNameLock;
	NSLock* _coreTelephonyServerLock;
	NSObject*<OS_dispatch_queue> _carrierNameQueue;
	CTServerConnectionRef _telephonyServerConnection;

}

@property (nonatomic,readonly) NSString * carrierOperatorName; 
+(id)sharedInstance;
+(BOOL)deviceHasRadio;
-(id)init;
-(void)dealloc;
-(int)_bucketValueForTimeDelta:(double)arg1 ;
-(NSString *)carrierOperatorName;
-(void)_connectToCoreTelephonyServer;
-(void)_updateCarrierOperatorName;
-(id)_retrieveCarrierOperatorName;
@end

