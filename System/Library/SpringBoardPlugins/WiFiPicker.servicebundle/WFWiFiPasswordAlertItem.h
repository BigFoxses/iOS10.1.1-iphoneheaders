/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol WFWiFiAlertItemDelegate;
@class NSString, UITextField;

@interface WFWiFiPasswordAlertItem : SBAlertItem {

	id<WFWiFiAlertItemDelegate> _delegate;
	NSString* _name;
	BOOL _btStyle;
	UITextField* _textField;

}

@property (assign,nonatomic) id<WFWiFiAlertItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithNetworkName:(id)arg1 ;
-(void)setBluetoothStyle:(BOOL)arg1 ;
-(void)setDelegate:(id<WFWiFiAlertItemDelegate>)arg1 ;
-(void)dealloc;
-(id<WFWiFiAlertItemDelegate>)delegate;
-(void)returnKeyPressed:(id)arg1 ;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dismiss:(int)arg1 ;
-(BOOL)supportsAlertController;
@end

