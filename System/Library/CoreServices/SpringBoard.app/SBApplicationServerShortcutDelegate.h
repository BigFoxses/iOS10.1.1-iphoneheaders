/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBApplicationServerShortcutDelegate <SBApplicationServerDelegate>
@required
-(void)applicationServer:(id)arg1 client:(id)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 withCompletion:(/*^block*/id)arg5;
-(void)applicationServer:(id)arg1 client:(id)arg2 setDynamicApplicationShortcutItems:(id)arg3 forBundleIdentifier:(id)arg4;

@end
