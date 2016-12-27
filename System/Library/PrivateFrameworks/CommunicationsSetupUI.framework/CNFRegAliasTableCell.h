/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface CNFRegAliasTableCell : PSTableCell {

	BOOL _hidesDisclosureButton;
	BOOL _hasSpinner;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL hasSpinner;                                //@synthesize hasSpinner=_hasSpinner - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(void)setChecked:(BOOL)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(BOOL)usesStandardBackgroundImage;
-(void)setHasSpinner:(BOOL)arg1 ;
-(void)setHidesDisclosureButton:(BOOL)arg1 ;
-(BOOL)hasSpinner;
-(void)_updateIcon;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
