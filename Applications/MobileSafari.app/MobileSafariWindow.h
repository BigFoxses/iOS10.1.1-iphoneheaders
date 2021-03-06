/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@protocol MobileSafariWindowDelegate;
@interface MobileSafariWindow : UIWindow {

	BOOL _safariWindowDelegateRespondsToStatusBarChangedFromHeightToHeight;
	BOOL _safariWindowDelegateRespondsToDidEndAllTouchesAtPoint;
	id<MobileSafariWindowDelegate> _safariWindowDelegate;

}

@property (assign,nonatomic,__weak) id<MobileSafariWindowDelegate> safariWindowDelegate;              //@synthesize safariWindowDelegate=_safariWindowDelegate - In the implementation block
-(void)setSafariWindowDelegate:(id<MobileSafariWindowDelegate>)arg1 ;
-(id<MobileSafariWindowDelegate>)safariWindowDelegate;
-(void)sendEvent:(id)arg1 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
@end

