/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface StorePasswordSettingsController : PSListController {

	BOOL _ignoreAccountStoreChangedNotification;

}
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(void)_setPurchasesPasswordSetting:(id)arg1 ;
-(void)_setFreeDownloadsRequirePasswordEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_freeDownloadsRequirePasswordEnabled;
-(void)_updateSpecifierValues;
-(void)_updateAccountPasswordSettings:(id)arg1 ;
-(id)specifiers;
@end
