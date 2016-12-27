/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GuidedAccessManager : NSObject {

	id _notificationToken;

}

@property (nonatomic,retain) id notificationToken;              //@synthesize notificationToken=_notificationToken - In the implementation block
+(void)initializeMonitoring;
-(id)notificationToken;
-(void)setNotificationToken:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_loadRequiredBundles;
-(BOOL)applicationIsEntitledForUnmanagedASAM;
-(void)loadRequiredBundlesForUnmanagedASAM;
-(BOOL)_isValidClientApp;
-(void)_loadSpringboardServerBundle;
-(void)_loadClientBundle;
@end
