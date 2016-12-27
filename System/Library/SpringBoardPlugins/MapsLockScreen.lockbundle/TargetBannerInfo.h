/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBannerSource, SBUIBannerTarget;
@class NSTimer, BannerView, NSMapTable, NSMutableSet;

@interface TargetBannerInfo : NSObject {

	NSTimer* _bannerInterruptionTimer;
	id<SBUIBannerSource> _bannerInterruptionSource;
	id<SBUIBannerTarget> _target;
	BannerView* _displayedBanner;
	NSMapTable* _nextBannerItemsByClass;
	NSMapTable* _lastDismissalOfBannerItemsByClass;
	NSMutableSet* _lastDequeuedBannerClasses;

}

@property (nonatomic,readonly) id<SBUIBannerTarget> target;                               //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) BannerView * displayedBanner;                                //@synthesize displayedBanner=_displayedBanner - In the implementation block
@property (nonatomic,retain) NSMapTable * nextBannerItemsByClass;                         //@synthesize nextBannerItemsByClass=_nextBannerItemsByClass - In the implementation block
@property (nonatomic,retain) NSMapTable * lastDismissalOfBannerItemsByClass;              //@synthesize lastDismissalOfBannerItemsByClass=_lastDismissalOfBannerItemsByClass - In the implementation block
@property (nonatomic,retain) NSMutableSet * lastDequeuedBannerClasses;                    //@synthesize lastDequeuedBannerClasses=_lastDequeuedBannerClasses - In the implementation block
-(void)setLastDismissalOfBannerItemsByClass:(NSMapTable *)arg1 ;
-(void)setDismissalReason:(int)arg1 forItem:(id)arg2 ;
-(void)setDisplayedBanner:(BannerView *)arg1 ;
-(NSMutableSet *)lastDequeuedBannerClasses;
-(void)scheduleForcedDismissForSource:(id)arg1 ;
-(void)bannerInterruptionTimerFired:(id)arg1 ;
-(void)cancelForcedDismiss;
-(void)clearDismissalForItem:(id)arg1 ;
-(void)enqueueBannerItem:(id)arg1 ;
-(id)peekNextBannerItem;
-(void)setNextBannerItemsByClass:(NSMapTable *)arg1 ;
-(NSMapTable *)nextBannerItemsByClass;
-(void)setLastDequeuedBannerClasses:(NSMutableSet *)arg1 ;
-(BannerView *)displayedBanner;
-(id)dequeueNextBannerItem;
-(NSMapTable *)lastDismissalOfBannerItemsByClass;
-(id)debugDescription;
-(id<SBUIBannerTarget>)target;
-(id)initWithTarget:(id)arg1 ;
@end
