/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol SBVoiceOverTouchLabelElementAlertItemDelegate;
@class NSString;

@interface SBVoiceOverTouchLabelElementAlertItem : SBAlertItem <UITextFieldDelegate, UIAlertViewDelegate> {

	NSString* _initialValue;
	id<SBVoiceOverTouchLabelElementAlertItemDelegate> _voiceOverAlertItemDelegate;

}

@property (nonatomic,retain) NSString * initialValue;                                                                          //@synthesize initialValue=_initialValue - In the implementation block
@property (assign,nonatomic,__weak) id<SBVoiceOverTouchLabelElementAlertItemDelegate> voiceOverAlertItemDelegate;              //@synthesize voiceOverAlertItemDelegate=_voiceOverAlertItemDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVoiceOverAlertItemDelegate:(id<SBVoiceOverTouchLabelElementAlertItemDelegate>)arg1 ;
-(id<SBVoiceOverTouchLabelElementAlertItemDelegate>)voiceOverAlertItemDelegate;
-(NSString *)initialValue;
-(void)setInitialValue:(NSString *)arg1 ;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)willShowInAwayItems;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
@end

