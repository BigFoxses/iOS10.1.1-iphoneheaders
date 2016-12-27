/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIButtonBarLayout.h>

@class UIBarButtonItem, UIView, NSLayoutConstraint, UILayoutGuide;

@interface _UIButtonBarItemLayout : _UIButtonBarLayout {

	UIBarButtonItem* _item;
	UIView* _itemView;
	NSLayoutConstraint* _requestedSize;
	NSLayoutConstraint* _maximumAlignmentSize;
	NSLayoutConstraint* _groupSameSize;
	NSLayoutConstraint* _popoverGuideLeading;
	NSLayoutConstraint* _popoverGuideTrailing;
	NSLayoutConstraint* _popoverGuideTop;
	NSLayoutConstraint* _popoverGuideHeight;
	BOOL _useGroupSizing;
	UILayoutGuide* _popoverLayoutGuide;
	/*^block*/id _itemViewGenerator;

}

@property (assign,nonatomic) BOOL useGroupSizing;                               //@synthesize useGroupSizing=_useGroupSizing - In the implementation block
@property (nonatomic,copy) id itemViewGenerator;                                //@synthesize itemViewGenerator=_itemViewGenerator - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * popoverLayoutGuide;              //@synthesize popoverLayoutGuide=_popoverLayoutGuide - In the implementation block
-(id)description;
-(id)_item;
-(BOOL)_shouldBeDirty;
-(void)_configure;
-(void)_addLayoutViews:(id)arg1 ;
-(void)_addLayoutGuides:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2 ;
-(void)_updateItemView;
-(UILayoutGuide *)popoverLayoutGuide;
-(BOOL)useGroupSizing;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(id)itemViewGenerator;
-(void)setItemViewGenerator:(id)arg1 ;
@end
