/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UpNextWidget/UpNextWidget.BlendedView.h>

@class UIColor;

@interface UpNextWidget.ColorBarView : UpNextWidget.BlendedView {

	 cornerRadius;
	 color;

}

@property (assign,nonatomic) double cornerRadius; 
@property (retain,nonatomic) UIColor * color; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

