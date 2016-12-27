/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/AssetExplorer.bundle/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <AssetExplorer/AECameraTilePresentationDelegate.h>
#import <AssetExplorer/AETileLayoutInfo.h>

@protocol AECameraTileSource;
@class AECameraTile, AECameraTilePresentationViewController, CAMCameraViewController, AESnapshotViewController, NSMutableArray, NSString;

@interface AECameraTileController : NSObject <AECameraTilePresentationDelegate, AETileLayoutInfo> {

	id<AECameraTileSource> _cameraTileSource;
	AECameraTile* _mostRecentCameraTile;
	AECameraTilePresentationViewController* _presentationViewController;
	CAMCameraViewController* _cameraViewController;
	AESnapshotViewController* _snapshotViewController;
	NSMutableArray* _cameraSuspendingWindows;

}

@property (setter=_setMostRecentCameraTile:,getter=_mostRecentCameraTile,nonatomic,retain) AECameraTile * mostRecentCameraTile;                                //@synthesize mostRecentCameraTile=_mostRecentCameraTile - In the implementation block
@property (getter=_presentationViewController,nonatomic,readonly) AECameraTilePresentationViewController * presentationViewController;                         //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (getter=_cameraViewController,nonatomic,readonly) CAMCameraViewController * cameraViewController;                                                    //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (setter=_setSnapshotViewController:,getter=_snapshotViewController,nonatomic,retain) AESnapshotViewController * snapshotViewController;              //@synthesize snapshotViewController=_snapshotViewController - In the implementation block
@property (getter=_cameraSuspendingWindows,nonatomic,readonly) NSMutableArray * cameraSuspendingWindows;                                                       //@synthesize cameraSuspendingWindows=_cameraSuspendingWindows - In the implementation block
@property (assign,nonatomic,__weak) id<AECameraTileSource> cameraTileSource;                                                                                   //@synthesize cameraTileSource=_cameraTileSource - In the implementation block
@property (getter=isPresentingCamera,nonatomic,readonly) BOOL presentingCamera; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)generateCameraTile;
-(id)initWithCameraOptions:(long long)arg1 ;
-(id)_cameraSuspendingWindows;
-(void)_windowDidBecomeHidden:(id)arg1 ;
-(void)setCameraTileSource:(id<AECameraTileSource>)arg1 ;
-(BOOL)isPresentingCamera;
-(void)_setSnapshotViewController:(id)arg1 ;
-(id)_viewControllerForPresentation;
-(void)_setMostRecentCameraTile:(id)arg1 ;
-(id<AECameraTileSource>)cameraTileSource;
-(void)_windowDidBecomeVisible:(id)arg1 ;
-(id)_mostRecentCameraTile;
-(CGSize)tileSystemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)_snapshotViewController;
-(void)presentationNavigationControllerWillBeDismissed:(id)arg1 ;
-(id)navigationControllerForPresentation;
-(id)init;
-(void)dealloc;
-(id)_cameraViewController;
-(id)_presentationViewController;
-(void)configure:(/*^block*/id)arg1 ;
@end
