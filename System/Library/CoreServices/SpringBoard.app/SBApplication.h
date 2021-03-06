/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDisplay.h>
#import <SpringBoard/FBWindowContextHostManagerDelegate.h>
#import <SpringBoard/SBLeafIconDataSource.h>
#import <SpringBoard/SBWorkspaceEntityGenerating.h>

@class SBApplicationInfo, BKSApplicationDataStore, XBApplicationSnapshotManifest, UIRemoteApplication, NSUserDefaults, BSCFBundle, NSMutableArray, SBActivationSettings, SBDeactivationSettings, SBStateSettings, SBProcessSettings, FBApplicationProcess, BSMachPortSendRight, FBProcessState, FBApplicationProcessExitContext, NSDate, BKSProcessAssertion, NSTimer, PCPersistentTimer, NSMutableDictionary, NSDictionary, NSMutableSet, NSHashTable, NSMapTable, SBModalAlertPresenter, FBSApplicationDataStore, NSString, NSArray, CRCarPlayAppDeclaration, NSNumber;

@interface SBApplication : NSObject <SBDisplay, FBWindowContextHostManagerDelegate, SBLeafIconDataSource, SBWorkspaceEntityGenerating> {

	SBApplicationInfo* _appInfo;
	BKSApplicationDataStore* _dataStore;
	XBApplicationSnapshotManifest* _snapshotManifest;
	UIRemoteApplication* _remoteApplication;
	NSUserDefaults* _lazy_defaults;
	opaque_pthread_mutex_t _cachedBundleMutex;
	BSCFBundle* _cachedBundle;
	NSMutableArray* _activationContextStack;
	SBActivationSettings* _activationSettings;
	SBDeactivationSettings* _deactivationSettings;
	SBStateSettings* _stateSettings;
	SBProcessSettings* _processSettings;
	BOOL _pendedClearingActivationSettings;
	FBApplicationProcess* _process;
	BSMachPortSendRight* _xpcEventPort;
	FBProcessState* _threadUnsafe_processState;
	FBApplicationProcessExitContext* _lastExitContext;
	NSDate* _failedLaunchWindowStartDate;
	NSDate* _nonUserKillExitWindowStartDate;
	unsigned long long _activationToken;
	BOOL _hasActivatedOnce;
	BOOL _hasBeenFrontmost;
	BOOL _isBeingDebugged;
	BOOL _isAnimatingActivation;
	BOOL _isAnimatingDeactivation;
	int _activationCount;
	unsigned _failedLaunchCount : 8;
	unsigned _failedLaunchCountForVoIPBehaviors : 8;
	unsigned _nonUserKillExitCount : 8;
	int _activationState;
	BOOL _isMutatingActivationState;
	unsigned _applicationState;
	BKSProcessAssertion* _periodicWakeProcessAssertion;
	NSTimer* _periodicWakeSuspendTimer;
	PCPersistentTimer* _applicationWakeTimer;
	NSDate* _nextApplicationWakeDate;
	BKSProcessAssertion* _transientProcessAssertion;
	NSTimer* _transientSuspendTimer;
	int _transientAssertionType;
	NSMutableDictionary* _alertImpersonatorsByWorkspaceType;
	unsigned _isRecentlyUpdated : 3;
	unsigned _isNewlyInstalled : 3;
	BOOL _uninstalled;
	unsigned _hasBadgeValue : 3;
	double _lastBadgeClearTime;
	unsigned _dataFlags : 8;
	BOOL _dataFlagsIsSet;
	unsigned _doingBackgroundNetworking : 16;
	BOOL _hasShownDataPlanAlertSinceLock;
	BOOL _calculatedSupportedTypes;
	int _supportedTypes;
	long long _defaultClassicModeOverride;
	long long _currentClassicMode;
	int _applicationRestorationCheckState;
	NSDictionary* _alertSuppressionContextsBySectionIdentifier;
	NSMutableSet* _statusBarForcedHiddenReasons;
	NSHashTable* _statusBarStyleOverridesAssertions;
	int _statusBarStyleOverridesToSuppress;
	NSMapTable* _statusBarStyleOverridesAssertionsByStyleOverride;
	NSMutableSet* _suppressVolumeHudCategories;
	SBModalAlertPresenter* _modalAlertPresenter;
	unsigned _launchAlerts : 8;
	FBSApplicationDataStore* _applicationDataStore;
	NSDate* _lastDeprecationPresentationDate;
	float _minimumBrightnessLevel;
	int _showsProgressCount;
	BOOL _isRestoringApplicationFromHiding;
	NSDictionary* _customSpotlightIconPaths;
	NSString* _mainSceneID;
	long long _whitePointAdaptivityStyle;
	NSString* _bundleIdentifier;
	long long _appSnapshotSequenceID;
	BOOL _needsMainScreenSnapshotsDownscaled;

}

@property (retain) FBProcessState * processState;                                                                        //@synthesize threadUnsafe_processState=_threadUnsafe_processState - In the implementation block
@property (getter=_classicMode,nonatomic,readonly) long long classicMode; 
@property (assign,nonatomic) long long defaultClassicModeOverride;                                                       //@synthesize defaultClassicModeOverride=_defaultClassicModeOverride - In the implementation block
@property (setter=_setActivationSettings:,nonatomic,copy) SBActivationSettings * _activationSettings;                    //@synthesize activationSettings=_activationSettings - In the implementation block
@property (setter=_setDeactivationSettings:,nonatomic,copy) SBDeactivationSettings * _deactivationSettings;              //@synthesize deactivationSettings=_deactivationSettings - In the implementation block
@property (setter=_setStateSettings:,nonatomic,copy) SBStateSettings * _stateSettings;                                   //@synthesize stateSettings=_stateSettings - In the implementation block
@property (nonatomic,copy,readonly) SBProcessSettings * _processSettings;                                                //@synthesize processSettings=_processSettings - In the implementation block
@property (assign,nonatomic) long long whitePointAdaptivityStyle;                                                        //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,retain) BSMachPortSendRight * xpcEventPort;                                                         //@synthesize xpcEventPort=_xpcEventPort - In the implementation block
@property (assign,nonatomic) int statusBarStyleOverridesToSuppress;                                                      //@synthesize statusBarStyleOverridesToSuppress=_statusBarStyleOverridesToSuppress - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationShortcutWidgetBundleIdentifier; 
@property (nonatomic,copy,readonly) NSArray * staticApplicationShortcutItems; 
@property (nonatomic,copy) NSArray * dynamicApplicationShortcutItems; 
@property (getter=isUninstallSupported,nonatomic,readonly) BOOL uninstallSupported; 
@property (assign,getter=isUninstallAllowed,nonatomic) BOOL uninstallAllowed; 
@property (assign,getter=isRestoring,nonatomic) BOOL restoring;                                                          //@synthesize isRestoringApplicationFromHiding=_isRestoringApplicationFromHiding - In the implementation block
@property (assign,getter=isReachabilitySupported,nonatomic) BOOL reachabilitySupported; 
@property (nonatomic,readonly) CRCarPlayAppDeclaration * carPlayDeclaration; 
@property (getter=isShowingModalAlert,nonatomic,readonly) BOOL showingModalAlert; 
@property (nonatomic,readonly) NSNumber * itemID; 
@property (nonatomic,copy) NSString * mainSceneID;                                                                       //@synthesize mainSceneID=_mainSceneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultValue:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)defaultValueForKey:(id)arg1 bundleIdentifier:(id)arg2 urlScheme:(id)arg3 ofType:(Class)arg4 ;
+(id)_defaultDisplayState;
+(id)appStateKeysToPrefetch;
+(BOOL)activationStateIsTransitory:(int)arg1 ;
+(BOOL)shouldHaveContextsForActivationState:(int)arg1 ;
+(id)snapshotSortDescriptorForNames:(id)arg1 ;
+(id)snapshotSortDescriptorForScheme:(id)arg1 ;
+(id)snapshotSortDescriptorForInterfaceOrientationMask:(unsigned long long)arg1 ;
+(id)snapshotSortDescriptorForStatusBarStateMask:(unsigned long long)arg1 ;
+(id)snapshotSortDescriptorForImageScale:(double)arg1 ;
+(id)snapshotSortDescriptorForContentTypeMask;
+(id)snapshotSortDescriptorForRequiredOSVersion:(id)arg1 ;
+(id)snapshotSortDescriptorForCreationDate;
+(id)snapshotSortDescriptorsForNames:(id)arg1 scheme:(id)arg2 imageScale:(double)arg3 statusBarStateMask:(unsigned long long)arg4 interfaceOrientationMask:(unsigned long long)arg5 requiredOSVersion:(id)arg6 ;
+(id)snapshotSortDescriptorForLaunchInterfaceIdentifier:(id)arg1 ;
+(void)_markAllManifestsForReingestion;
+(void)_reingestLaunchImagesForAllApps;
-(BOOL)supportsAudioBackgroundMode;
-(long long)flagForActivationSetting:(unsigned)arg1 ;
-(BOOL)boolForActivationSetting:(unsigned)arg1 ;
-(void)applyActivationSettings:(id)arg1 ;
-(void)clearStateSettings;
-(void)clearActivationSettings;
-(void)clearProcessSettings;
-(BOOL)shouldLaunchSuspendedAlways;
-(void)setFlag:(long long)arg1 forActivationSetting:(unsigned)arg2 ;
-(void)setObject:(id)arg1 forActivationSetting:(unsigned)arg2 ;
-(void)incrementModalAlertCount;
-(void)decrementModalAlertCount;
-(void)spdResumeForTrafficRequested;
-(long long)applicationSignatureState;
-(BOOL)isShowingModalAlert;
-(BOOL)behavesLikePhone;
-(BOOL)boolForStateSetting:(unsigned)arg1 ;
-(id)iconIdentifier;
-(id)icon:(id)arg1 imageWithFormat:(int)arg2 ;
-(id)_appInfo;
-(void)preHeatForUserLaunchIfNecessary;
-(BOOL)isLaunchableDuringSetup;
-(BOOL)isAnyTerminationAssertionHeld;
-(BOOL)isUninstalled;
-(BOOL)suspendingUnsupported;
-(void)_setAlertImpersonator:(id)arg1 forWorkspaceType:(long long)arg2 ;
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(void)setFlag:(long long)arg1 forStateSetting:(unsigned)arg2 ;
-(id)statusBarStyleOverridesAssertionsByStyleOverride;
-(void)markUserLaunchInitiationTime;
-(void)preHeatDataLinkIfNecessary;
-(id)objectForActivationSetting:(unsigned)arg1 ;
-(id)sceneIdentifierForDisplay:(id)arg1 ;
-(id)workspaceEntity;
-(BOOL)boolForProcessSetting:(long long)arg1 ;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1 ;
-(void)didExitWithContext:(id)arg1 ;
-(void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2 ;
-(void)clearDeactivationSettings;
-(BOOL)isMobilePhone;
-(BOOL)isFaceTime;
-(void)willDeactivateForEventsOnly:(BOOL)arg1 ;
-(void)didDeactivateForEventsOnly:(BOOL)arg1 ;
-(void)willActivateForScene:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)didActivateForScene:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)processWillLaunch:(id)arg1 ;
-(void)processDidLaunch:(id)arg1 ;
-(BOOL)shouldAutoRelaunchAfterExit;
-(BOOL)_hasAnyAlertImpersonator;
-(BOOL)supportsFetchBackgroundMode;
-(BOOL)_supportsClassicMode:(long long)arg1 ;
-(void)setObject:(id)arg1 forProcessSetting:(long long)arg2 ;
-(BOOL)hasViewServiceEntitlement;
-(BOOL)isNowPlayingApplication;
-(BOOL)isReachabilitySupported;
-(id)_snapshotManifest;
-(BOOL)isInternalApplication;
-(NSString *)mainSceneID;
-(void)_saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isClassic;
-(CGSize)defaultLaunchingSizeForScreen:(id)arg1 ;
-(long long)effectiveStatusBarStyleWithStyle:(long long)arg1 ;
-(void)_noteSnapshotDidUpdate;
-(void)_protectedDataDidBecomeAvailable:(id)arg1 ;
-(BOOL)classicAppZoomedInOrRequiresHiDPI;
-(void)createDownscaledSnapshotFromFullSizeSnapshotForMainScene;
-(BOOL)_isMainSceneID:(id)arg1 ;
-(void)_noteSnapshotDidUpdate:(long long)arg1 ;
-(BOOL)classicAppScaled;
-(BOOL)classicAppPhoneAppRunningOnPad;
-(BOOL)usesLegacyStatusBar;
-(void)flushSnapshotsForAllScenes;
-(void)flushSnapshotsForAllScenesIncludingAllLegacyImages;
-(void)flushSnapshotsForSceneID:(id)arg1 ;
-(void)saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveSuspendSnapshotForSceneSnapshot:(id)arg1 ;
-(void)deleteSnapshotForContext:(id)arg1 ;
-(id)_snapshotCreationDeletionQueueForSceneID:(id)arg1 ;
-(CGRect)snapshotFrameForClassicInsideBounds:(CGRect)arg1 forOrientation:(long long)arg2 scaleFactor:(double*)arg3 ;
-(CGSize)snapshotSizeAdjustedForLegacyStatusBarBasedOnSize:(CGSize)arg1 interfaceOrientation:(long long)arg2 contentFrame:(CGRect*)arg3 ;
-(BOOL)isUninstallSupported;
-(BOOL)isUninstallAllowed;
-(void)setUninstallAllowed:(BOOL)arg1 ;
-(BOOL)allowsEventOnlySuspension;
-(void)applyDeactivationSettings:(id)arg1 ;
-(void)applyStateSettings:(id)arg1 ;
-(long long)flagForDeactivationSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(long long)flagForStateSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forStateSetting:(unsigned)arg2 ;
-(id)objectForStateSetting:(unsigned)arg1 ;
-(long long)flagForProcessSetting:(long long)arg1 ;
-(id)objectForProcessSetting:(long long)arg1 ;
-(void)applyProcessSettings:(id)arg1 ;
-(void)_removeAlertImpersonator:(id)arg1 ;
-(long long)starkStatusBarStyle;
-(id)statusBarStyleRequest;
-(id)effectiveStatusBarStyleRequest;
-(BOOL)suppressesBanners;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(id)copyDisplaySettings;
-(id)copyActivationSettings;
-(id)copyDeactivationSettings;
-(id)copyStateSettings;
-(id)copyProcessSettings;
-(SBActivationSettings *)_activationSettings;
-(SBDeactivationSettings *)_deactivationSettings;
-(SBStateSettings *)_stateSettings;
-(SBProcessSettings *)_processSettings;
-(void)_updateApplicationWakeTimers;
-(void)_updateRecentlyUpdatedTimer;
-(id)_sceneIdentifierForDisplayType:(unsigned long long)arg1 ;
-(id)_parseCustomSpotlightIconPaths;
-(void)refreshLaunchImagesInSnapshotManifestIfNeeded;
-(void)_dropPeriodicWakeProcessAssertion;
-(void)_dropTransientProcessAssertion;
-(void)purgeBundleCaches;
-(BOOL)_usesSplashBoard;
-(BOOL)_disablesClassicMode;
-(BOOL)hasHiddenTag;
-(void)resetLaunchImageIngestionStatus;
-(void)_purgeRemoteApplication;
-(void)_setDataUsage:(int)arg1 ;
-(BOOL)isCloudKitEnabled;
-(BOOL)isCloudDocsEnabled;
-(BOOL)requiresPasscodeIfLaunchedBeforeFirstUnlock;
-(Class)iconClass;
-(id)carDisplayName;
-(FBProcessState *)processState;
-(void)setProcessState:(FBProcessState *)arg1 ;
-(void)_didSuspend;
-(void)_setNewlyInstalled:(BOOL)arg1 ;
-(void)_setRecentlyUpdated:(BOOL)arg1 ;
-(void)_sendDidLaunchNotification:(BOOL)arg1 ;
-(unsigned)_effectiveFailedLaunchCount;
-(unsigned)_effectiveNonUserKillExitCount;
-(void)_noteNonUserKillExit;
-(void)_noteFailedLaunch;
-(void)setSystemVolumeHUDEnabled:(BOOL)arg1 forCategory:(id)arg2 ;
-(void)setAlertSuppressionContextsBySectionIdentifier:(id)arg1 ;
-(BOOL)isSameExecutableAsApplication:(id)arg1 ;
-(void)_recalculateVoIPBehaviorForTerminationWithContext:(id)arg1 ;
-(void)_unregisterRemoteViewsAndSheets;
-(void)_invalidateStatusBarStyleOverridesAssertions;
-(void)setApplicationNextWakeDate:(id)arg1 ;
-(void)_setActivationState:(int)arg1 ;
-(void)_resetDataUsage;
-(id)_activationStateToString;
-(BOOL)isActivating;
-(BOOL)showLaunchAlertForType:(int)arg1 ;
-(void)_show32BitDeprecationAlertIfNecessary;
-(BOOL)supportsLegacyVOIPBackgroundMode;
-(void)_setAutoLaunchForVoIP:(BOOL)arg1 ;
-(id)carSceneID;
-(BOOL)_isNewlyInstalled;
-(void)_noteIconDataSourceDidChange;
-(BOOL)_isRecentlyUpdated;
-(BOOL)_shouldAutoLaunchForVoIP;
-(BOOL)_shouldAutoRelaunchForEA;
-(BOOL)_shouldAutoLaunchOnBootOrInstall:(BOOL)arg1 ;
-(BOOL)classicAppZoomedIn;
-(BOOL)includesStatusBarInClassicJail;
-(BOOL)isNowRecordingApplication;
-(id)statusBarStyleRequestWithStyle:(long long)arg1 ;
-(id)_searchDomainLaunchInfo;
-(BOOL)defaultStatusBarHiddenForOrientation:(long long)arg1 ;
-(BOOL)statusBarHiddenForOrientation:(long long)arg1 ;
-(long long)activationInterfaceOrientationForCurrentOrientation;
-(BOOL)mainSceneWantsFullscreen;
-(BOOL)_isMonarchLinked;
-(unsigned long long)_mainSceneSupportedInterfaceOrientations;
-(long long)activationInterfaceOrientationForOrientation:(long long)arg1 ;
-(BOOL)_currentClassicModeShouldAllowLandscapeLaunching;
-(BOOL)_mainSceneSupportsInterfaceOrientation:(long long)arg1 ;
-(long long)_launchingInterfaceOrientationForOrientation:(long long)arg1 ;
-(void)_calculateSupportedTypesLazilyIfNecessary;
-(BOOL)_supportsApplicationType:(int)arg1 ;
-(long long)_pad_classicModeFromSplashBoard;
-(long long)_phone_on_pad_classicModeFromSplashBoard;
-(long long)_phone_classicModeFromSplashBoard;
-(long long)_classicModeFromSplashBoard;
-(long long)_classicModeFromSupportedTypes;
-(long long)_classicModeFromStateOverrides;
-(long long)_defaultClassicMode;
-(int)_supportedTypeForClassicModeNone;
-(BOOL)_classicAppScaledPhoneOnPad;
-(BOOL)_classicAppScaledPadOnPad;
-(BOOL)_classicAppScaledOnPhone;
-(BOOL)_classicAppScaledOnPad;
-(BOOL)classicAppRequiresHiDPI;
-(BOOL)_isAlreadyKnownToBeClassic;
-(id)applicationNextWakeDate;
-(void)_resumeForPeriodicWakeWithReason:(id)arg1 ;
-(BOOL)badgeHasBeenSetLocally;
-(id)badgeNumberOrString;
-(id)_baseSceneIdentifier;
-(BOOL)isMedusaCapable;
-(id)_defaultPNGNameFromSuspensionSettingsWithExpiration:(double*)arg1 ;
-(long long)_mainSceneCompabilityMode;
-(id)_stringForActivationState:(int)arg1 ;
-(void)setHasBeenFrontmost:(BOOL)arg1 ;
-(BOOL)supportsRemoteNotificationBackgroundMode;
-(void)_update32BitDeprecationAlertTiming;
-(BOOL)_shouldShow32BitDeprecationAlert;
-(void)_transientResumeForType:(int)arg1 ;
-(double)_resumeDurationForTransientType:(int)arg1 ;
-(id)_transientIdentifier;
-(void)_transientSuspendForTimerFired:(id)arg1 ;
-(id)launchInterfaceFileName;
-(void)_suspendForPeriodicWakeTimerFired:(id)arg1 ;
-(void)_setActivationSettings:(id)arg1 ;
-(void)_setDeactivationSettings:(id)arg1 ;
-(void)_setStateSettings:(id)arg1 ;
-(long long)wallpaperStyle;
-(BOOL)_hasBooleanYesEntitlement:(id)arg1 ;
-(CRCarPlayAppDeclaration *)carPlayDeclaration;
-(BOOL)isCacheCleaningTerminationAssertionHeld;
-(unsigned long long)iconPriority:(id)arg1 ;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2 ;
-(id)iconDisplayName:(id)arg1 forLocation:(int)arg2 ;
-(BOOL)iconCanEllipsizeLabel:(id)arg1 ;
-(BOOL)iconCanTightenLabel:(id)arg1 ;
-(long long)iconProgressState:(id)arg1 ;
-(double)iconProgressPercent:(id)arg1 ;
-(BOOL)iconProgressIsPaused:(id)arg1 ;
-(id)iconBadgeNumberOrString:(id)arg1 ;
-(id)iconFormattedAccessoryString:(id)arg1 ;
-(int)iconAccessoryType:(id)arg1 ;
-(BOOL)iconIsRecentlyUpdated:(id)arg1 ;
-(BOOL)iconIsBeta:(id)arg1 ;
-(BOOL)iconSupportsUninstall:(id)arg1 ;
-(BOOL)iconCompleteUninstall:(id)arg1 ;
-(BOOL)iconAllowsLaunch:(id)arg1 ;
-(BOOL)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3 ;
-(void)setDynamicApplicationShortcutItems:(NSArray *)arg1 ;
-(id)_dataStore;
-(BOOL)shouldSuppressAlertForSuppressionContexts:(id)arg1 sectionIdentifier:(id)arg2 ;
-(BOOL)hasShownDataPlanAlertSinceLock;
-(void)setHasShownDataPlanAlertSinceLock:(BOOL)arg1 ;
-(unsigned)_doingBackgroundNetworking;
-(void)_setDoingBackgroundNetworking:(unsigned)arg1 ;
-(void)setUsesEdgeNetwork:(BOOL)arg1 ;
-(void)setUsesWiFiNetwork:(BOOL)arg1 ;
-(BOOL)shouldSuppressUserNotificationPermissionAlert;
-(BOOL)isWebApplication;
-(BOOL)isWatchApplication;
-(BOOL)hasGameCenterData;
-(id)customSpotlightIconPathsForKey:(id)arg1 ;
-(BOOL)shouldLaunchPNGless;
-(BOOL)shouldLaunchWithLiveContentASAP;
-(id)_additionalDisplayQualification;
-(id)_pathIfFileExistsAtPath:(id)arg1 ;
-(BOOL)_hasActivatedOnce;
-(id)_defaults;
-(BOOL)hasStartedLaunching;
-(void)didCreateScene:(id)arg1 ;
-(void)willAnimateActivation;
-(void)didAnimateActivation;
-(void)willAnimateDeactivation:(BOOL)arg1 ;
-(void)didAnimateDeactivation;
-(void)willAnimateActivationOnStarkScreenController:(id)arg1 ;
-(void)didAnimateActivationOnStarkScreenController:(id)arg1 ;
-(void)willAnimateDeactivationOnStarkScreenController:(id)arg1 ;
-(void)didAnimateDeactivationOnStarkScreenController:(id)arg1 ;
-(void)markNewlyInstalled;
-(void)markRecentlyUpdated;
-(BOOL)shouldAutoLaunchOnBootOrInstall;
-(void)autoLaunchIfNecessaryOnBootOrInstall:(BOOL)arg1 ;
-(BOOL)isStatusBarForceHidden;
-(void)setStatusBarForceHidden:(BOOL)arg1 forReason:(id)arg2 animationSettings:(id)arg3 ;
-(id)statusBarEffectiveStyleRequestWithStyle:(long long)arg1 ;
-(id)statusBarEffectiveStyleRequestWithStyleOverrides:(int)arg1 ;
-(BOOL)statusBarHiddenForCurrentOrientation;
-(void)setForceSuppressStatusBarOverrides:(int)arg1 ;
-(void)overrideDefaultInterfaceOrientation:(long long)arg1 ;
-(void)removeDefaultInterfaceOrientationOverride;
-(void)_recalculateApplicationSupportedTypes;
-(BOOL)classicAppFullScreen;
-(BOOL)classicDefaultStatusBarHidden;
-(void)noteDidOpenURL:(id)arg1 ;
-(BOOL)requiresRLNDataProvider;
-(void)noteBadgeSetLocally;
-(double)lastBadgeClearTime;
-(BOOL)disablesJailForDisplay:(id)arg1 ;
-(id)carScene;
-(BOOL)_isCarSceneID:(id)arg1 ;
-(id)mainSceneInitialClientSettingsWithSettings:(id)arg1 ;
-(BOOL)hasBeenFrontmost;
-(BOOL)supportsBackgroundAppRefresh;
-(BOOL)provisioningProfileValidated;
-(void)prepareForUninstallation;
-(void)resetLaunchAlertForType:(int)arg1 ;
-(void)_terminationAssertionAdded:(id)arg1 ;
-(void)_terminationAssertionRemoved:(id)arg1 ;
-(void)resumeToQuit;
-(void)resumeForContentAvailable;
-(BOOL)_prefersSavedSnapshots;
-(int)_applicationRestorationCheckState;
-(void)_setApplicationRestorationCheckState:(int)arg1 ;
-(id)defaultLaunchImageFile;
-(void)takeStatusBarStyleOverridesAssertion:(id)arg1 ;
-(void)releaseStatusBarStyleOverridesAssertion:(id)arg1 ;
-(void)_bumpActivationCountBy:(long long)arg1 ;
-(BOOL)setBackgroundStyleForRequestedBackgroundStyle:(long long)arg1 ;
-(BOOL)showSystemVolumeHUDForCategory:(id)arg1 ;
-(id)_alertImpersonatorForWorkspaceType:(long long)arg1 ;
-(BOOL)canAccessDisplay:(id)arg1 ;
-(void)setReachabilitySupported:(BOOL)arg1 ;
-(BSMachPortSendRight *)xpcEventPort;
-(void)setXpcEventPort:(BSMachPortSendRight *)arg1 ;
-(long long)defaultClassicModeOverride;
-(void)setDefaultClassicModeOverride:(long long)arg1 ;
-(void)setMainSceneID:(NSString *)arg1 ;
-(id)bestSnapshotWithImageName:(id)arg1 sceneID:(id)arg2 variantID:(id)arg3 scale:(double)arg4 size:(CGSize)arg5 contentTypeMask:(unsigned long long)arg6 statusBarStateMask:(unsigned long long)arg7 launchingOrientation:(long long)arg8 ;
-(id)defaultSnapshotWithImageName:(id)arg1 sceneID:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 interfaceOrientation:(long long)arg5 ;
-(BOOL)isNewsstandApplication;
-(BOOL)supportsNewsstandContentBackgroundMode;
-(BOOL)_shouldUseSnapshotForAppLaunchIfPossible;
-(id)snapshotsWithImageName:(id)arg1 sceneID:(id)arg2 launchingSize:(CGSize)arg3 launchingScale:(double)arg4 contentTypeMask:(unsigned long long)arg5 statusBarStateMask:(unsigned long long)arg6 launchingOrientation:(long long)arg7 ;
-(id)_defaultPNGNameUsingFallbacksForSceneID:(id)arg1 ;
-(id)_normalizeSnapshotName:(id)arg1 ;
-(void)_ingestDefaultPNGsInManifest:(id)arg1 withLaunchImageBaseName:(id)arg2 ;
-(id)imageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(id)cachedImageForSnapshot:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(id)_defaultLaunchImageBaseName;
-(id)_defaultPNGNameFromActivationSettings;
-(id)_defaultPNGNameFromSearchDomainLaunchInfo:(id)arg1 ;
-(id)_defaultPNGNameWhenActivatingFromURLSetting:(id)arg1 ;
-(id)_defaultPNGNameFromSuspensionSettings;
-(id)_defaultImageNameForSceneID:(id)arg1 ;
-(void)_purgeLaunchImagesInManifest;
-(void)_ingestInfoPlistImagesInManifest:(id)arg1 ;
-(void)_ingestDefaultPNGsInManifest:(id)arg1 ;
-(void)reingestLaunchImagesInSnapshotManifest;
-(id)_validInfoPlistOrientationKeys;
-(BOOL)_allowIngestionOfLandscapeImagesOfSize:(CGSize)arg1 ;
-(id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id*)arg3 ;
-(id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 forMainScene:(BOOL)arg4 size:(CGSize)arg5 scale:(double)arg6 outScale:(double*)arg7 ;
-(id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 scale:(double)arg4 outScale:(double*)arg5 ;
-(void)purgeLaunchImagesInSnapshotManifest;
-(id)tags;
-(BOOL)enabled;
-(void)dealloc;
-(NSString *)description;
-(long long)statusBarOrientation;
-(id)bundleIdentifier;
-(long long)statusBarStyle;
-(long long)backgroundStyle;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(BOOL)isTranslucent;
-(void)deactivate;
-(int)statusBarStyleOverridesToSuppress;
-(NSArray *)dynamicApplicationShortcutItems;
-(void)setUsesBackgroundNetwork:(BOOL)arg1 ;
-(long long)_classicMode;
-(unsigned)applicationState;
-(id)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRunning;
-(void)activate;
-(void)wakeTimerFired;
-(id)urlScheme;
-(id)bundle;
-(void)setBadge:(id)arg1 ;
-(id)displayName;
-(void)setStatusBarStyleOverridesToSuppress:(int)arg1 ;
-(long long)defaultStatusBarStyle;
-(long long)whitePointAdaptivityStyle;
-(id)_stringForApplicationState:(unsigned)arg1 ;
-(id)bundleVersion;
-(NSArray *)staticApplicationShortcutItems;
-(NSString *)applicationShortcutWidgetBundleIdentifier;
-(BOOL)isSpringBoard;
-(id)remoteApplication;
-(void)setApplicationState:(unsigned)arg1 ;
-(int)ratingRank;
-(double)modificationDate;
-(id)mainScene;
-(double)watchdogExtension;
-(long long)currentInterfaceOrientation;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(BOOL)isBeingDebugged;
-(void)setBeingDebugged:(BOOL)arg1 ;
-(BOOL)isRecordingAudio;
-(id)folderNames;
-(id)fallbackFolderName;
-(BOOL)hasFreeDeveloperProvisioningProfile;
-(BOOL)hasUniversalProvisioningProfile;
-(id)preferenceDomain;
-(float)minimumBrightnessLevel;
-(id)externalAccessoryProtocols;
-(BOOL)isRestoring;
-(void)willActivate;
-(NSNumber *)itemID;
-(void)setRestoring:(BOOL)arg1 ;
-(int)dataUsage;
-(void)setShowsProgress:(BOOL)arg1 ;
-(BOOL)showsProgress;
-(long long)effectiveStatusBarStyle;
-(void)updateProcessState:(id)arg1 ;
-(BOOL)isSetup;
-(int)pid;
-(id)sandboxPath;
-(id)bundleContainerPath;
-(id)initWithApplicationInfo:(id)arg1 ;
-(id)dataContainerPath;
-(void)deleteAllSnapshots;
-(void)_lockStateDidChange:(id)arg1 ;
-(id)signerIdentity;
-(void)purgeAllCaches;
-(BOOL)isSystemApplication;
-(int)activationState;
@end

