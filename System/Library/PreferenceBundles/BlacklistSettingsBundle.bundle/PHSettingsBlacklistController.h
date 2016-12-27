/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/BlacklistSettingsBundle.bundle/BlacklistSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>

@class ABPeoplePickerNavigationController, PSSpecifier, NSString;

@interface PHSettingsBlacklistController : PSListController <ABPeoplePickerNavigationControllerDelegate> {

	ABPeoplePickerNavigationController* _peoplePicker;
	PSSpecifier* _addNewSpecifier;
	long long _specifierStartIndex;
	BOOL _editing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_editDoneButtonTapped:(id)arg1 ;
-(void)_showPeoplePicker:(id)arg1 ;
-(void)_updateEditDoneButton;
-(void)blockPerson:(void*)arg1 ;
-(void)dismissPeoplePicker;
-(void)_rulesChanged:(id)arg1 ;
-(void)_updateForEditingState;
-(void)_ruleTapped:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(id)_specifierForRowIndex:(long long)arg1 ;
-(id)specifiers;
@end
