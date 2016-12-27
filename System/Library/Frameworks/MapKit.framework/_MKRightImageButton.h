/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITapGestureRecognizer, NSArray, _MKUILabel, UIImageView, NSString, UIImage;

@interface _MKRightImageButton : UIControl {

	UITapGestureRecognizer* _gestureRecognizer;
	BOOL _titleConstraintsAdded;
	NSArray* _titleOnlyConstraints;
	NSArray* _titleAndImageConstraints;
	_MKUILabel* _titleLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) _MKUILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(_MKUILabel *)titleLabel;
-(UIImageView *)imageView;
-(id)viewForLastBaselineLayout;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
@end
