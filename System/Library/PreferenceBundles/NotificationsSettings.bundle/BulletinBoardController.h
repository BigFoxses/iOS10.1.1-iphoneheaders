/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/NotificationsSettings.bundle/NotificationsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <NotificationsSettings/BulletinBoardAppDetailControllerDelegate.h>
#import <NotificationsSettings/SortOrderSelectionViewControllerDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, PSSpecifier, NSDictionary, NSString;

@interface BulletinBoardController : PSListController <BulletinBoardAppDetailControllerDelegate, SortOrderSelectionViewControllerDelegate> {

	long long _orderRule;
	NSObject*<OS_dispatch_semaphore> _loadSem;
	NSObject*<OS_dispatch_semaphore> _sectionOrderRuleSem;
	PSSpecifier* _groupByAppSwitchSpecifier;
	long long _recentsOrderRule;
	BOOL _loadingFromBBGateway;
	BOOL _loadingSectionOrderFromBBGateway;
	BOOL _telephonyDevice;
	PSSpecifier* _emptyCell;
	NSDictionary* _urlResourceDictionary;

}

@property (nonatomic,retain) NSDictionary * urlResourceDictionary;              //@synthesize urlResourceDictionary=_urlResourceDictionary - In the implementation block
@property (assign,nonatomic) BOOL telephonyDevice;                              //@synthesize telephonyDevice=_telephonyDevice - In the implementation block
@property (nonatomic,retain) PSSpecifier * emptyCell;                           //@synthesize emptyCell=_emptyCell - In the implementation block
@property (assign) BOOL loadingFromBBGateway;                                   //@synthesize loadingFromBBGateway=_loadingFromBBGateway - In the implementation block
@property (assign) BOOL loadingSectionOrderFromBBGateway;                       //@synthesize loadingSectionOrderFromBBGateway=_loadingSectionOrderFromBBGateway - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_filterSuppressedSections:(id)arg1 ;
-(void)setGroupByApp:(id)arg1 specifier:(id)arg2 ;
-(void)appDetailControllerWillDisappear:(id)arg1 ;
-(BOOL)loadingSectionOrderFromBBGateway;
-(void)_addRegionalAlertGroupToSpecifiers:(id)arg1 ;
-(void)setLoadingSectionOrderFromBBGateway:(BOOL)arg1 ;
-(void)_toggleGroupByAppSwitchVisibleForRule:(long long)arg1 animated:(BOOL)arg2 ;
-(void)sortOrderSelectionViewControllerWillDisappear:(id)arg1 ;
-(void)sortOrderSelectionViewController:(id)arg1 updatedSortOrderState:(long long)arg2 ;
-(void)sortOrderSelectionViewController:(id)arg1 updatedSections:(id)arg2 ;
-(void)_loadSections;
-(void)setEmptyCell:(PSSpecifier *)arg1 ;
-(void)setLoadingFromBBGateway:(BOOL)arg1 ;
-(BOOL)telephonyDevice;
-(id)_alphabetizedSpecifiersFrom:(id)arg1 ;
-(id)_sectionIDs;
-(id)sortOrderType:(id)arg1 ;
-(void)_loadSectionOrderRule;
-(id)sectionsOrderedByInOutState:(id)arg1 ;
-(NSDictionary *)urlResourceDictionary;
-(id)groupByApp:(id)arg1 ;
-(void)_clearSections;
-(void)setCmasAlertState:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_reallyLoadSections:(id)arg1 ;
-(PSSpecifier *)emptyCell;
-(id)cmasAlertsValue:(id)arg1 ;
-(id)_sortedSections:(id)arg1 ;
-(id)_sectionDescriptions;
-(id)_sectionUIDescriptions;
-(void)setUrlResourceDictionary:(NSDictionary *)arg1 ;
-(BOOL)loadingFromBBGateway;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)setDesiredVerticalContentOffset:(float)arg1 ;
-(void)setTelephonyDevice:(BOOL)arg1 ;
-(void)_reloadSections;
-(void)profileNotification:(id)arg1 ;
-(id)specifiers;
@end

