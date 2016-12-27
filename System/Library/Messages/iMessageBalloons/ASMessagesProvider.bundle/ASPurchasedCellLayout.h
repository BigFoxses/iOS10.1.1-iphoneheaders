/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIButton, SKUICellScrollView, SKUIFocusedTouchGestureRecognizer, NSString, _ASPurchasedCellContentView, UIView;

@interface ASPurchasedCellLayout : SKUIItemCellLayout <UIScrollViewDelegate> {

	UIButton* _actionButton;
	SKUICellScrollView* _editScrollView;
	SKUIFocusedTouchGestureRecognizer* _touchCaptureRecognizer;
	BOOL _isNew;
	NSString* _subtitle;
	NSString* _subtitle2;
	NSString* _title;
	_ASPurchasedCellContentView* _cellContentView;
	UIView* _isNewView;

}

@property (nonatomic,retain) _ASPurchasedCellContentView * cellContentView;              //@synthesize cellContentView=_cellContentView - In the implementation block
@property (nonatomic,retain) UIView * isNewView;                                         //@synthesize isNewView=_isNewView - In the implementation block
@property (nonatomic,copy) NSString * actionButtonTitle; 
@property (assign,nonatomic) BOOL allowsEditing; 
@property (assign,nonatomic) BOOL isNew;                                                 //@synthesize isNew=_isNew - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * subtitle2;                                         //@synthesize subtitle2=_subtitle2 - In the implementation block
@property (nonatomic,copy) NSString * restrictionsText; 
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_removeTouchCaptureRecognizer;
-(void)_addTouchCaptureRecognizer;
-(NSString *)restrictionsText;
-(void)setRestrictionsText:(NSString *)arg1 ;
-(void)setCellContentView:(_ASPurchasedCellContentView *)arg1 ;
-(void)setSubtitle2:(NSString *)arg1 ;
-(void)setRestrictionsTextWithItem:(id)arg1 clientContext:(id)arg2 ;
-(UIView *)isNewView;
-(_ASPurchasedCellContentView *)cellContentView;
-(void)setIsNewView:(UIView *)arg1 ;
-(void)_fixItemOfferButtonViewHierarchy;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(NSString *)title;
-(void)prepareForReuse;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setIsNew:(BOOL)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(BOOL)isNew;
-(void)setItemOffer:(id)arg1 ;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutForItemOfferChange;
-(void)_actionButtonAction:(id)arg1 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(void)setIconImage:(id)arg1 ;
-(NSString *)subtitle2;
@end
