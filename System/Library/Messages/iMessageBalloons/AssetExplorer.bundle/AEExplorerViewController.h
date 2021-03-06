/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <AssetExplorer/AECameraTileSource.h>
#import <libobjc.A.dylib/PXReusableObjectPoolDelegate.h>
#import <libobjc.A.dylib/PXAssetsSceneDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <libobjc.A.dylib/CAMCameraConfigurationDelegate.h>
#import <libobjc.A.dylib/CAMCameraCaptureDelegate.h>
#import <AssetExplorer/CAMCameraReviewDelegate.h>
#import <AssetExplorer/CAMCameraViewControllerPresentationDelegate.h>
#import <libobjc.A.dylib/PUAssetExplorerReviewScreenViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <AssetExplorer/AEBrowserLayoutDelegate.h>

@protocol AEHostStatisticsManager, UIViewControllerPreviewing;
@class UIViewController, AEPackageTransport, PXPhotoKitAssetsDataSourceManager, PXMediaProvider, NSArray, NSIndexSet, NSMutableIndexSet, PXBasicUIViewTileAnimator, PXUIScrollViewController, PXTilingController, PXAssetsScene, AEProgressViewModel, AECameraTileController, CAMCameraReviewAdapter, AECameraAssetPackageGenerator, UIView, NSMutableSet, PUAssetExplorerReviewScreenViewController, NSString;

@interface AEExplorerViewController : UIViewController <PXChangeObserver, PXTileSource, AECameraTileSource, PXReusableObjectPoolDelegate, PXAssetsSceneDelegate, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXPhotoLibraryUIChangeObserver, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIViewControllerPreviewingDelegate, CAMCameraConfigurationDelegate, CAMCameraCaptureDelegate, CAMCameraReviewDelegate, CAMCameraViewControllerPresentationDelegate, PUAssetExplorerReviewScreenViewControllerDelegate, UIPopoverPresentationControllerDelegate, AEBrowserLayoutDelegate> {

	BOOL __fakeAllCloudAndVideo;
	AEPackageTransport* __packageTransport;
	PXPhotoKitAssetsDataSourceManager* __dataSourceManager;
	PXMediaProvider* __mediaProvider;
	id<AEHostStatisticsManager> __statisticsManager;
	NSArray* __clientGestureRecognizers;
	unsigned long long __options;
	NSIndexSet* __cloudAssetIndexes;
	NSIndexSet* __pendingCloudAssetIndexes;
	NSMutableIndexSet* __recentlyDownloadedAssetIndexes;
	PXBasicUIViewTileAnimator* __tileAnimator;
	PXUIScrollViewController* __scrollViewController;
	PXTilingController* __tilingController;
	PXAssetsScene* __sceneController;
	AEProgressViewModel* __progressModel;
	AECameraTileController* __cameraTileController;
	CAMCameraReviewAdapter* __cameraReviewAdapter;
	AECameraAssetPackageGenerator* __cameraPackageGenerator;
	UIView* __previousSuperview;
	NSMutableSet* __tilesInUse;
	PUAssetExplorerReviewScreenViewController* __reviewController;
	id<UIViewControllerPreviewing> __previewingItem;

}

@property (nonatomic,readonly) AEPackageTransport * _packageTransport;                                                                //@synthesize _packageTransport=__packageTransport - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAssetsDataSourceManager * _dataSourceManager;                                                //@synthesize _dataSourceManager=__dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * _mediaProvider;                                                                      //@synthesize _mediaProvider=__mediaProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<AEHostStatisticsManager> _statisticsManager;                                                 //@synthesize _statisticsManager=__statisticsManager - In the implementation block
@property (readonly) NSArray * _clientGestureRecognizers;                                                                             //@synthesize _clientGestureRecognizers=__clientGestureRecognizers - In the implementation block
@property (nonatomic,readonly) unsigned long long _options;                                                                           //@synthesize _options=__options - In the implementation block
@property (setter=_setCloudAssetIndexes:,nonatomic,retain) NSIndexSet * _cloudAssetIndexes;                                           //@synthesize _cloudAssetIndexes=__cloudAssetIndexes - In the implementation block
@property (setter=_setPendingCloudAssetIndexes:,nonatomic,retain) NSIndexSet * _pendingCloudAssetIndexes;                             //@synthesize _pendingCloudAssetIndexes=__pendingCloudAssetIndexes - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * _recentlyDownloadedAssetIndexes;                                                   //@synthesize _recentlyDownloadedAssetIndexes=__recentlyDownloadedAssetIndexes - In the implementation block
@property (nonatomic,readonly) PXBasicUIViewTileAnimator * _tileAnimator;                                                             //@synthesize _tileAnimator=__tileAnimator - In the implementation block
@property (nonatomic,readonly) PXUIScrollViewController * _scrollViewController;                                                      //@synthesize _scrollViewController=__scrollViewController - In the implementation block
@property (setter=_setTilingController:,nonatomic,retain) PXTilingController * _tilingController;                                     //@synthesize _tilingController=__tilingController - In the implementation block
@property (setter=_setSceneController:,nonatomic,retain) PXAssetsScene * _sceneController;                                            //@synthesize _sceneController=__sceneController - In the implementation block
@property (nonatomic,readonly) AEProgressViewModel * _progressModel;                                                                  //@synthesize _progressModel=__progressModel - In the implementation block
@property (nonatomic,readonly) AECameraTileController * _cameraTileController;                                                        //@synthesize _cameraTileController=__cameraTileController - In the implementation block
@property (nonatomic,readonly) CAMCameraReviewAdapter * _cameraReviewAdapter;                                                         //@synthesize _cameraReviewAdapter=__cameraReviewAdapter - In the implementation block
@property (nonatomic,readonly) AECameraAssetPackageGenerator * _cameraPackageGenerator;                                               //@synthesize _cameraPackageGenerator=__cameraPackageGenerator - In the implementation block
@property (setter=_setPreviousSuperview:,nonatomic,retain) UIView * _previousSuperview;                                               //@synthesize _previousSuperview=__previousSuperview - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _tilesInUse;                                                                            //@synthesize _tilesInUse=__tilesInUse - In the implementation block
@property (setter=_setReviewController:,nonatomic,retain) PUAssetExplorerReviewScreenViewController * _reviewController;              //@synthesize _reviewController=__reviewController - In the implementation block
@property (setter=_setPreviewingItem:,nonatomic,retain) id<UIViewControllerPreviewing> _previewingItem;                               //@synthesize _previewingItem=__previewingItem - In the implementation block
@property (assign,setter=_setFakeAllCloudAndVideo:,nonatomic) BOOL _fakeAllCloudAndVideo;                                             //@synthesize _fakeAllCloudAndVideo=__fakeAllCloudAndVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * cameraParentViewController; 
-(NSIndexSet *)_pendingCloudAssetIndexes;
-(void)ppt_openPhotoLibrary;
-(id)_createNewLayoutForDataSource:(id)arg1 ;
-(BOOL)_shouldEnable3DTouchPreview;
-(id<AEHostStatisticsManager>)_statisticsManager;
-(long long)_layoutStyleForSize:(CGSize)arg1 ;
-(void)associateAsset:(id)arg1 withTile:(void*)arg2 ;
-(void)_setPreviousSuperview:(id)arg1 ;
-(Class)assetsSceneClass;
-(PXAssetsScene *)_sceneController;
-(void)_setReviewController:(id)arg1 ;
-(NSIndexSet *)_cloudAssetIndexes;
-(PUAssetExplorerReviewScreenViewController *)_reviewController;
-(void)_openCameraChevronTapped:(id)arg1 ;
-(void)_presentFullScreenPhotoLibrary:(id)arg1 ;
-(id)_currentDataSource;
-(NSMutableIndexSet *)_recentlyDownloadedAssetIndexes;
-(void)_presentFullScreenCamera;
-(void)_setPendingCloudAssetIndexes:(id)arg1 ;
-(void)_setCloudAssetIndexes:(id)arg1 ;
-(CAMCameraReviewAdapter *)_cameraReviewAdapter;
-(void)_scrollToRevealOpenCamera;
-(void)_dismissFullScreenCamera;
-(void)ensureSubviewForTile:(id)arg1 ;
-(UIViewController *)cameraParentViewController;
-(BOOL)_fakeAllCloudAndVideo;
-(AECameraAssetPackageGenerator *)_cameraPackageGenerator;
-(void)_setFakeAllCloudAndVideo:(BOOL)arg1 ;
-(void)applyExistingGeometryForTile:(id)arg1 ;
-(UIView *)_previousSuperview;
-(NSArray *)_clientGestureRecognizers;
-(void)_setTilingController:(id)arg1 ;
-(void)_setSceneController:(id)arg1 ;
-(BOOL)_isPresentingFullscreenCamera;
-(id)initWithPackageTransport:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 cameraTileController:(id)arg4 statisticsManager:(id)arg5 additionalGestureRecognizers:(id)arg6 options:(unsigned long long)arg7 ;
-(void)handleInProgressPackageGenerator:(id)arg1 ;
-(void)ppt_scrollThumbnailGridWithTestName:(id)arg1 fakeExpensiveBadges:(BOOL)arg2 ;
-(AEProgressViewModel *)_progressModel;
-(BOOL)layout:(id)arg1 shouldShowVideoDecorationAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(void)_presentCameraReviewViewControllerFromAdapter:(id)arg1 fromNavigationController:(id)arg2 ;
-(void)_stagePackageWithLivePhotoContentSuppressed:(id)arg1 ;
-(void)_handleInProgressPackageGenerator:(id)arg1 suppressLivePhotoContent:(BOOL)arg2 ;
-(id)_createCloudResourcesIndexSetWithInitialFetchResult:(id)arg1 ;
-(AEPackageTransport *)_packageTransport;
-(AECameraTileController *)_cameraTileController;
-(BOOL)layout:(id)arg1 shouldShowCloudDecorationAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(id)_selectedAssetUUIDs;
-(id)_createOpenCameraChevronTileIfNecessary;
-(void)_handleTransportStagingUpdateWithDataSource:(id)arg1 ;
-(id)contentAssetReferenceAtPoint:(CGPoint)arg1 outContentFrame:(out CGRect*)arg2 ;
-(void)_configureReviewControllerWithAssetReference:(id)arg1 ;
-(void)_dismissReviewScreenViewController;
-(BOOL)confirmAsset:(id)arg1 matchesView:(id)arg2 alertOnInternal:(BOOL)arg3 ;
-(id)_validateAssetReference:(id)arg1 forScrollViewPoint:(CGPoint)arg2 ;
-(void)_attachGestureRecognizersIfNeeded:(void*)arg1 ;
-(id)_createOpenPhotoLibraryButtonTileWithLayoutStyle:(long long)arg1 ;
-(id)_createOpenCameraButtonTileWithLayoutStyle:(long long)arg1 ;
-(void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg1 suppressLivePhoto:(BOOL)arg2 mediaOrigin:(long long)arg3 ;
-(void)_presentCameraReviewViewControllerFromAdapter:(id)arg1 fromViewController:(id)arg2 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(unsigned long long)_options;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)scrollView;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(PXMediaProvider *)_mediaProvider;
-(void)_setPreviewingItem:(id)arg1 ;
-(id<UIViewControllerPreviewing>)_previewingItem;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(BOOL)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4 ;
-(void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1 ;
-(void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1 ;
-(void)assetExplorerReviewScreenViewController:(id)arg1 didPressDoneWithSelectedAssetUUIDs:(id)arg2 livePhotoDisabledAssetUUIDs:(id)arg3 substituteAssetsByUUID:(id)arg4 ;
-(long long)_currentLayoutStyle;
-(void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4 ;
-(void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4 ;
-(void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5 ;
-(void)reviewViewControllerDidCancelReview:(id)arg1 ;
-(void)reviewViewControllerDidRequestRetake:(id)arg1 ;
-(void)reviewViewController:(id)arg1 didFinishReviewingAssets:(id)arg2 ;
-(void)cameraViewControllerRequestedDismissal:(id)arg1 ;
-(void)_handleAttemptedSelectionToggleOfAssetReference:(id)arg1 cancelIfAlreadySelected:(BOOL)arg2 suppressLivePhotoContent:(BOOL)arg3 ;
-(PXPhotoKitAssetsDataSourceManager *)_dataSourceManager;
-(PXBasicUIViewTileAnimator *)_tileAnimator;
-(PXUIScrollViewController *)_scrollViewController;
-(NSMutableSet *)_tilesInUse;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(PXTilingController *)_tilingController;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2 ;
-(void)assetsScene:(id)arg1 willTransitionToDataSource:(id)arg2 ;
-(void)assetsScene:(id)arg1 didTransitionToDataSource:(id)arg2 ;
@end

