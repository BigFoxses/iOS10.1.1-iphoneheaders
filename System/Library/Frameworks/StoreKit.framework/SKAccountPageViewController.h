/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SKAccountPageViewControllerDelegate, SKUIServiceAccountPageViewController;
@class NSURL, _UIAsyncInvocation, SKRemoteAccountPageViewController, SKInvocationQueueProxy;

@interface SKAccountPageViewController : UIViewController {

	NSURL* _accountURL;
	_UIAsyncInvocation* _cancelRequest;
	id<SKAccountPageViewControllerDelegate> _delegate;
	/*^block*/id _prepareBlock;
	SKRemoteAccountPageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceAccountPageViewController> _serviceProxy;

}

@property (assign,nonatomic) id<SKAccountPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKAccountPageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKAccountPageViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_dismissViewController;
-(void)_requestRemoteViewController;
-(void)_addRemoteView;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithAccountURL:(id)arg1 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
@end
