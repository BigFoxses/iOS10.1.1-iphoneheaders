/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>

@class SBMainWorkspaceTransaction, NSString;

@interface SBSideAppSlideGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <BSTransactionObserver> {

	BOOL _waitingForGestureToComplete;
	SBMainWorkspaceTransaction* _activateSideAppTransaction;
	BOOL _activatedSideApp;
	BOOL _updateWhitePointAdaptationStrengthOnComplete;

}

@property (nonatomic,readonly) BOOL waitingForGestureToComplete;              //@synthesize waitingForGestureToComplete=_waitingForGestureToComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)_activateSideApp;
-(void)_cleanupSideApp;
-(void)notePassedSideAppActivationThreshold;
-(BOOL)waitingForGestureToComplete;
-(void)_didComplete;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
@end

