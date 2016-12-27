/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIApplication.h>
#import <MobileSafari/PageLoadTestRunnerDelegate.h>
#import <MobileSafari/BrowserWindowControllerDelegate.h>
#import <MobileSafari/BrowserWindowControllerObserving.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <MobileSafari/MobileSafariWindowDelegate.h>
#import <libobjc.A.dylib/WBDatabaseLockAcquisitorDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol DragInteractionDriver;
@class UIWindow, WBSCloudHistory, ApplicationShortcutController, UIViewController, NSDictionary, MobileSafariWindow, BrowserContainerViewController, DragOverlayViewController, WBSFormAutoFillCorrectionsHistoryObserver, BookmarksDatabaseHealthReporter, WBDatabaseLockAcquisitor, SBSAssertion, BrowserWindowController, TabDocument, NSString, NSArray;

@interface Application : UIApplication <PageLoadTestRunnerDelegate, BrowserWindowControllerDelegate, BrowserWindowControllerObserving, MCProfileConnectionObserver, MobileSafariWindowDelegate, WBDatabaseLockAcquisitorDelegate, UIApplicationDelegate> {

	BOOL _isReadingDefaults;
	BOOL _shouldReadDefaultsOnResume;
	BOOL _isRunningShowBookmarksTest;
	BOOL _startedBookmarksTest;
	BOOL _isRunningCanvasTest;
	BOOL _willEnterSuspendedState;
	BOOL _shouldPrepareTabDocumentForNewUserActivityWhenFinishedLaunching;
	BOOL _finishedLaunching;
	WBSCloudHistory* _cloudHistory;
	BOOL _resigningActive;
	BOOL _shouldAnimateOpeningExternalURL;
	long long _currentKeyboardModifierFlags;
	ApplicationShortcutController* _shortcutController;
	UIViewController* _obfuscatedScreenViewController;
	NSDictionary* _openURLPayload;
	MobileSafariWindow* _window;
	BrowserContainerViewController* _containerViewController;
	DragOverlayViewController* _dragOverlayViewController;
	UIWindow* _dragWindow;
	id<DragInteractionDriver> _dragInteractionDriver;
	WBSFormAutoFillCorrectionsHistoryObserver* _formAutoFillCorrectionsHistoryObserver;
	BookmarksDatabaseHealthReporter* _bookmarksDatabaseHealthReporter;
	unsigned long long _bookmarksDatabaseBackgroundTaskIdentifier;
	WBDatabaseLockAcquisitor* _bookmarksDatabaseBackgroundTaskLockAcquisitor;
	SBSAssertion* _wallpaperSuspensionAssertion;
	BrowserWindowController* _browserWindowController;
	TabDocument* _tabDocumentPendingUserActivityPayload;

}

@property (nonatomic,readonly) id testAnimationCompletionHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BrowserWindowController * browserWindowController;                                              //@synthesize browserWindowController=_browserWindowController - In the implementation block
@property (nonatomic,readonly) NSArray * browserControllers; 
@property (getter=isPrivateBrowsingEnabledInAnyWindow,nonatomic,readonly) BOOL privateBrowsingEnabledInAnyWindow; 
@property (nonatomic,retain) WBSCloudHistory * cloudHistory;                                                                   //@synthesize cloudHistory=_cloudHistory - In the implementation block
@property (assign,nonatomic,__weak) TabDocument * tabDocumentPendingUserActivityPayload;                                       //@synthesize tabDocumentPendingUserActivityPayload=_tabDocumentPendingUserActivityPayload - In the implementation block
@property (nonatomic,readonly) ApplicationShortcutController * shortcutController; 
@property (nonatomic,retain) UIWindow * window; 
+(unsigned long long)systemMemorySize;
+(void)commandLineTestOption:(int)arg1 arg:(const char*)arg2 ;
+(id)sharedTestRunner;
+(void)postTestNotificationName:(id)arg1 object:(id)arg2 ;
+(void)initialize;
+(id)sharedApplication;
-(NSArray *)browserControllers;
-(void)_saveBrowserState;
-(ApplicationShortcutController *)shortcutController;
-(void)_suspendOrResumeWallpaperAnimationIfNeeded;
-(void)_readDefaults;
-(void)_dismissObfuscatedScreenViewController;
-(id)_browserControllerForExternalNavigation;
-(BOOL)isPrivateBrowsingEnabledInAnyWindow;
-(void)_presentObfuscatedScreenViewController;
-(void)_saveNSURLCacheToDiskInBackground:(BOOL)arg1 ;
-(void)clearReaderViewsExceptMultiplePageReader:(BOOL)arg1 ;
-(void)_performBookmarksDatabaseTasksInBackground;
-(void)_reportBookmarksDatabaseHealth;
-(id)_openURLInNewTab:(id)arg1 withOptions:(id)arg2 ;
-(void)_prepareTabDocumentForNewUserActivity;
-(void)setTabDocumentPendingUserActivityPayload:(TabDocument *)arg1 ;
-(id)_focusedBrowserController;
-(void)_reloadSearchEngines;
-(void)_managedProfileConfigurationDidUpdate;
-(unsigned long long)_numberOfTabsForPrivateBrowsing:(BOOL)arg1 ;
-(unsigned long long)_maximumTabCount;
-(void)auditTabCount;
-(void)updateTabCount;
-(void)updateDragInteractionWithPoint:(CGPoint)arg1 ;
-(void)_addDefaultsObserver;
-(void)_appleKeyboardsChanged:(id)arg1 ;
-(void)_updateCloudFeatureAvailability;
-(void)startCommandLineTest;
-(void)_reloadContainerViewController;
-(void)_removeDefaultsObserver;
-(void)_getBookmarksDataClassEnabledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)safariWindow:(id)arg1 statusBarChangedFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(long long)resolveUnspecifiedPositionForBrowserWindowController:(id)arg1 ;
-(void)windowController:(id)arg1 didAddWindow:(id)arg2 withSourceInfo:(id)arg3 ;
-(void)windowController:(id)arg1 didRemoveWindow:(id)arg2 ;
-(void)safariWindow:(id)arg1 didEndAllTouchesAtPoint:(CGPoint)arg2 ;
-(BOOL)shouldReportForegroundTabCrash;
-(BOOL)canAddNewTabForPrivateBrowsing:(BOOL)arg1 ;
-(BOOL)canBeginNewDragInteraction;
-(void)beginDragInteractionWithDragContext:(id)arg1 ;
-(void)endDragInteractionWithPoint:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(BrowserWindowController *)browserWindowController;
-(WBSCloudHistory *)cloudHistory;
-(void)setCloudHistory:(WBSCloudHistory *)arg1 ;
-(TabDocument *)tabDocumentPendingUserActivityPayload;
-(id)_browserControllerForApplicationTesting;
-(BOOL)prepareBookmarksTest;
-(BOOL)startCanvasTest:(id)arg1 ;
-(void)prepareTabViewBringUpTest;
-(void)prepareTabViewRotationTest;
-(void)prepareTabViewOpenTest;
-(void)prepareTabViewSelectTest;
-(void)prepareTabViewCloseTest;
-(void)startKeyboardSplitAndMergeTest;
-(void)startKeyboardBringupTest;
-(void)startKeyboardRotationTest;
-(void)runTabOverviewTest;
-(void)runBookmarksViewTest;
-(void)runSplitViewTest;
-(void)loadBlankPageforKeyboardTests;
-(void)_prepareTabViewBringUpTest;
-(void)loadTabsForTesting:(unsigned long long)arg1 presentTabView:(BOOL)arg2 ;
-(void)startTabViewBringUpTest;
-(void)_prepareTabViewOpenTest;
-(void)startTabViewOpenTest;
-(void)_prepareTabViewSelectTest;
-(void)startTabViewSelectTest;
-(void)_prepareTabViewCloseTest;
-(void)startTabViewCloseTest;
-(void)_prepareTabViewRotationTest;
-(void)startTabViewRotationTest;
-(void)startedPurpleTest;
-(void)_pollCanvasTest:(id)arg1 ;
-(void)finishedCanvasTestWithURL:(id)arg1 forTabDocument:(id)arg2 ;
-(void)finishedPurpleTest:(id)arg1 ;
-(BOOL)overrideBrowserStateForTestNamed:(id)arg1 existingUUID:(id)arg2 ;
-(void)_runTabOverviewScrollPerfTest;
-(void)_runTabOverviewPresentingAndDismissalTest;
-(void)startBookmarksTest;
-(void)_populateInMemoryBookmarksDBForTestNamed:(id)arg1 ;
-(void)setTestAnimationCompletionHandler:(id)arg1 ;
-(id)_switchToScrollViewForTestNamed:(id)arg1 ;
-(BOOL)disableRestoreTabState;
-(void)checkExtendedLaunchPageLoad:(id)arg1 forTabDocument:(id)arg2 ;
-(id)_numberOption:(id)arg1 ;
-(void)failedPurpleTestWithError:(id)arg1 ;
-(void)finishedBookmarksTest;
-(id)testAnimationCompletionHandler;
-(BOOL)isRunningShowBookmarksTest;
-(BOOL)isRunningCanvasTest;
-(BOOL)didStartBookmarksTest;
-(void)pageLoadTestRunnerFinished:(id)arg1 ;
-(UIWindow *)window;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)_setHandlingURL:(BOOL)arg1 url:(id)arg2 ;
-(void)_applicationOpenURL:(id)arg1 payload:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(id)_extendLaunchTest;
-(void)applicationWillTerminate;
-(void)applicationOpenURL:(id)arg1 ;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleKeyUIEvent:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_applicationWillSuspend:(id)arg1 ;
-(void)databaseLockAcquisitor:(id)arg1 acquiredLock:(BOOL)arg2 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)saveChangesToCloudHistoryStore;
@end
