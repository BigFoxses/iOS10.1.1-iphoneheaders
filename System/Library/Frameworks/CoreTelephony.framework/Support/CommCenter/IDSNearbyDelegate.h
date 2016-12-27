/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface IDSNearbyDelegate : NSObject <IDSServiceDelegate> {

	queue* fQueue;
	block<void ()(unsigned int)>* fCallback;
	IDSService* fIDSService;
	unsigned _fDeviceCnt;

}

@property (assign) unsigned fDeviceCnt;                             //@synthesize fDeviceCnt=_fDeviceCnt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFDeviceCnt:(unsigned)arg1 ;
-(unsigned)fDeviceCnt;
-(unsigned)devicesCount;
-(void)dealloc;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(dispatch_queue_sRef)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(BOOL)isNearby;
@end
