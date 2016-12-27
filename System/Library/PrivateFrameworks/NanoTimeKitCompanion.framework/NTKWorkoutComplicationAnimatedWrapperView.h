/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NTKComplicationImageView.h>

@class CLKImageProvider, UIImageView, UIColor, NSString;

@interface NTKWorkoutComplicationAnimatedWrapperView : UIView <NTKComplicationImageView> {

	UIImageView* _imageView;
	UIColor* _color;
	BOOL _usesLegibility;
	CLKImageProvider* _imageProvider;
	UIColor* _overrideColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color;                               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL usesLegibility;                           //@synthesize usesLegibility=_usesLegibility - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                       //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)_updateState;
-(CLKImageProvider *)imageProvider;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(UIColor *)overrideColor;
-(BOOL)usesLegibility;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)_updateTint;
-(void)_applyAnimationForPauseState:(BOOL)arg1 ;
-(id)initWithAnimationImages:(id)arg1 ;
@end
