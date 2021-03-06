/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class NSArray, UIView;

@interface SearchUITableRowCardSectionView : SearchUICardSectionView {

	BOOL _isCompactRow;
	NSArray* _itemWidths;
	NSArray* _itemViews;
	UIView* _rowContainerView;
	long long _firstTrailingIndex;

}

@property (retain) NSArray * itemWidths;                      //@synthesize itemWidths=_itemWidths - In the implementation block
@property (retain) NSArray * itemViews;                       //@synthesize itemViews=_itemViews - In the implementation block
@property (assign) BOOL isCompactRow;                         //@synthesize isCompactRow=_isCompactRow - In the implementation block
@property (retain) UIView * rowContainerView;                 //@synthesize rowContainerView=_rowContainerView - In the implementation block
@property (assign) long long firstTrailingIndex;              //@synthesize firstTrailingIndex=_firstTrailingIndex - In the implementation block
+(double)leadingSectionSpacingBetweenView1:(id)arg1 view2:(id)arg2 ;
+(double)trailingSectionSpacingBetweenView1:(id)arg1 view2:(id)arg2 totalViewsInSection:(long long)arg3 ;
+(Class)classForSection:(id)arg1 ;
+(id)labelForView:(id)arg1 ;
-(double)fontSize;
-(void)setFirstTrailingIndex:(long long)arg1 ;
-(long long)firstTrailingIndex;
-(void)makeAndSizeViewsWithFirstTrailingIndex:(long long)arg1 isCompactRow:(BOOL)arg2 ;
-(NSArray *)itemViews;
-(BOOL)shouldAllowOtherViewsToOverlap:(id)arg1 ;
-(NSArray *)itemWidths;
-(void)setupWithLayoutInfo:(id)arg1 ;
-(double)labelBottomBaselineSpacing;
-(double)labelTopBaselineSpacing;
-(BOOL)labelsAreVibrant;
-(BOOL)isCompactRow;
-(void)containerDidLayoutSubviews;
-(void)setIsCompactRow:(BOOL)arg1 ;
-(void)setRowContainerView:(UIView *)arg1 ;
-(BOOL)_isBaseballScoreboardLike;
-(id)addImageViewWithImage:(id)arg1 ;
-(id)addLabelWithFormattedText:(id)arg1 ;
-(void)setItemViews:(NSArray *)arg1 ;
-(void)setItemWidths:(NSArray *)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 forView:(id)arg2 ;
-(id)viewForColumn:(unsigned long long)arg1 ;
-(UIView *)rowContainerView;
@end

