/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSTimer, NSMutableSet, NSString, NSSet;

@interface WBSMultiRoundAutoFillManager : NSObject {

	unsigned long long _autoFillAttemptTrigger;
	NSDictionary* _formMetadataFromPreviousAutoFillAttempt;
	BOOL _userDidInteractWithForm;
	unsigned long long _numberOfFollowUpAutoFillAttempts;
	NSTimer* _timerForFollowUpAutoFill;
	NSMutableSet* _controlUniqueIDToBeIgnoredByFollowUpAutoFill;
	NSString* _addressSetLabelUsedDuringFirstAutoFillPass;
	NSSet* _addressBookPropertiesThatCanBeFilled;

}

@property (nonatomic,copy) NSString * addressSetLabelUsedDuringFirstAutoFillPass;              //@synthesize addressSetLabelUsedDuringFirstAutoFillPass=_addressSetLabelUsedDuringFirstAutoFillPass - In the implementation block
@property (nonatomic,copy) NSSet * addressBookPropertiesThatCanBeFilled;                       //@synthesize addressBookPropertiesThatCanBeFilled=_addressBookPropertiesThatCanBeFilled - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)currentAutoFillAttemptTrigger;
-(BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1 ;
-(NSString *)addressSetLabelUsedDuringFirstAutoFillPass;
-(void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1 ;
-(NSSet *)addressBookPropertiesThatCanBeFilled;
-(void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(/*^block*/id)arg2 ;
-(void)didEditFormText;
-(BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)setAddressBookPropertiesThatCanBeFilled:(NSSet *)arg1 ;
-(void)setAddressSetLabelUsedDuringFirstAutoFillPass:(NSString *)arg1 ;
@end

