/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/General/CompanionDockSettings.bundle/CompanionDockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <CompanionDockSettings/CDSAppDataProviderDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSMutableArray, NSDictionary, NPSManager, NSArray, NSString;

@interface CDSDockSettingsViewController : PSEditableListController <CDSAppDataProviderDelegate, MCProfileConnectionObserver> {

	NSMutableArray* _groupSpecifiers;
	NSDictionary* _apps;
	NSMutableArray* _activeBundleIDs;
	NSMutableArray* _inactiveBundleIDs;
	NPSManager* _syncManager;
	NSArray* _appDataProviders;
	long long _maximumActiveBundleIDs;

}

@property (nonatomic,retain) NSMutableArray * groupSpecifiers;                //@synthesize groupSpecifiers=_groupSpecifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * apps;                             //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeBundleIDs;                //@synthesize activeBundleIDs=_activeBundleIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * inactiveBundleIDs;              //@synthesize inactiveBundleIDs=_inactiveBundleIDs - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                        //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) NSArray * appDataProviders;                      //@synthesize appDataProviders=_appDataProviders - In the implementation block
@property (assign,nonatomic) long long maximumActiveBundleIDs;                //@synthesize maximumActiveBundleIDs=_maximumActiveBundleIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadAppsWithCompletion:(/*^block*/id)arg1 ;
-(void)_setActiveState:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setAppDataProviders:(NSArray *)arg1 ;
-(NSMutableArray *)inactiveBundleIDs;
-(long long)_indexOfAppWithBundleID:(id)arg1 ;
-(void)_settingsDidChange;
-(id)_activeStateForSpecifier:(id)arg1 ;
-(void)dataProviderDidChange:(id)arg1 ;
-(BOOL)_isBundleIDRemoved:(id)arg1 ;
-(void)_loadDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareSpecifiers;
-(void)setMaximumActiveBundleIDs:(long long)arg1 ;
-(NSArray *)appDataProviders;
-(long long)_indexForNthApp:(long long)arg1 withActiveState:(BOOL)arg2 ;
-(void)setInactiveBundleIDs:(NSMutableArray *)arg1 ;
-(BOOL)_isAppActiveWithBundleID:(id)arg1 ;
-(void)setActiveBundleIDs:(NSMutableArray *)arg1 ;
-(unsigned long long)_indexForAppWhenDeactivated:(id)arg1 ;
-(BOOL)_hasMaximumNumberOfActiveApps;
-(void)_showLimitReached:(id)arg1 ;
-(void)_showAlertWithTitle:(id)arg1 message:(id)arg2 specifier:(id)arg3 ;
-(id)_loadActiveBundleIDsFromAccessor:(id)arg1 ;
-(NSMutableArray *)activeBundleIDs;
-(void)_setActiveState:(BOOL)arg1 forSpecifier:(id)arg2 updateTable:(BOOL)arg3 ;
-(id)_tableIndexPathForAppWhenDeactivated:(id)arg1 ;
-(long long)_loadMaximumActiveAppsFromAccessor:(id)arg1 ;
-(void)setGroupSpecifiers:(NSMutableArray *)arg1 ;
-(long long)maximumActiveBundleIDs;
-(id)init;
-(void)dealloc;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSMutableArray *)groupSpecifiers;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(NSDictionary *)apps;
-(void)setApps:(NSDictionary *)arg1 ;
-(BOOL)_hasSettings;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(void)_saveSettings;
-(id)specifiers;
@end

