/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplication.h>

@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication {

	CAMPerformanceTestHarness* _currentTestHarness;

}

@property (nonatomic,retain) CAMPerformanceTestHarness * currentTestHarness;              //@synthesize currentTestHarness=_currentTestHarness - In the implementation block
-(id)_extendLaunchTest;
-(unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)_registerPreviewStartBlock:(/*^block*/id)arg1 ;
-(CAMPerformanceTestHarness *)currentTestHarness;
-(void)didChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(void)setCurrentTestHarness:(CAMPerformanceTestHarness *)arg1 ;
-(BOOL)runTakePictureTestWithTestName:(id)arg1 options:(id)arg2 prototype:(id)arg3 ;
-(BOOL)runTakePictureTestWithFrontCamera:(id)arg1 options:(id)arg2 prototype:(id)arg3 ;
-(BOOL)runSwitchCamerasTestWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)runSwitchModesTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_configureExtendedLaunchTestIfNeeded;
@end

