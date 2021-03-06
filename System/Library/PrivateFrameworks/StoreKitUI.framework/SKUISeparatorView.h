/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SKUISeparatorView : UIView {

	UIColor* _color1;
	UIColor* _color2;
	long long _separatorStyle;

}

@property (nonatomic,copy) UIColor * color1;                        //@synthesize color1=_color1 - In the implementation block
@property (nonatomic,copy) UIColor * color2;                        //@synthesize color2=_color2 - In the implementation block
@property (assign,nonatomic) long long separatorStyle;              //@synthesize separatorStyle=_separatorStyle - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(long long)separatorStyle;
-(void)setColor1:(UIColor *)arg1 ;
-(void)setColor2:(UIColor *)arg1 ;
-(UIColor *)color1;
-(UIColor *)color2;
@end

