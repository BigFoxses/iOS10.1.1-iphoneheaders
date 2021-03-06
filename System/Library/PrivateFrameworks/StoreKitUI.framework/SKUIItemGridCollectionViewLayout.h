/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class UIColor;

@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout {

	UIColor* _evenColor;
	long long _numberOfColumns;
	UIColor* _oddColor;

}

@property (nonatomic,copy) UIColor * evenRowBackgroundColor;              //@synthesize evenColor=_evenColor - In the implementation block
@property (nonatomic,copy) UIColor * oddRowBackgroundColor;               //@synthesize oddColor=_oddColor - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;                   //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
+(Class)layoutAttributesClass;
-(id)init;
-(long long)numberOfColumns;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)setNumberOfColumns:(long long)arg1 ;
-(UIColor *)evenRowBackgroundColor;
-(void)setEvenRowBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)oddRowBackgroundColor;
-(void)setOddRowBackgroundColor:(UIColor *)arg1 ;
@end

