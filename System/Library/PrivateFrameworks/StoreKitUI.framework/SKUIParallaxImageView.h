/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageView.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>

@class SKUIImageView, NSString;

@interface SKUIParallaxImageView : SKUIImageView <SKUIPerspectiveView> {

	UIEdgeInsets _imagePadding;
	CGSize _imageSize;
	SKUIImageView* _innerImageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(CGSize)imageSize;
-(void)setPlaceholder:(id)arg1 ;
-(id)placeholder;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)_updateInnerImageView;
-(void)setImagePadding:(UIEdgeInsets)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end
