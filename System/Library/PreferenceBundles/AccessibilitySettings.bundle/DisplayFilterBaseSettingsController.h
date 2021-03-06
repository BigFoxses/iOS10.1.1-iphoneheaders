/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface DisplayFilterBaseSettingsController : PSListController

@property (assign,nonatomic) BOOL globalFilterEnabled; 
-(void)updateSystemFilter;
-(unsigned long long)filterForCellIdentifier:(id)arg1 ;
-(void)setGlobalFilterEnabled:(BOOL)arg1 ;
-(unsigned long long)_filterTypeForRow:(long long)arg1 ;
-(BOOL)globalFilterEnabled;
-(void)accessibilitySettingsDidChange;
-(void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2 ;
-(unsigned long long)filterCategory;
-(unsigned long long)selectedFilter;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
@end

