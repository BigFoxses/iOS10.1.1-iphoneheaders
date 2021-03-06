/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABFMFActionButtonsDelegate.h>

@class ABUnknownPersonViewController, UIButton, NSString;

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate> {

	ABUnknownPersonViewController* _upvc;
	UIButton* _messageButton;
	UIButton* _facetimeButton;
	UIButton* _callButton;

}

@property (assign,nonatomic) void* displayedPerson; 
@property (nonatomic,readonly) BOOL hasTelephonyCapability; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)hasTelephonyCapability;
-(void*)displayedPerson;
-(void)showFMFMessageButton:(BOOL)arg1 withAction:(id)arg2 ;
-(void)showFMFFacetimeButton:(BOOL)arg1 withAction:(id)arg2 ;
-(void)showFMFCallButton:(BOOL)arg1 withAction:(id)arg2 ;
-(id)initWithMessageButton:(id)arg1 facetimeButton:(id)arg2 callButton:(id)arg3 ;
-(void)setDisplayedPerson:(void*)arg1 ;
@end

