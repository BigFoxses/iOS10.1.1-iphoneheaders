/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyEditingCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface CNPropertySimpleEditingCell : CNPropertyEditingCell <UITextFieldDelegate> {

	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)prepareForReuse;
-(UITextField *)textField;
-(id)valueView;
-(id)variableConstraints;
-(id)constantConstraints;
-(id)firstResponderItem;
-(void)textFieldChanged:(id)arg1 ;
-(void)updateValueWithPropertyItem:(id)arg1 ;
@end
