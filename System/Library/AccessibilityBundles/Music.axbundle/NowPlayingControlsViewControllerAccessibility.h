/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/Music.axbundle/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/__NowPlayingControlsViewControllerAccessibility_super.h>

@interface NowPlayingControlsViewControllerAccessibility : __NowPlayingControlsViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)_axCommandCenter;
-(void)_axMediaRemoteCommandChanged:(id)arg1 ;
-(id)_axShuffleButtonValue;
-(id)_axRepeatButtonValue;
-(void)_axLikedStateCommandChanged:(id)arg1 ;
-(id)_axPlayer;
-(id)_axLikedBannedValueForState:(long long)arg1 ;
-(BOOL)axMediaCommandNotificationRegistered;
-(void)axSetMediaCommandNotificationRegistered:(BOOL)arg1 ;
-(BOOL)axAudioRouteNotificationRegistered;
-(void)_axAudioRouteNameCommandChanged:(id)arg1 ;
-(void)axSetAudioRouteNotificationRegistered:(BOOL)arg1 ;
-(BOOL)axLikedStateNotificationRegistered;
-(void)axSetLikedStateNotificationRegistered:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(void)_accessibilityLoadAccessibilityInformation;
@end
