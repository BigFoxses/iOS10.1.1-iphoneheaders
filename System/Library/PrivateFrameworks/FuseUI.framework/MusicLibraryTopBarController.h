/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FuseUI/FuseUI-Structs.h>
@class UIView, UIViewController;

@interface MusicLibraryTopBarController : NSObject {

	BOOL _displayingLocalLibrary;
	BOOL _showCloudMediaEnabled;
	UIView* _topBarContainerView;
	UIEdgeInsets _topBarContentInsetAdditions;
	UIViewController* _topBarViewController;
	UIViewController* _targetViewController;

}

@property (nonatomic,__weak,readonly) UIViewController * targetViewController;              //@synthesize targetViewController=_targetViewController - In the implementation block
-(void)dealloc;
-(void)_musicDefaultsDidChangeNotification:(id)arg1 ;
-(void)_musicUserInterfaceDefaultLibraryIsLocalLibraryDidChangeNotification:(id)arg1 ;
-(void)_updateTopBarViewFrame;
-(void)_updateTopBarContentInsetAdditions;
-(void)_reloadTopBarViewController;
-(id)_newTopBarViewController;
-(id)initWithTargetViewController:(id)arg1 ;
-(void)targetViewControllerViewContentScrollViewDidChangeContentInset;
-(void)targetViewControllerViewDidLayoutSubviews;
-(void)targetViewControllerViewDidLoad;
-(void)targetViewControllerViewPreferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)targetViewControllerViewWillDealloc;
-(UIViewController *)targetViewController;
@end
