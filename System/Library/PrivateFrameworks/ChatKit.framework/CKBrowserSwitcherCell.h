/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IMBalloonPlugin, UIView, NSString;

@interface CKBrowserSwitcherCell : UICollectionViewCell {

	BOOL _usingFallbackSnapshot;
	IMBalloonPlugin* _plugin;
	UIView* _browserSnapshotView;
	UIView* _extensionInterruptedView;
	NSString* _snapshotCacheKey;

}

@property (nonatomic,retain) UIView * browserSnapshotView;                                           //@synthesize browserSnapshotView=_browserSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * extensionInterruptedView;                                      //@synthesize extensionInterruptedView=_extensionInterruptedView - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * plugin;                                               //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) NSString * snapshotCacheKey;                                            //@synthesize snapshotCacheKey=_snapshotCacheKey - In the implementation block
@property (assign,getter=isUsingFallbackSnapshot,nonatomic) BOOL usingFallbackSnapshot;              //@synthesize usingFallbackSnapshot=_usingFallbackSnapshot - In the implementation block
+(id)identifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)prepareForReuse;
-(IMBalloonPlugin *)plugin;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(void)_handleBrowserSnapshotDidChange:(id)arg1 ;
-(void)setSnapshotCacheKey:(NSString *)arg1 ;
-(void)_updateSnapshotView;
-(void)resetSnapshotView;
-(void)setBrowserSnapshotView:(UIView *)arg1 ;
-(UIView *)extensionInterruptedView;
-(void)setExtensionInterruptedView:(UIView *)arg1 ;
-(UIView *)browserSnapshotView;
-(NSString *)snapshotCacheKey;
-(void)setUsingFallbackSnapshot:(BOOL)arg1 ;
-(BOOL)isUsingFallbackSnapshot;
-(void)setPlugin:(id)arg1 withSnapshotCacheKey:(id)arg2 ;
-(void)showExtensionInterruptedView;
@end

