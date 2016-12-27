/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUControlPanelCell.h>

@protocol HUControlView;
@class UIView, UILabel, NSArray, NSString;

@interface HUTitleControlCell : HUControlPanelCell {

	UIView*<HUControlView> _controlView;
	UILabel* _titleLabel;
	NSArray* _titleLabelConstraints;
	NSArray* _controlViewConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSArray * titleLabelConstraints;                   //@synthesize titleLabelConstraints=_titleLabelConstraints - In the implementation block
@property (nonatomic,copy) NSArray * controlViewConstraints;                  //@synthesize controlViewConstraints=_controlViewConstraints - In the implementation block
@property (nonatomic,copy) NSString * controlTitle; 
@property (nonatomic,retain) UIView*<HUControlView> controlView;              //@synthesize controlView=_controlView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UIView*<HUControlView>)controlView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSArray *)controlViewConstraints;
-(void)setControlViewConstraints:(NSArray *)arg1 ;
-(void)setControlView:(UIView*<HUControlView>)arg1 ;
-(id)allControlViews;
-(void)setControlTitle:(NSString *)arg1 ;
-(NSArray *)titleLabelConstraints;
-(void)setTitleLabelConstraints:(NSArray *)arg1 ;
-(NSString *)controlTitle;
@end
