/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIInterfaceActionVisualStyle, NSArray, NSLayoutConstraint, _UIInterfaceActionSeparatableSequenceView;

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {

	long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
	UIInterfaceActionVisualStyle* _visualStyle;
	NSArray* _arrangedActionRepresentationViews;
	long long _actionLayoutAxis;
	NSLayoutConstraint* _minimumHeightConstraint;
	_UIInterfaceActionSeparatableSequenceView* _separatedContentSequenceView;

}

@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;                                          //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionSeparatableSequenceView * separatedContentSequenceView;              //@synthesize separatedContentSequenceView=_separatedContentSequenceView - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                                              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) NSArray * arrangedActionRepresentationViews;                                             //@synthesize arrangedActionRepresentationViews=_arrangedActionRepresentationViews - In the implementation block
@property (assign,nonatomic) long long actionLayoutAxis;                                                              //@synthesize actionLayoutAxis=_actionLayoutAxis - In the implementation block
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)_notifyDidScroll;
-(double)_contentFitCanScrollThreshold;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)_applyVisualStyle;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)reloadDisplayedContentVisualStyle;
-(id)initWithVisualStyle:(id)arg1 ;
-(double)fittingWidthForLayoutAxis:(long long)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(long long)actionLayoutAxis;
-(void)_loadDefaultSizingConstraints;
-(void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
-(void)_disableSeparatedContentSequenceViewToFit;
-(void)_enableSeparatedContentSequenceViewToFit;
-(void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
-(void)_updateMinimumHeightConstraint;
-(NSArray *)arrangedActionRepresentationViews;
-(double)_minimumNumberOfRowsRequiredVisible;
-(BOOL)_isHorizontalLayout;
-(void)_applyVisualStyleToSeparatedContentSequenceView;
-(void)setActionLayoutAxis:(long long)arg1 ;
-(void)setArrangedActionRepresentationViews:(NSArray *)arg1 ;
-(_UIInterfaceActionSeparatableSequenceView *)separatedContentSequenceView;
@end
