/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIRotatingAlertControllerDelegate <NSObject>
@optional
-(void)sheet:(id)arg1 presentingViewControllerWillChange:(id)arg2;
-(void)sheet:(id)arg1 presentingViewControllerDidChange:(id)arg2;

@required
-(id)hostViewForSheet:(id)arg1;
-(CGRect*)initialPresentationRectInHostViewForSheet:(id)arg1;
-(CGRect*)presentationRectInHostViewForSheet:(id)arg1;

@end

