/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMFMemoryMonitorDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface HMFMemoryMonitor : NSObject {

	BOOL _monitoring;
	long long _memoryState;
	id<HMFMemoryMonitorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_source> _memoryPressure;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> memoryPressure;              //@synthesize memoryPressure=_memoryPressure - In the implementation block
@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                         //@synthesize monitoring=_monitoring - In the implementation block
@property (__weak) id<HMFMemoryMonitorDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long memoryState;                                     //@synthesize memoryState=_memoryState - In the implementation block
-(id)init;
-(void)setDelegate:(id<HMFMemoryMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<HMFMemoryMonitorDelegate>)delegate;
-(void)stop;
-(void)start;
-(BOOL)isMonitoring;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setMonitoring:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryPressure;
-(void)_handleMemoryStateChange:(long long)arg1 ;
-(long long)memoryState;
-(void)setMemoryState:(long long)arg1 ;
@end

