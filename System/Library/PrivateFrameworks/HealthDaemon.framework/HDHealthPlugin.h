/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthPlugin <NSObject>
@optional
-(BOOL)daemonDidReceiveNotification:(const char*)arg1;
-(void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
-(id)dataCollectors;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3;
-(id)queryServerForUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(id)arg5 profile:(id)arg6 queryDelegate:(id)arg7;
-(id)deepBreathingServerForClient:(id)arg1 configuration:(id)arg2 healthDaemon:(id)arg3 delegate:(id)arg4;
-(void)_setPluginCatherineFeeder:(id)arg1;
-(void)_setPluginHeartRateEnable:(BOOL)arg1;

@required
-(void)activate;
-(id)initWithHealthDaemon:(id)arg1;

@end
