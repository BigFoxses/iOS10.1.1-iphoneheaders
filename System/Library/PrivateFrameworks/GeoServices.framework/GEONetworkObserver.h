/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSLock;

@interface GEONetworkObserver : NSObject {

	NSLock* _lock;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	BOOL _initialized;
	BOOL _networkNotified;
	BOOL _networkReachable;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(void)_networkObserversInitialize;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)initializeIfNecessary;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(BOOL)isConnectionRequired;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(BOOL)isCellConnection;
-(BOOL)isNetworkReachable;
@end
