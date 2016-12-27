/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKSynopsisViewDelegate <NSObject>
@optional
-(void)synopsisViewDidEnd:(id)arg1;
-(void)synopsisViewDidBegin:(id)arg1;
-(void)synopsisViewUpdated:(id)arg1 withProgress:(double)arg2;
-(BOOL)shouldShowSynopsisView;
-(void)synopsisViewWillBegin:(id)arg1;

@required
-(id)visibleWidgets;
-(void)synopsisView:(id)arg1 didSelectItem:(id)arg2;

@end
