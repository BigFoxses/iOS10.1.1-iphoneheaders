/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriCoreNetworkManagerDelegate;
#import <SiriCore/SiriCore-Structs.h>
@class SiriCoreWiFiManagerClient;

@interface SiriCoreNetworkManager : NSObject {

	id<SiriCoreNetworkManagerDelegate> _delegate;
	SCNetworkReachabilityRef _scReachability;
	unsigned _flags;
	SiriCoreWiFiManagerClient* _wiFiManagerClient;

}

@property (assign,nonatomic,__weak) id<SiriCoreNetworkManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(long long)connectionSubTypeForCellularInterface;
+(void)_ifnameTypeForName:(char*)arg1 isWiFi:(BOOL*)arg2 isCellular:(BOOL*)arg3 ;
+(id)connectionTypeForStream:(id)arg1 interfaceName:(id)arg2 ;
+(long long)connectionTypeForInterface:(id)arg1 ;
-(void)setDelegate:(id<SiriCoreNetworkManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<SiriCoreNetworkManagerDelegate>)delegate;
-(void)_setFlags:(unsigned)arg1 ;
-(void)enableWiFiTimeout;
-(id)_wiFiManagerClient;
-(void)disableWiFiTimeout;
-(void)startMonitoringNetworkForHost:(id)arg1 onQueue:(id)arg2 ;
-(void)stopMonitoringNetwork;
-(void)forceFastDormancy;
-(void)acquireDormancySuspendAssertion:(const void*)arg1 ;
-(void)releaseDormancySuspendAssertion:(void*)arg1 ;
@end

