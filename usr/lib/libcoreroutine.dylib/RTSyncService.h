/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTSyncServiceTransportClientProtocol.h>

@protocol RTSyncServiceClientProtocol, OS_dispatch_queue, RTSyncServiceTransportProtocol;
@class RTReachabilityManager, RTInvocationDispatcher, NSObject, NSMutableDictionary, NSArray, NSString;

@interface RTSyncService : NSObject <RTSyncServiceTransportClientProtocol> {

	BOOL _ready;
	id<RTSyncServiceClientProtocol> _delegate;
	RTReachabilityManager* _reachabilityManager;
	RTInvocationDispatcher* _dispatcher;
	NSObject*<OS_dispatch_queue> _queue;
	id<RTSyncServiceTransportProtocol> _transport;
	NSMutableDictionary* _sendHandlers;
	NSMutableDictionary* _deliveryHandlers;
	long long _reachability;

}

@property (nonatomic,retain) RTReachabilityManager * reachabilityManager;                  //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                          //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<RTSyncServiceTransportProtocol> transport;                 //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sendHandlers;                           //@synthesize sendHandlers=_sendHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deliveryHandlers;                       //@synthesize deliveryHandlers=_deliveryHandlers - In the implementation block
@property (assign,nonatomic) long long reachability;                                       //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic) BOOL ready;                                                   //@synthesize ready=_ready - In the implementation block
@property (assign,nonatomic,__weak) id<RTSyncServiceClientProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPairedWatch;
-(id)init;
-(void)setDelegate:(id<RTSyncServiceClientProtocol>)arg1 ;
-(void)dealloc;
-(id<RTSyncServiceClientProtocol>)delegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)devices;
-(long long)connectionState;
-(id)initWithTransport:(id)arg1 ;
-(id<RTSyncServiceTransportProtocol>)transport;
-(void)setTransport:(id<RTSyncServiceTransportProtocol>)arg1 ;
-(void)setReachability:(long long)arg1 ;
-(long long)reachability;
-(RTInvocationDispatcher *)dispatcher;
-(BOOL)ready;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(void)onReachabilityChange:(id)arg1 ;
-(id)initWithTransport:(id)arg1 reachabilityManager:(id)arg2 ;
-(void)_sendMessage:(id)arg1 recipients:(id)arg2 options:(id)arg3 sendHandler:(/*^block*/id)arg4 deliveryHandler:(/*^block*/id)arg5 ;
-(BOOL)peer:(id)arg1 eligibleToReceiveMessage:(id)arg2 ;
-(void)_onReachabilityChange:(id)arg1 ;
-(void)transport:(id)arg1 linkStateDidChange:(long long)arg2 ;
-(void)transport:(id)arg1 deviceSetDidChange:(id)arg2 ;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)transport:(id)arg1 didSendMessageWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)transport:(id)arg1 didDeliverMessageWithIdentifier:(id)arg2 ;
-(void)sendMessage:(id)arg1 recipients:(id)arg2 options:(id)arg3 sendHandler:(/*^block*/id)arg4 deliveryHandler:(/*^block*/id)arg5 ;
-(RTReachabilityManager *)reachabilityManager;
-(void)setReachabilityManager:(RTReachabilityManager *)arg1 ;
-(NSMutableDictionary *)sendHandlers;
-(void)setSendHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deliveryHandlers;
-(void)setDeliveryHandlers:(NSMutableDictionary *)arg1 ;
-(void)setReady:(BOOL)arg1 ;
@end

