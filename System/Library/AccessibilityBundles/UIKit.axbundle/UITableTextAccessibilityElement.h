/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface UITableTextAccessibilityElement : UIAccessibilityElement {

	id _attributeDelegate;
	SEL _selector;
	id textDelegate;

}

@property (assign,nonatomic,__weak) id textDelegate; 
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)description;
-(id)accessibilityIdentifier;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityLanguage;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)accessibilityActivate;
-(BOOL)_accessibilityIsScannerElement;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityScrollStatus;
-(void)setTextDelegate:(id)arg1 ;
-(void)setAttributeDelegate:(id)arg1 ;
-(id)_accessibilityEquivalenceTag;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(BOOL)_accessibilityIsAwayAlertElement;
-(id)_accessibilityTextViewTextOperationResponder;
-(int)_accessibilityScannerActivateBehavior;
-(id)_accessibilitySpeakThisString;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(int)_accessibilityScanningBehaviorTraits;
-(id)textDelegate;
-(id)_tableViewCellTextDelegate;
-(id)_tableViewCellAttributeDelegate;
-(double)_accessibilityDelayBeforeUpdatingOnActivation;
-(id)attributeDelegate;
@end
