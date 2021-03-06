/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITextViewDelegate.h>

@class UILabel, NSString;

@interface EKExpandingTextView : UITextView <UITextViewDelegate> {

	UILabel* _placeholderLabel;
	BOOL _allowEnclosingViewScroll;
	CGSize _previousIntrinsicContentSize;

}

@property (nonatomic,copy) NSString * placeholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)automaticallySelectedOverlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(BOOL)_shouldScrollEnclosingScrollView;
-(void)_updatePlaceholder;
@end

