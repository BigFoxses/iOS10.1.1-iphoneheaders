/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned mode;
	unsigned passcodeWindowContextID;
	unsigned voiceOverItemChooserWindowContextID;
	unsigned tripleClickSheetWindowContextID;
	unsigned assistiveTouchPort;
	unsigned profileConfiguration;
	unsigned shouldBlockAllEvents : 1;
	unsigned restartingAndWasActiveBeforeRestart : 1;
	unsigned verifyingDeviceUnlockInSAM : 1;
	unsigned isPasscodeViewVisible : 1;
	unsigned isRestricted : 1;
	unsigned overrideAllowsAllTouchLockscreenUIIsShowing : 1;
	unsigned overrideAllowsAllTouchSBMiniAlertIsShowing : 1;
	unsigned overrideAllowsAllTouchCallStateIsChanging : 1;
	unsigned overrideAllowsAllTouchMakingEmergencyCall : 1;
	unsigned overrideIgnoresAllTouchWhitelistedAppNotFound : 1;
	unsigned overrideIgnoresAllTouchVerifyingIntegrity : 1;
	unsigned whitelistedLockscreenUIIsShowing : 1;
	unsigned allowsTouch : 1;
	unsigned allowsLockButton : 1;
	unsigned allowsAppExit : 1;
	unsigned allowsHomeButton : 1;
	unsigned allowsVolumeButtons : 1;
	unsigned allowsRingerSwitch : 1;
	unsigned allowsMotion : 1;
	unsigned allowsAutolock : 1;
	unsigned allowsKeyboardTextInput : 1;
	unsigned allowsProximity : 1;
} SCD_Struct_GA0;

typedef struct __GSEvent* GSEventRef;
