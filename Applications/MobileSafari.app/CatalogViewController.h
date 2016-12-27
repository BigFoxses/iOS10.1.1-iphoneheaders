/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileSafari/CompletionItemActionHandler.h>
#import <MobileSafari/CompletionListDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <MobileSafari/UnifiedFieldDelegate.h>
#import <MobileSafari/UniversalSearchFeedbackDelegate.h>
#import <MobileSafari/UniversalSearchFirstTimeExperienceViewControllerDelegate.h>
#import <MobileSafari/SKStoreProductViewControllerDelegatePrivate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol CatalogViewControllerDelegate, CompletionItem;
@class BrowserController, CompletionListTableViewController, CompletionsAndFavoritesViewController, UniversalSearchFirstTimeExperienceViewController, UIPopoverPresentationController, CompletionDetailViewController, CompletionList, NavigationBar, BookmarksNavigationController, UIWindow, UniversalSearchSession, UnifiedField, UIView, NSString;

@interface CatalogViewController : UIViewController <CompletionItemActionHandler, CompletionListDelegate, UITableViewDataSource, UITableViewDelegate, UnifiedFieldDelegate, UniversalSearchFeedbackDelegate, UniversalSearchFirstTimeExperienceViewControllerDelegate, SKStoreProductViewControllerDelegatePrivate, UIPopoverPresentationControllerDelegate> {

	BrowserController* _browserController;
	CompletionListTableViewController* _completionTableController;
	CompletionsAndFavoritesViewController* _completionsAndFavoritesController;
	UniversalSearchFirstTimeExperienceViewController* _firstTimeExperienceViewController;
	unsigned long long _lastTopHitMatchLength;
	UIPopoverPresentationController* _popoverPresentationController;
	BOOL _dismissingPopover;
	BOOL _completionTableViewStyleUpdated;
	CompletionDetailViewController* _detailViewController;
	BOOL _completionTableIsReloading;
	BOOL _usesPopoverStyleForFavorites;
	BOOL _transitioningToNewSizeClass;
	BOOL _showingCompletions;
	CompletionList* _completionList;
	id<CatalogViewControllerDelegate> _delegate;
	NavigationBar* _navigationBar;
	BookmarksNavigationController* _bookmarksNavigationController;
	UIWindow* _detailWindow;
	UniversalSearchSession* _parsecSearchSession;
	id<CompletionItem> _lastTopHitMatch;
	UnifiedField* _textField;
	UIEdgeInsets _obscuredInsets;

}

@property (nonatomic,retain) UniversalSearchSession * parsecSearchSession;                                       //@synthesize parsecSearchSession=_parsecSearchSession - In the implementation block
@property (nonatomic,retain) id<CompletionItem> lastTopHitMatch;                                                 //@synthesize lastTopHitMatch=_lastTopHitMatch - In the implementation block
@property (nonatomic,retain) UnifiedField * textField;                                                           //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) CompletionList * completionList;                                                    //@synthesize completionList=_completionList - In the implementation block
@property (assign,nonatomic,__weak) id<CatalogViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NavigationBar * navigationBar;                                                      //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic) UIEdgeInsets obscuredInsets;                                                        //@synthesize obscuredInsets=_obscuredInsets - In the implementation block
@property (assign,nonatomic) BOOL usesPopoverStyleForFavorites;                                                  //@synthesize usesPopoverStyleForFavorites=_usesPopoverStyleForFavorites - In the implementation block
@property (nonatomic,readonly) BOOL popoverIsShowing; 
@property (nonatomic,readonly) BOOL needsTransparentBackground; 
@property (nonatomic,readonly) BOOL isShowingUniversalSearchFirstTimeExperience; 
@property (nonatomic,readonly) UIView * favoritesView; 
@property (nonatomic,retain) NSString * queryString; 
@property (nonatomic,readonly) BookmarksNavigationController * bookmarksNavigationController;                    //@synthesize bookmarksNavigationController=_bookmarksNavigationController - In the implementation block
@property (nonatomic,retain) UIWindow * detailWindow;                                                            //@synthesize detailWindow=_detailWindow - In the implementation block
@property (assign,getter=isTransitioningToNewSizeClass,nonatomic) BOOL transitioningToNewSizeClass;              //@synthesize transitioningToNewSizeClass=_transitioningToNewSizeClass - In the implementation block
@property (assign,getter=isShowingCompletions,nonatomic) BOOL showingCompletions;                                //@synthesize showingCompletions=_showingCompletions - In the implementation block
@property (getter=isShowingCompletionDetail,nonatomic,readonly) BOOL showingCompletionDetail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)updateParsecEnabled;
+(void)initialize;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)isShowingCompletionDetail;
-(BookmarksNavigationController *)bookmarksNavigationController;
-(void)loadFavoritesList;
-(id)browserController;
-(BOOL)isShowingCompletions;
-(void)setTransitioningToNewSizeClass:(BOOL)arg1 ;
-(void)setShowingCompletions:(BOOL)arg1 ;
-(BOOL)isShowingUniversalSearchFirstTimeExperience;
-(UIWindow *)detailWindow;
-(void)setDetailWindow:(UIWindow *)arg1 ;
-(void)dismissCompletionsForSizeClassTransition;
-(void)showUniversalSearchFirstTimeExperienceIfNotShowing;
-(BOOL)usesPopoverStyleForFavorites;
-(void)resetFavorites;
-(id)initWithDelegate:(id)arg1 bookmarksNavigationController:(id)arg2 browserController:(id)arg3 ;
-(void)setUsesPopoverStyleForFavorites:(BOOL)arg1 ;
-(void)setCompletionList:(CompletionList *)arg1 ;
-(void)stopCompleting;
-(UIView *)favoritesView;
-(void)dismissCompletionDetailWindowAndResumeEditingIfNeeded:(BOOL)arg1 ;
-(CompletionList *)completionList;
-(void)prepareToTogglePrivateBrowsing:(BOOL)arg1 ;
-(id)snapshotImageWithSize:(CGSize)arg1 ;
-(void)cancelUnifiedFieldSearch;
-(void)updatePopoverWidth;
-(void)goToURL:(id)arg1 ;
-(BOOL)popoverIsShowing;
-(void)displayPopover;
-(void)presentDetail:(id)arg1 ;
-(void)resumeSearchWithQuery:(id)arg1 ;
-(void)goToURLString:(id)arg1 ;
-(void)feedbackButtonWasTappedWithProblemURL:(id)arg1 ;
-(void)unifiedField:(id)arg1 didEndEditingWithParsecTopHit:(id)arg2 ;
-(void)unifiedField:(id)arg1 didEndEditingWithAddress:(id)arg2 ;
-(void)unifiedField:(id)arg1 didEndEditingWithSearch:(id)arg2 ;
-(BOOL)unifiedField:(id)arg1 shouldWaitForTopHitForText:(id)arg2 ;
-(id)unifiedField:(id)arg1 topHitForText:(id)arg2 ;
-(void)unifiedFieldReflectedItemDidChange:(id)arg1 ;
-(void)unifiedField:(id)arg1 registerKeyCommandsUsingBlock:(/*^block*/id)arg2 ;
-(BOOL)unifiedField:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 ;
-(void)didInteractWithUniversalSearchFirstTimeExperienceViewController:(id)arg1 ;
-(void)completionList:(id)arg1 topHitDidBecomeReadyForString:(id)arg2 ;
-(void)completionListDidUpdate:(id)arg1 forQuery:(id)arg2 ;
-(id)_favoritesGridView;
-(void)_clearParsecSearchSession;
-(void)_beginParsecSessionIfNeeded;
-(void)_parsecEnabledDidChange:(id)arg1 ;
-(BOOL)needsTransparentBackground;
-(void)_ensureCompletionListAndParsecSession;
-(void)_textFieldEditingChanged;
-(void)_presentPopoverWithViewController:(id)arg1 ;
-(void)_popoverDismissCompletion;
-(void)_showCompletionsInPopover;
-(void)_reloadCompletionTable;
-(UIEdgeInsets)_obscuredInsetsAdjustedForLayoutDirection;
-(void)_setShowingCompletions:(BOOL)arg1 popoverDismissalReason:(long long)arg2 ;
-(void)_updateCompletionTableViewStyleIfNeeded;
-(void)_dismissPopoverAnimated:(BOOL)arg1 dismissalReason:(long long)arg2 ;
-(void)_embedCompletionTableControllerIfNeeded;
-(void)_dismissUniversalSearchFirstTimeExperience:(id)arg1 dismissalReason:(long long)arg2 ;
-(void)_setTextField:(id)arg1 ;
-(id)_completionItemAtIndexPath:(id)arg1 ;
-(void)_logTopHitWasChosen:(BOOL)arg1 ;
-(void)_generateVisibleResultsFeedbackForIndexPaths:(id)arg1 ;
-(void)_selectedCompletionItemAtIndexPath:(id)arg1 ;
-(void)_unifiedFieldDownKey:(id)arg1 ;
-(void)_unifiedFieldUpKey:(id)arg1 ;
-(void)_unifiedFieldReturnKey:(id)arg1 ;
-(void)_unifiedFieldTab:(id)arg1 ;
-(double)_statusBarAdjustmentHeightForSnapshotting;
-(void)dismissCompletions;
-(void)didCancelUniversalSearchFirstTimeExperienceViewController:(id)arg1 ;
-(BOOL)shouldShareSnapshotImage;
-(UIEdgeInsets)obscuredInsets;
-(BOOL)isTransitioningToNewSizeClass;
-(id<CompletionItem>)lastTopHitMatch;
-(void)setLastTopHitMatch:(id<CompletionItem>)arg1 ;
-(void)setDelegate:(id<CatalogViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<CatalogViewControllerDelegate>)delegate;
-(NavigationBar *)navigationBar;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)setNavigationBar:(NavigationBar *)arg1 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)resume;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(UnifiedField *)textField;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)search:(id)arg1 ;
-(void)popoverPresentationControllerWillDismissPopover:(id)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(UniversalSearchSession *)parsecSearchSession;
-(void)setParsecSearchSession:(UniversalSearchSession *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setObscuredInsets:(UIEdgeInsets)arg1 ;
-(void)updateBackgroundColor;
-(void)setTextField:(UnifiedField *)arg1 ;
-(void)firstTimeExperienceContinueButtonPressed;
-(void)findOnPage;
@end
