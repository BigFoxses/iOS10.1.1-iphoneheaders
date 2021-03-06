/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBIsolationManager : NSObject {

	NSMutableDictionary* _identifiersToViewControllers;
	NSMutableDictionary* _identifiersToRequesters;
	NSMutableDictionary* _deferralContextIdsToReasons;

}
+(id)sharedInstance;
-(BOOL)hasRegisteredViewControllerForIdentifier:(id)arg1 ;
-(void)unregisterViewControllerForIsolationIdentifier:(id)arg1 ;
-(void)registerViewController:(id)arg1 forIsolationIdentifier:(id)arg2 ;
-(id)registerRequester:(id)arg1 forIsolationIdentifier:(id)arg2 ;
-(void)unregisterRequester:(id)arg1 forIsolationIdentifier:(id)arg2 ;
-(void)_addHIDEventDeferralWithSourceIdentifier:(id)arg1 forReason:(id)arg2 addition:(/*^block*/id)arg3 ;
-(void)_removeHIDEventDeferralWithSourceIdentifier:(id)arg1 forReason:(id)arg2 removal:(/*^block*/id)arg3 ;
-(id)init;
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

