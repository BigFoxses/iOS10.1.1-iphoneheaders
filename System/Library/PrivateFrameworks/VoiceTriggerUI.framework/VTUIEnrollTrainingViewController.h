/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/VTUITrainingManagerDelegate.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>
#import <libobjc.A.dylib/VTUIEnrollmentSetupIntroViewDelegate.h>
#import <libobjc.A.dylib/AFUIDebugControllerDelegate.h>
#import <libobjc.A.dylib/AFUISiriLanguageDelegate.h>
#import <libobjc.A.dylib/AFMyriadDelegate.h>

@protocol AFUIDebugControlling, VTUIEnrollTrainingViewControllerDelegate;
@class NSArray, VTUIPagedLabel, VTUIEnrollmentSetupIntroView, VTUIEnrollmentSuccessView, UILabel, UIButton, SiriUIContentButton, SUICFlamesView, VTUITrainingManager, VTUITickMarkView, NSString, AFUISiriLanguage, AFMyriadCoordinator;

@interface VTUIEnrollTrainingViewController : UIViewController <VTUITrainingManagerDelegate, SUICFlamesViewDelegate, VTUIEnrollmentSetupIntroViewDelegate, AFUIDebugControllerDelegate, AFUISiriLanguageDelegate, AFMyriadDelegate> {

	NSArray* _trainingPageInstructions;
	long long _currentTrainingState;
	BOOL _hasRetriedTraining;
	VTUIPagedLabel* _instructionPagedLabel;
	VTUIEnrollmentSetupIntroView* _introView;
	VTUIEnrollmentSuccessView* _successView;
	UILabel* _statusLabel;
	UIButton* _skipButton;
	UIButton* _endpointButton;
	SiriUIContentButton* _radarButton;
	UIButton* _radarExitButton;
	id<AFUIDebugControlling> _debugController;
	SUICFlamesView* _flamesView;
	VTUITrainingManager* _trainingManager;
	float _audioRms;
	unsigned long long _sessionId;
	VTUITickMarkView* _tickMark;
	NSString* _spokenLanguageCode;
	long long _badMicRetryCount;
	long long _AVVCRetryCount;
	long long _consecutiveTimeoutCount;
	AFUISiriLanguage* _siriLanguage;
	AFMyriadCoordinator* _myriadCoordinator;
	BOOL _shouldTurnOnMyriad;
	id<VTUIEnrollTrainingViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) VTUITrainingManager * trainingManager;                                   //@synthesize trainingManager=_trainingManager - In the implementation block
@property (nonatomic,readonly) SUICFlamesView * flamesView;                                             //@synthesize flamesView=_flamesView - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionId;                                            //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) long long currentTrainingState;                                          //@synthesize currentTrainingState=_currentTrainingState - In the implementation block
@property (assign,nonatomic) BOOL hasRetriedTraining;                                                   //@synthesize hasRetriedTraining=_hasRetriedTraining - In the implementation block
@property (assign,nonatomic) float audioRms;                                                            //@synthesize audioRms=_audioRms - In the implementation block
@property (assign,nonatomic,__weak) id<VTUIEnrollTrainingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<VTUIEnrollTrainingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<VTUIEnrollTrainingViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(unsigned long long)sessionId;
-(void)shouldContinue:(id)arg1 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg1 ;
-(void)_resignActive;
-(void)_resetIdleTimer;
-(void)_becomeActive;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(void)finish:(id)arg1 ;
-(void)_setupMode;
-(void)_cleanupTrainingManagerWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupTrainingStates;
-(void)skipTraining:(id)arg1 ;
-(void)radarButtonPressed:(id)arg1 ;
-(void)_stopGLDrawing;
-(void)_resumeGLDrawing;
-(void)_resetEnrollment;
-(void)_startEnrollment;
-(void)_resetTrainingManager;
-(void)_showBadMicAlertCompletion:(/*^block*/id)arg1 ;
-(void)_resumeTraining;
-(VTUITrainingManager *)trainingManager;
-(void)_showUnsupportedLocaleAlertCompletion:(/*^block*/id)arg1 ;
-(void)_triggerEndpoint:(id)arg1 ;
-(void)_finishSiriSetup:(id)arg1 ;
-(void)_continueFromIntro:(id)arg1 ;
-(void)skipAssistant:(id)arg1 ;
-(void)_logAggdCount:(long long)arg1 forKey:(id)arg2 ;
-(void)_setAssistantEnabled:(BOOL)arg1 ;
-(void)_startTraining;
-(void)_warnForLanguageCompatibilityIfNecessary:(/*^block*/id)arg1 ;
-(BOOL)_siriLanguageIsIncompatibleWithPairedWatch;
-(void)_showUnsupportedLocaleAlert;
-(void)_showIntroView;
-(void)_setPHSEnrollmentPrefEnabled:(BOOL)arg1 ;
-(void)_hideInstruction;
-(void)_createTrainingManagerIfNeeded;
-(void)_showInstruction:(long long)arg1 isRetry:(BOOL)arg2 ;
-(void)_logAggdScalar:(long long)arg1 forKey:(id)arg2 ;
-(void)_showEnrollmentSuccessView;
-(void)_updatePageNumberForInstruction:(long long)arg1 ;
-(void)_showTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(BOOL)arg3 animate:(BOOL)arg4 ;
-(long long)currentTrainingState;
-(void)_showStatusMessage:(id)arg1 afterDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(SUICFlamesView *)flamesView;
-(void)setAudioRms:(float)arg1 ;
-(void)_handleTrainingResultForNonRetryablePhraseWithStatus:(int)arg1 ;
-(void)setHasRetriedTraining:(BOOL)arg1 ;
-(void)_handleTrainingResultForRetryablePhraseWithStatus:(int)arg1 shouldShowCheckMark:(BOOL)arg2 ;
-(long long)interpretSessionManagerStatus:(int)arg1 forInstruction:(long long)arg2 ;
-(void)_retryAfterBadMicAlert;
-(void)_advanceState;
-(void)_showResultMark:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_retryInstruction:(BOOL)arg1 ;
-(id)interpretAudioSource:(int)arg1 ;
-(id)_getSetupModeString;
-(void)_updateFlamesForStatus:(long long)arg1 ;
-(void)_showRadarExitButton;
-(void)_presentRadarView;
-(void)VTUITrainingManagerFeedLevel:(float)arg1 ;
-(void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)arg1 ;
-(void)VTUITrainingManagerStopListening;
-(void)aboutTapped;
-(void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2 ;
-(id)presentedViewControllerForDebugController;
-(void)debugController:(id)arg1 wantsPresentViewController:(id)arg2 ;
-(void)debugController:(id)arg1 wantsDismissViewController:(id)arg2 ;
-(void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)debugController:(id)arg1 openURL:(id)arg2 ;
-(void)_showBadMicAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_clearAggdScalar:(id)arg1 ;
-(BOOL)hasRetriedTraining;
-(float)audioRms;
-(void)_setupViews;
@end
