/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ATXInspectionInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSString;

@interface _ATXInspectionServer : NSObject <_ATXInspectionInterface, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)appHistoryClear:(/*^block*/id)arg1 ;
-(void)appHistoryAddLaunch:(id)arg1 launchReason:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)appHistoryStartDeltaRecording:(/*^block*/id)arg1 ;
-(void)appHistoryStopDeltaRecording:(/*^block*/id)arg1 ;
-(void)appInstallHistoryClear:(/*^block*/id)arg1 ;
-(void)appInstallHistorySet:(id)arg1 date:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)appInstallHistoryStartDeltaRecording:(/*^block*/id)arg1 ;
-(void)appInstallHistoryStopDeltaRecording:(/*^block*/id)arg1 ;
-(void)feedbackClear:(/*^block*/id)arg1 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)predictAppsAndReturnInputsAndSubscores:(/*^block*/id)arg1 ;
-(void)getParseTree:(/*^block*/id)arg1 ;
-(void)getPredictionModelDetails:(/*^block*/id)arg1 ;
-(void)benchmarkAppPrediction:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
@end

