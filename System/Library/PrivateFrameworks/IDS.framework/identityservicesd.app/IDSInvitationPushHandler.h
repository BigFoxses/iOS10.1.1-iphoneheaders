/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/IDSPushHandlerDelegate.h>

@class NSMutableArray, NSArray, NSData, NSString;

@interface IDSInvitationPushHandler : NSObject <IDSPushHandlerDelegate> {

	NSMutableArray* _handlers;
	NSArray* _topics;
	BOOL _registeredForPush;
	BOOL _isListening;

}

@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) BOOL registered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
-(void)dealloc;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)initWithTopics:(id)arg1 ;
-(id)_pushTopics;
-(id)copyHandlersForEnumerating;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(NSData *)pushToken;
-(BOOL)registered;
-(void)setRegistered:(BOOL)arg1 ;
@end
