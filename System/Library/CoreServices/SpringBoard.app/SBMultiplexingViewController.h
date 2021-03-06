/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SBUISizeObservingViewDelegate.h>
#import <SpringBoard/SBMultiplexedHostingObserver.h>
#import <SpringBoard/_SBMultiplexedHostViewScreenRectObserver.h>

@protocol SBMultiplexedHostingDelegate;
@class NSString, UIView;

@interface SBMultiplexingViewController : UIViewController <SBUISizeObservingViewDelegate, SBMultiplexedHostingObserver, _SBMultiplexedHostViewScreenRectObserver> {

	NSString* _contextHostRequester;
	UIView* _multiplexedHostingView;
	BOOL _hosting;
	id<SBMultiplexedHostingDelegate> _hostingDelegate;
	NSString* _isolationIdentifier;

}

@property (assign,nonatomic,__weak) id<SBMultiplexedHostingDelegate> hostingDelegate;              //@synthesize hostingDelegate=_hostingDelegate - In the implementation block
@property (getter=isHosting,nonatomic,readonly) BOOL hosting;                                      //@synthesize hosting=_hosting - In the implementation block
@property (nonatomic,copy,readonly) NSString * contextHostRequester;                               //@synthesize contextHostRequester=_contextHostRequester - In the implementation block
@property (nonatomic,copy,readonly) NSString * isolationIdentifier;                                //@synthesize isolationIdentifier=_isolationIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mainViewForTouchDelivery;
-(BOOL)wantsToShareTouches;
-(void)willActivateHosting;
-(void)willDeactivateHosting;
-(id)containingScrollView;
-(BOOL)directlyForwardViewSizeChanges;
-(NSString *)contextHostRequester;
-(id)initWithIsolationIdentifier:(id)arg1 ;
-(id<SBMultiplexedHostingDelegate>)hostingDelegate;
-(id)createViewControllerForIsolation;
-(NSString *)isolationIdentifier;
-(CGSize)preferredSizeForHostedView;
-(void)setHostingDelegate:(id<SBMultiplexedHostingDelegate>)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(BOOL)isHosting;
@end

