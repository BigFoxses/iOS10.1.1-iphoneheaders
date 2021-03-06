/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RTEventAgentDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface RTEventAgentManager : NSXPCListener <NSXPCListenerDelegate, RTEventAgentDaemonProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _pluginConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * pluginConnection;              //@synthesize pluginConnection=_pluginConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSXPCConnection *)pluginConnection;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)checkin;
-(void)_setup;
-(void)setup;
-(void)launchDaemonWithRestorationIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setPluginConnection:(NSXPCConnection *)arg1 ;
-(void)_launchDaemonWithRestorationIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)onLaunchDaemonWithRestorationIdentifierFromDefaults;
@end

