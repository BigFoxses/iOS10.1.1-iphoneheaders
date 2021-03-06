/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class PSSpecifier, NSMutableArray;

@interface NPTOBridgeSettingsController : BPSNotificationAppController {

	PSSpecifier* _amountGroupSpecifier;
	NSMutableArray* _appGroupSpecifiers;
	double _lastDeviceGB;
	double _lastDeviceGBRetrieved;
	id _syncedAlbumIdentifierPreferenceObserver;

}
-(BOOL)_companionShowsAlerts;
-(void)syncedAlbumChanged;
-(id)amount:(id)arg1 ;
-(id)albumTitle:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)reloadSpecifiers;
-(BOOL)suppressAllMirrorSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)localizedPaneTitle;
-(id)applicationBundleIdentifier;
@end

