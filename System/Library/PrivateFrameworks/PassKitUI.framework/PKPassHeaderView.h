/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol PKPassHeaderViewDelegate, PKPassLibraryDataProvider;
@class PKRemoteDataAccessor, UIView, UIImageView, UILabel, PKPass, PKPassView, UIColor;

@interface PKPassHeaderView : UIView {

	PKRemoteDataAccessor* _remoteDataAccessor;
	UIView* _passMaskView;
	UIImageView* _maskShadow;
	UILabel* _title;
	UILabel* _type;
	UILabel* _modificationDate;
	BOOL _largeStyle;
	BOOL _showModificationDate;
	PKPass* _pass;
	PKPassView* _passView;
	unsigned long long _suppressedContent;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	id<PKPassHeaderViewDelegate> _delegate;
	id<PKPassLibraryDataProvider> _passLibraryOverride;

}

@property (nonatomic,readonly) PKPass * pass;                                                //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPassView * passView;                                        //@synthesize passView=_passView - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedContent;                           //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign,getter=isLargeStyle,nonatomic) BOOL largeStyle;                            //@synthesize largeStyle=_largeStyle - In the implementation block
@property (assign,nonatomic) BOOL showModificationDate;                                      //@synthesize showModificationDate=_showModificationDate - In the implementation block
@property (nonatomic,retain) UIColor * primaryTextColor;                                     //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                                   //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassHeaderViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<PKPassLibraryDataProvider> passLibraryOverride;              //@synthesize passLibraryOverride=_passLibraryOverride - In the implementation block
-(void)layoutSubviews;
-(void)setDelegate:(id<PKPassHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPassHeaderViewDelegate>)delegate;
-(id)_primaryTextColor;
-(id)_secondaryTextColor;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(void)_updateContent;
-(PKPass *)pass;
-(PKPassView *)passView;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(unsigned long long)suppressedContent;
-(void)setLargeStyle:(BOOL)arg1 ;
-(void)setShowModificationDate:(BOOL)arg1 ;
-(void)updateShadow:(double)arg1 ;
-(CGSize)passViewSizeForHeight:(double)arg1 ;
-(void)updateModifiedDate;
-(void)_passLibraryDidChange:(id)arg1 ;
-(SCD_Struct_PK16)passSizeInfoForHeight:(double)arg1 ;
-(BOOL)isLargeStyle;
-(BOOL)showModificationDate;
-(id<PKPassLibraryDataProvider>)passLibraryOverride;
-(void)setPassLibraryOverride:(id<PKPassLibraryDataProvider>)arg1 ;
@end
