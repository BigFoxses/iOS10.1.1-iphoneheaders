/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCollectionViewCell.h>
#import <SpringBoard/SBUIBannerView.h>

@protocol SBStarkSessionConfiguring;
@class SBBannerContextView, UIImageView, NSString;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView> {

	SBBannerContextView* _contextView;
	id<SBStarkSessionConfiguring> _starkSessionConfiguration;
	UIImageView* _dropShadowImageView;

}

@property (nonatomic,retain) id<SBStarkSessionConfiguring> starkSessionConfiguration;              //@synthesize starkSessionConfiguration=_starkSessionConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bannerContext;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(BOOL)shouldBorrowScreen;
-(void)setStarkSessionConfiguration:(id<SBStarkSessionConfiguring>)arg1 ;
-(void)setBannerContext:(id)arg1 ;
-(void)noteDidDismiss;
-(id<SBStarkSessionConfiguring>)starkSessionConfiguration;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)prepareForReuse;
-(BOOL)_disableRasterizeInAnimations;
@end

