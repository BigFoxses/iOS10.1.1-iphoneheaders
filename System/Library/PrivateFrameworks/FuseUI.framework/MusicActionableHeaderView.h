/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MusicActionableHeaderViewDelegate;
@class MPUFontDescriptor, MusicImageAccessoryButton, NSString, UIColor;

@interface MusicActionableHeaderView : UIView {

	MPUFontDescriptor* _headerFontDescriptor;
	MusicImageAccessoryButton* _imageAccessoryButton;
	BOOL _actionable;
	NSString* _headerTitle;
	UIColor* _headerTitleColor;
	id<MusicActionableHeaderViewDelegate> _delegate;
	SCD_Struct_Mu21 _actionableHeaderMetrics;

}

@property (assign,nonatomic) SCD_Struct_Mu21 actionableHeaderMetrics;                            //@synthesize actionableHeaderMetrics=_actionableHeaderMetrics - In the implementation block
@property (assign,getter=isActionable,nonatomic) BOOL actionable;                                //@synthesize actionable=_actionable - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                                               //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) UIColor * headerTitleColor;                                         //@synthesize headerTitleColor=_headerTitleColor - In the implementation block
@property (assign,nonatomic,__weak) id<MusicActionableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)heightForTraitCollection:(id)arg1 withActionableHeaderMetrics:(SCD_Struct_Mu21)arg2 ;
+(SCD_Struct_Mu21)defaultActionableHeaderMetrics;
+(double)heightForTraitCollection:(id)arg1 ;
+(SCD_Struct_Mu21)actionableHeaderMetricsForContainerViewController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MusicActionableHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MusicActionableHeaderViewDelegate>)delegate;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(BOOL)isActionable;
-(void)music_inheritedLayoutInsetsDidChange;
-(void)setActionableHeaderMetrics:(SCD_Struct_Mu21)arg1 ;
-(void)setActionable:(BOOL)arg1 ;
-(void)setHeaderTitleColor:(UIColor *)arg1 ;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(SCD_Struct_Mu21)actionableHeaderMetrics;
-(void)_updateHeaderFontDescriptor;
-(void)_handleButtonTapped:(id)arg1 ;
-(void)_headerTitleColorDidChange;
-(void)_updateHeaderAttributedText;
-(UIColor *)headerTitleColor;
@end
