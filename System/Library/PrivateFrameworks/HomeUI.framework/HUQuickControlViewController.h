/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <libobjc.A.dylib/HUQuickControlContainerViewDelegate.h>
#import <libobjc.A.dylib/HUQuickControlControllerCoordinatorDelegate.h>
#import <libobjc.A.dylib/HUQuickControlInteractionHost.h>
#import <libobjc.A.dylib/HUPresentationDelegateHost.h>

@protocol HUPresentationDelegate, NSCopying, HUQuickControlViewControllerDelegate, HUQuickControlPresentableView;
@class HFItem, HMHome, UITapGestureRecognizer, HUAnimationApplier, HUQuickControlControllerCoordinator, HUQuickControlContainerView, UIView, HUQuickControlController, HUQuickControlInteractionCoordinator, NSString;

@interface HUQuickControlViewController : UIViewController <HUPresentationDelegate, HUQuickControlContainerViewDelegate, HUQuickControlControllerCoordinatorDelegate, HUQuickControlInteractionHost, HUPresentationDelegateHost> {

	BOOL _presentedDetailView;
	id<HUPresentationDelegate> presentationDelegate;
	HFItem*<NSCopying> _item;
	HMHome* _home;
	id<HUQuickControlViewControllerDelegate> _delegate;
	UITapGestureRecognizer* _dismissGestureRecognizer;
	HUAnimationApplier* _presentationApplier;
	unsigned long long _presentationState;
	HUQuickControlControllerCoordinator* _controlControllerCoordinator;
	HUQuickControlContainerView* _controlContainerView;
	UIView*<HUQuickControlPresentableView> _controlView;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UITapGestureRecognizer * dismissGestureRecognizer;                                  //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) HUAnimationApplier * presentationApplier;                                           //@synthesize presentationApplier=_presentationApplier - In the implementation block
@property (assign,nonatomic) unsigned long long presentationState;                                               //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                  //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) HUQuickControlControllerCoordinator * controlControllerCoordinator;                 //@synthesize controlControllerCoordinator=_controlControllerCoordinator - In the implementation block
@property (nonatomic,readonly) HUQuickControlController * activeControlController; 
@property (nonatomic,readonly) HUQuickControlInteractionCoordinator * activeInteractionCoordinator; 
@property (nonatomic,retain) HUQuickControlContainerView * controlContainerView;                                 //@synthesize controlContainerView=_controlContainerView - In the implementation block
@property (nonatomic,retain) UIView*<HUQuickControlPresentableView> controlView;                                 //@synthesize controlView=_controlView - In the implementation block
@property (assign,nonatomic) BOOL presentedDetailView;                                                           //@synthesize presentedDetailView=_presentedDetailView - In the implementation block
@property (nonatomic,readonly) HFItem*<NSCopying> item;                                                          //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                    //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUPresentationDelegate> presentationDelegate; 
+(id)_easeOutTimingFunction;
+(id)_blurAnimationSettingsForPresenting:(BOOL)arg1 ;
+(id)_controlScaleAnimationSettingsForPresenting:(BOOL)arg1 ;
+(id)_controlAlphaAnimationSettingsForPresenting:(BOOL)arg1 ;
+(id)_detailChromeAnimationSettingsForPresenting:(BOOL)arg1 ;
+(id)_sourceViewTransitionAnimationSettingsForPresenting:(BOOL)arg1 ;
+(id)_statusBarHidingAnimationSettingsForPresenting:(BOOL)arg1 ;
-(void)setDelegate:(id<HUQuickControlViewControllerDelegate>)arg1 ;
-(id<HUQuickControlViewControllerDelegate>)delegate;
-(HFItem*<NSCopying>)item;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(void)viewDidLoad;
-(UIView*<HUQuickControlPresentableView>)controlView;
-(id<HUPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<HUPresentationDelegate>)arg1 ;
-(HMHome *)home;
-(unsigned long long)presentationState;
-(void)setControlView:(UIView*<HUQuickControlPresentableView>)arg1 ;
-(BOOL)containerView:(id)arg1 hasControlOfType:(unsigned long long)arg2 ;
-(id)containerView:(id)arg1 createControlViewForControlType:(unsigned long long)arg2 ;
-(id)containerView:(id)arg1 titleForControlType:(unsigned long long)arg2 ;
-(void)detailsButtonPressedInContainerView:(id)arg1 ;
-(void)containerView:(id)arg1 didSelectControlType:(unsigned long long)arg2 ;
-(CGAffineTransform)sourceViewTransformForPresentationProgress:(double)arg1 ;
-(void)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2 ;
-(void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2 ;
-(void)interactionCoordinatorWantsDismissal:(id)arg1 ;
-(void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(BOOL)arg3 ;
-(void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3 ;
-(void)controllerCoordinator:(id)arg1 didUpdateReachability:(BOOL)arg2 ;
-(void)setControlControllerCoordinator:(HUQuickControlControllerCoordinator *)arg1 ;
-(HUQuickControlControllerCoordinator *)controlControllerCoordinator;
-(void)_updateUserInteractionEnabledForActiveInteractionCoordinator;
-(HUQuickControlController *)activeControlController;
-(void)setDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)dismissGestureRecognizer;
-(void)_handleDismissGesture:(id)arg1 ;
-(BOOL)presentedDetailView;
-(void)setPresentedDetailView:(BOOL)arg1 ;
-(id)_prepareDetailViewController;
-(HUQuickControlContainerView *)controlContainerView;
-(HUQuickControlInteractionCoordinator *)activeInteractionCoordinator;
-(BOOL)isControlPresentedOrPresenting;
-(void)_createControlContainerViewWithSourceRect:(CGRect)arg1 ;
-(void)_performTransitionToPresentationState:(unsigned long long)arg1 animated:(BOOL)arg2 initialProgress:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_dismissControlAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(HUAnimationApplier *)presentationApplier;
-(void)setPresentationApplier:(HUAnimationApplier *)arg1 ;
-(void)_controlDidDismiss;
-(void)setControlContainerView:(HUQuickControlContainerView *)arg1 ;
-(void)_updateIconDescriptor;
-(void)_updateControlStatusText;
-(void)_updateControlReachability;
-(id)_controlControllerOfType:(unsigned long long)arg1 ;
-(void)_presentDetailViewController;
-(void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2 ;
-(void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1 ;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(void)presentControlAnimatedFromSourceRect:(CGRect)arg1 ;
-(BOOL)isControlDismissedOrDismissing;
-(void)dismissControlAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginReceivingTouchesWithGestureRecognizer:(id)arg1 ;
-(void)setPresentationState:(unsigned long long)arg1 ;
@end

