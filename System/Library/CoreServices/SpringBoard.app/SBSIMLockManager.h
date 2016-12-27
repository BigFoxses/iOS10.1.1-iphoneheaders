/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBSIMLockAlertItem, SBSIMLockEntryAlert, NSString;

@interface SBSIMLockManager : NSObject {

	BOOL _isBrickedDevice;
	long long _status;
	SBSIMLockAlertItem* _weak_currentAlert;
	SBSIMLockEntryAlert* _lockEntryAlert;
	NSString* _languageCode;
	BOOL _hasHadSIMWhileNotBricked;
	BOOL _wasActivated;
	BOOL _neededUIM;

}
+(id)sharedInstance;
-(long long)_CTToSBSIMStatus:(CFStringRef)arg1 ;
-(long long)_statusFromCT;
-(void)_updateToStatus:(long long)arg1 ;
-(void)_tryToUpdateStatus;
-(void)_tearDownAlertAndUpdateStatus;
-(BOOL)_shouldSuppressAlert;
-(void)_setupAppActivationStateDidChange:(id)arg1 ;
-(void)_activationDidChange;
-(void)_telephonyDidRestart;
-(void)_postponementDidChange;
-(void)_externalSIMStatusChanged:(id)arg1 ;
-(void)lockEntryAlertDismissed:(id)arg1 ;
-(void)alertItemDismissed:(id)arg1 ;
-(void)repopAlert;
-(void)attemptUnlock;
-(void)_handlePromptForUnlock;
-(void)_updateSIMStatus:(CFStringRef)arg1 withOptions:(CFDictionaryRef)arg2 ;
-(int)pinLockAttemptsRemaining;
-(int)pukLockAttemptsRemaining;
-(id)init;
-(void)dealloc;
-(id)languageCode;
-(long long)status;
-(void)airplaneModeChanged;
-(void)registerForAlerts;
@end
