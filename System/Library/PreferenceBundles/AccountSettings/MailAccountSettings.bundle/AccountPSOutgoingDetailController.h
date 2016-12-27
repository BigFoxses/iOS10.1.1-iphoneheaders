/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailAccountSettings/AccountPSDetailControllerBase.h>

@class MailAccount;

@interface AccountPSOutgoingDetailController : AccountPSDetailControllerBase {

	MailAccount* _viewingAccount;
	MailAccount* _primaryForAccount;
	unsigned _isPrimary : 1;
	unsigned _isDynamic : 1;
	unsigned _isCarrierAccount : 1;
	unsigned _enableAsAlternate : 1;
	unsigned _disableAsDynamic : 1;

}
+(id)outgoingGroupSpecifiers;
+(id)outgoingSpecifiers;
+(BOOL)shouldPresentAsModalSheet;
-(void)processValidationResult:(int)arg1 ;
-(void)_reallyDeleteOutgoingAccount;
-(void)_saveAccounts;
-(void)validateForNewAccount;
-(void)_bottomDescriptionWithSpecifier:(id)arg1 ;
-(void)_resetDeliveryAccountsForViewingAccount;
-(id)authSchemeValuesForSpecifier:(id)arg1 ;
-(void)_finishedAccountSetup;
-(void)handleValidAccount:(id)arg1 ;
-(void)handleInvalidAccount:(id)arg1 ;
-(void)validateForExistingAccount;
-(void)didFinishSaveAccountAnywaysSheetWithResult:(BOOL)arg1 ;
-(id)specifiersForExistingAccount;
-(void)deleteOutgoingAccount;
-(void)setEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)isEnabled:(id)arg1 ;
-(id)specifiersForNewAccount;
-(id)authSchemeTitlesForSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend;
-(void)viewDidLoad;
-(Class)accountClass;
-(void)saveAndDismiss;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)propertyValueChanged:(id)arg1 ;
-(void)_updateDoneButton;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)haveEnoughValues;
-(id)specifiers;
@end
