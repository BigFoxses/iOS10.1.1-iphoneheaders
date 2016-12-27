/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/ComponentControl.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface RadioPassthroughCC : ComponentControl <tGraphDataSource> {

	NSObject*<OS_dispatch_queue> radioQueue;
	CTServerConnectionRef serverConnection;
	int defaultPeriodUpdateSecs;
	CFRunLoopRef runLoop;
	CFDictionaryRef txPowerConfiguration;
	int txPowerLimit;
	int txDutyCycleLimit;

}
-(void)updateRadioTemp:(int)arg1 :(int)arg2 ;
-(void)createServerConnection;
-(void)calculateMitigation;
-(BOOL)getTemperature:(int)arg1 :(int*)arg2 :(int*)arg3 ;
-(void)createConnectionToCT:(int)arg1 ;
-(void)setMaxTransmitPower;
-(void)refreshCurrentLoadingIndex;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(void)initializeRadio;
-(int)numberOfFields;
-(void)dealloc;
-(void)defaultAction;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
@end
