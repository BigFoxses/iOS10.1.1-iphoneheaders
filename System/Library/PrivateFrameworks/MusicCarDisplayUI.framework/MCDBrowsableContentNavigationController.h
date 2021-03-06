/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <libobjc.A.dylib/MCDPCContainerDelegate.h>

@class UITabBarController, AVExternalDevice, MCDPCModel, NSString, UIButton, MCDPCContainer;

@interface MCDBrowsableContentNavigationController : UITabBarController <UITabBarControllerDelegate, MCDPCContainerDelegate> {

	BOOL _hasCarScreen;
	BOOL _didFinishInitialLoad;
	BOOL _visible;
	BOOL _deferReload;
	UITabBarController* _tabBarController;
	UITabBarController* _hostTabBarController;
	AVExternalDevice* _externalDevice;
	MCDPCModel* _model;
	NSString* _bundleID;
	UIButton* _nowPlayingButton;
	MCDPCContainer* _container;

}

@property (nonatomic,retain) UITabBarController * tabBarController;                         //@synthesize tabBarController=_tabBarController - In the implementation block
@property (assign,nonatomic,__weak) UITabBarController * hostTabBarController;              //@synthesize hostTabBarController=_hostTabBarController - In the implementation block
@property (nonatomic,retain) AVExternalDevice * externalDevice;                             //@synthesize externalDevice=_externalDevice - In the implementation block
@property (nonatomic,retain) MCDPCModel * model;                                            //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) UIButton * nowPlayingButton;                                   //@synthesize nowPlayingButton=_nowPlayingButton - In the implementation block
@property (assign,nonatomic) BOOL hasCarScreen;                                             //@synthesize hasCarScreen=_hasCarScreen - In the implementation block
@property (nonatomic,retain) MCDPCContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialLoad;                                     //@synthesize didFinishInitialLoad=_didFinishInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL visible;                                                  //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL deferReload;                                              //@synthesize deferReload=_deferReload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)visible;
-(MCDPCContainer *)container;
-(void)setContainer:(MCDPCContainer *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(UITabBarController *)tabBarController;
-(void)setViewControllers:(id)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(MCDPCModel *)model;
-(AVExternalDevice *)externalDevice;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(void)setModel:(MCDPCModel *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)_nowPlayingDidChange:(id)arg1 ;
-(void)_updateNowPlayingButtonVisibility;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(void)container:(id)arg1 didInvalidateIndicies:(id)arg2 ;
-(id)initWithBundleID:(id)arg1 model:(id)arg2 ;
-(void)reloadTabs;
-(UIButton *)nowPlayingButton;
-(UITabBarController *)hostTabBarController;
-(void)setHostTabBarController:(UITabBarController *)arg1 ;
-(void)updateTitleAndTabBarItemsAtIndexes:(id)arg1 ;
-(void)_loadAllHostTabs;
-(void)setDeferReload:(BOOL)arg1 ;
-(id)_hostTabAtIndex:(unsigned long long)arg1 dummyTab:(BOOL)arg2 ;
-(BOOL)deferReload;
-(void)setTabBarController:(UITabBarController *)arg1 ;
-(void)setNowPlayingButton:(UIButton *)arg1 ;
-(BOOL)hasCarScreen;
-(void)setHasCarScreen:(BOOL)arg1 ;
-(BOOL)didFinishInitialLoad;
-(void)setDidFinishInitialLoad:(BOOL)arg1 ;
@end

