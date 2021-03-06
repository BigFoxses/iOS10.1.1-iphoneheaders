/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/_NCWidgetViewController_Service_IPC.h>
#import <libobjc.A.dylib/SBUISizeObservingViewDelegate.h>

@protocol OS_dispatch_queue, UIViewControllerAnimatedTransitioning, NCWidgetProviding;
@class UIView, NSObject, NSMutableArray, NSMapTable, UIScrollViewDelayedTouchesBeganGestureRecognizer, UIViewController, NSString;

@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, SBUISizeObservingViewDelegate> {

	UIView* _contentView;
	double _lastRequestedHeight;
	UIEdgeInsets _clientMarginInsets;
	NSObject*<OS_dispatch_queue> _remoteViewControllerProxyQueue;
	id<UIViewControllerAnimatedTransitioning> _transitionController;
	NSMutableArray* _activeTransitionContexts;
	NSMapTable* _wrappedAppearStatesToOpenTransactionIDs;
	UIScrollViewDelayedTouchesBeganGestureRecognizer* _touchDelayGestureRecognizer;
	CGRect _initialBounds;
	struct {
		unsigned implementsPerformUpdateWithCompletionHandler : 1;
		unsigned implementsMarginInsets : 1;
		unsigned implementsActiveDisplayModeDidChange : 1;
	}  _contentProvidingViewControllerFlags;
	UIViewController*<NCWidgetProviding> _contentProvidingViewController;
	NSString* _widgetIdentifier;
	NSString* _containerIdentifier;
	NSMapTable* _activeTransitionContextsByRequestID;
	NSMutableArray* _pendingSizeTransitionUUIDStack;

}

@property (getter=_contentProvidingViewController,nonatomic,retain) UIViewController*<NCWidgetProviding> contentProvidingViewController;              //@synthesize contentProvidingViewController=_contentProvidingViewController - In the implementation block
@property (getter=_widgetIdentifier,nonatomic,copy) NSString * widgetIdentifier;                                                                      //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (getter=_containerIdentifier,nonatomic,copy) NSString * containerIdentifier;                                                                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (getter=_activeTransitionContextsByRequestID,nonatomic,retain) NSMapTable * activeTransitionContextsByRequestID;                            //@synthesize activeTransitionContextsByRequestID=_activeTransitionContextsByRequestID - In the implementation block
@property (getter=_pendingSizeTransitionUUIDStack,nonatomic,readonly) NSMutableArray * pendingSizeTransitionUUIDStack;                                //@synthesize pendingSizeTransitionUUIDStack=_pendingSizeTransitionUUIDStack - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(void)_reduceTransparencyDidChange:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)delayed:(id)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(void)_clientLargestSupportedDisplayModeDidChange;
-(void)_setContentProvidingViewController:(id)arg1 ;
-(id)_widgetIdentifier;
-(long long)_clientLargestSupportedDisplayMode;
-(void)_setActiveDisplayMode:(long long)arg1 requestIdentifier:(id)arg2 force:(BOOL)arg3 ;
-(id)_existingTransitionContextForRequestIdentifier:(id)arg1 ;
-(id)_contentProvidingViewController;
-(void)_enqueueProxyRequest:(/*^block*/id)arg1 ;
-(void)_requestMarginInsets;
-(void)_closeTransactionWithAppearState:(int)arg1 ;
-(id)_transitionContextForRequestIdentifier:(id)arg1 usingAutolayout:(BOOL)arg2 createIfNecessary:(BOOL)arg3 ;
-(id)_customAnimator:(BOOL)arg1 ;
-(double)_effectiveHeightForRequestedHeight:(double)arg1 ;
-(id)_activeTransitionContextsByRequestID;
-(void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(BOOL)arg2 force:(BOOL)arg3 ;
-(double)_clientPreferredContentHeightPermittingAutolayout:(BOOL)arg1 ;
-(void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(BOOL)arg2 ;
-(id)_widgetExtensionContext;
-(id)_pendingSizeTransitionUUIDStack;
-(void)_closeTransactionForActiveDisplayModeChangeWithIdentifier:(id)arg1 ;
-(void)_configureAnimatorForTransitionContext:(id)arg1 ;
-(void)_setMaximumWidth:(double)arg1 forDisplayMode:(long long)arg2 ;
-(void)_encodeLayerTreeToURL:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_performUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setContentProvidingViewController:(UIViewController*<NCWidgetProviding>)arg1 ;
-(void)setActiveTransitionContextsByRequestID:(NSMapTable *)arg1 ;
-(id)_containerIdentifier;
-(void)__viewWillTransitionToSize:(CGSize)arg1 requestIdentifier:(id)arg2 ;
-(void)__prepareForAnimationsForRequestWithIdentifier:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1 ;
-(void)__requestEncodedLayerTreeToURL:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)__performUpdateWithReplyHandler:(/*^block*/id)arg1 ;
-(void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)__setActiveDisplayMode:(long long)arg1 requestIdentifier:(id)arg2 ;
-(void)__setMaximumSize:(CGSize)arg1 forDisplayMode:(long long)arg2 ;
-(void)__closeTransactionForPreferredHeightChangeWithIdentifier:(id)arg1 ;
@end

