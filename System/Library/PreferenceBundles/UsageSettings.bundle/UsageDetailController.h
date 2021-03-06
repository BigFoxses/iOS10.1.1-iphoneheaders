/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>

@class NSMutableDictionary, NSMutableArray, UsageStorageController, NSDictionary;

@interface UsageDetailController : PSEditableListController {

	NSMutableDictionary* _media;
	BOOL _showingAll;
	NSMutableArray* _documentsGroup;
	UsageStorageController* _storageController;

}

@property (nonatomic,readonly) NSDictionary * mediaCache;                                    //@synthesize media=_media - In the implementation block
@property (assign,nonatomic,__weak) UsageStorageController * storageController;              //@synthesize storageController=_storageController - In the implementation block
+(BOOL)hasMediaForGroups:(id)arg1 ;
+(id)mpKeyTranslations;
+(float)totalSizeForGroups:(id)arg1 ;
+(void)setupSpecifier:(id)arg1 forMediaGroups:(id)arg2 ;
+(id)mediaGroups;
-(NSDictionary *)mediaCache;
-(id)documentsAndDataSpecifiers;
-(void)setStorageController:(UsageStorageController *)arg1 ;
-(id)copyMediaSpecifiers;
-(BOOL)removeMediaEntry:(id)arg1 inSection:(long long)arg2 ;
-(void)confirmAppDeletion;
-(BOOL)isAppController;
-(id)dynamicSize:(id)arg1 ;
-(void)deleteApp;
-(BOOL)updateSizesAfterDeletingMediaKind:(id)arg1 deletedSection:(BOOL)arg2 shouldPop:(BOOL)arg3 ;
-(void)showMore:(id)arg1 ;
-(UsageStorageController *)storageController;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(id)size:(id)arg1 ;
-(BOOL)hasMedia;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
@end

