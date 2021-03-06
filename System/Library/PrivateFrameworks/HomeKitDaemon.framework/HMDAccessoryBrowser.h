/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HAPAccessoryServerBrowserDelegate.h>
#import <libobjc.A.dylib/HAPAccessoryServerDelegate.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDWatchSystemStateDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSUUID, HMFMessageDispatcher, NSMutableSet, HMDHomeManager, NSMapTable, NSMutableArray, HAPAccessoryServerBrowserIP, HAPAccessoryServerBrowserBTLE, HAPAccessoryServerBrowserRelay, HMDDAccessoryServerBrowserDemo, NSHashTable, NSString;

@interface HMDAccessoryBrowser : NSObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMFMessageReceiver, HMFTimerDelegate, HMDWatchSystemStateDelegate> {

	BOOL _appIsInForeground;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uuid;
	HMFMessageDispatcher* _messageDispatcher;
	unsigned long long _generationCounter;
	NSMutableSet* _browsingXPCConnections;
	HMDHomeManager* _homeManager;
	NSMapTable* _delegates;
	NSMutableArray* _accessoryServerBrowsers;
	HAPAccessoryServerBrowserIP* _ipAccessoryServerBrowser;
	HAPAccessoryServerBrowserBTLE* _btleAccessoryServerBrowser;
	HAPAccessoryServerBrowserRelay* _relayAccessoryServerBrowser;
	HMDDAccessoryServerBrowserDemo* _demoAccessoryServerBrowser;
	NSMutableArray* _identifiersOfBTLEPairedAccessories;
	NSObject*<OS_dispatch_source> _reachabilityTimerForBTLE;
	NSMutableArray* _identifiersOfPairedAccessories;
	NSMutableSet* _unpairedAccessories;
	NSMutableSet* _discoveredBridgeableAccessories;
	NSMutableSet* _currentlyPairingAccessories;
	NSHashTable* _tombstonedHAPAccessoryServers;
	NSMapTable* _addAccessoryCompletionHandlersForAccessoryServers;
	NSMapTable* _pairSetupProviderCompletionHandlersForAccessoryServers;
	NSMapTable* _pairingRetryTimersForAccessoryServers;
	NSHashTable* _discoveringBLEAccessoryServerIdentifiers;
	NSMutableSet* _discoveredAccessoryServerIdentifiers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                                         //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (assign,nonatomic) unsigned long long generationCounter;                                             //@synthesize generationCounter=_generationCounter - In the implementation block
@property (nonatomic,retain) NSMutableSet * browsingXPCConnections;                                            //@synthesize browsingXPCConnections=_browsingXPCConnections - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMapTable * delegates;                                                           //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessoryServerBrowsers;                                         //@synthesize accessoryServerBrowsers=_accessoryServerBrowsers - In the implementation block
@property (nonatomic,retain) HAPAccessoryServerBrowserIP * ipAccessoryServerBrowser;                           //@synthesize ipAccessoryServerBrowser=_ipAccessoryServerBrowser - In the implementation block
@property (nonatomic,retain) HAPAccessoryServerBrowserBTLE * btleAccessoryServerBrowser;                       //@synthesize btleAccessoryServerBrowser=_btleAccessoryServerBrowser - In the implementation block
@property (nonatomic,readonly) HAPAccessoryServerBrowserRelay * relayAccessoryServerBrowser;                   //@synthesize relayAccessoryServerBrowser=_relayAccessoryServerBrowser - In the implementation block
@property (nonatomic,retain) HMDDAccessoryServerBrowserDemo * demoAccessoryServerBrowser;                      //@synthesize demoAccessoryServerBrowser=_demoAccessoryServerBrowser - In the implementation block
@property (assign,nonatomic) BOOL appIsInForeground;                                                           //@synthesize appIsInForeground=_appIsInForeground - In the implementation block
@property (nonatomic,retain) NSMutableArray * identifiersOfBTLEPairedAccessories;                              //@synthesize identifiersOfBTLEPairedAccessories=_identifiersOfBTLEPairedAccessories - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> reachabilityTimerForBTLE;                           //@synthesize reachabilityTimerForBTLE=_reachabilityTimerForBTLE - In the implementation block
@property (nonatomic,retain) NSMutableArray * identifiersOfPairedAccessories;                                  //@synthesize identifiersOfPairedAccessories=_identifiersOfPairedAccessories - In the implementation block
@property (nonatomic,readonly) NSMutableSet * unpairedAccessories;                                             //@synthesize unpairedAccessories=_unpairedAccessories - In the implementation block
@property (nonatomic,readonly) NSMutableSet * discoveredBridgeableAccessories;                                 //@synthesize discoveredBridgeableAccessories=_discoveredBridgeableAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * currentlyPairingAccessories;                                       //@synthesize currentlyPairingAccessories=_currentlyPairingAccessories - In the implementation block
@property (nonatomic,readonly) NSHashTable * tombstonedHAPAccessoryServers;                                    //@synthesize tombstonedHAPAccessoryServers=_tombstonedHAPAccessoryServers - In the implementation block
@property (nonatomic,retain) NSMapTable * addAccessoryCompletionHandlersForAccessoryServers;                   //@synthesize addAccessoryCompletionHandlersForAccessoryServers=_addAccessoryCompletionHandlersForAccessoryServers - In the implementation block
@property (nonatomic,retain) NSMapTable * pairSetupProviderCompletionHandlersForAccessoryServers;              //@synthesize pairSetupProviderCompletionHandlersForAccessoryServers=_pairSetupProviderCompletionHandlersForAccessoryServers - In the implementation block
@property (nonatomic,retain) NSMapTable * pairingRetryTimersForAccessoryServers;                               //@synthesize pairingRetryTimersForAccessoryServers=_pairingRetryTimersForAccessoryServers - In the implementation block
@property (nonatomic,readonly) NSHashTable * discoveringBLEAccessoryServerIdentifiers;                         //@synthesize discoveringBLEAccessoryServerIdentifiers=_discoveringBLEAccessoryServerIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * discoveredAccessoryServerIdentifiers;                              //@synthesize discoveredAccessoryServerIdentifiers=_discoveredAccessoryServerIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)removeDelegate:(id)arg1 ;
-(NSMapTable *)delegates;
-(void)setDelegates:(NSMapTable *)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(HMDHomeManager *)homeManager;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)initWithMessageDispatcher:(id)arg1 ;
-(void)configureDemoBrowserWithDemoAccessories:(id)arg1 finalized:(BOOL)arg2 ;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)configureWithHomeManager:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)handleAppTermination:(id)arg1 ;
-(void)registerPairedAccessory:(id)arg1 btleTransport:(BOOL)arg2 ;
-(void)deregisterPairedAccessory:(id)arg1 ;
-(void)handleNewlyPairedAccessory:(id)arg1 linkType:(long long)arg2 ;
-(void)configureBTLEQoSLimits:(unsigned long long)arg1 ;
-(void)addDiscoveredBridgeableAccessories:(id)arg1 ;
-(id)unpairedAccessoryWithUUID:(id)arg1 ;
-(void)pairAccessory:(id)arg1 home:(id)arg2 password:(id)arg3 setupCodeProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)startDiscoveringPairedAccessories;
-(void)addUnpairedAccessoryServer:(id)arg1 identifier:(id)arg2 ;
-(void)btleAccessoryReachabilityProbeTimer:(BOOL)arg1 ;
-(BOOL)isBrowsingAllowed;
-(void)discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)discoverAccessories:(id)arg1 ;
-(void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)tombstoneAccessoryServer:(id)arg1 ;
-(void)resurrectAccessoryServer:(id)arg1 ;
-(void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)removeDiscoveredBridgeableAccessories:(id)arg1 ;
-(void)resetConfiguration;
-(void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4 ;
-(void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2 ;
-(NSMutableSet *)discoveredBridgeableAccessories;
-(void)configureAccessory:(id)arg1 trackState:(BOOL)arg2 connectionPriority:(BOOL)arg3 ;
-(void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 ;
-(void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2 ;
-(HAPAccessoryServerBrowserRelay *)relayAccessoryServerBrowser;
-(HMDDAccessoryServerBrowserDemo *)demoAccessoryServerBrowser;
-(void)setDemoAccessoryServerBrowser:(HMDDAccessoryServerBrowserDemo *)arg1 ;
-(NSMutableArray *)accessoryServerBrowsers;
-(HAPAccessoryServerBrowserBTLE *)btleAccessoryServerBrowser;
-(NSMutableSet *)unpairedAccessories;
-(NSMutableArray *)identifiersOfBTLEPairedAccessories;
-(NSMutableArray *)identifiersOfPairedAccessories;
-(void)_stopDiscoveringAccessoriesWithForce:(BOOL)arg1 ;
-(NSMutableSet *)currentlyPairingAccessories;
-(void)_removeUnpairedAccessory:(id)arg1 ;
-(void)_removeDiscoveredBridgeableAccessories:(id)arg1 ;
-(void)_startDiscoveringPairedAccessories;
-(BOOL)_isBrowsingAllowed;
-(void)_startDiscoveringAccessories;
-(void)_btleAccessoryReachabilityProbeTimer:(BOOL)arg1 ;
-(void)_discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)handleHomeKitAppInForeground:(id)arg1 ;
-(void)handleNoActiveHomeKitApp:(id)arg1 ;
-(void)homeLocationChangeNotification:(id)arg1 ;
-(void)_setBTLEPowerChangeCompletionHandler;
-(void)setAppIsInForeground:(BOOL)arg1 ;
-(void)_startOrStopAccessoryDiscovery;
-(HAPAccessoryServerBrowserIP *)ipAccessoryServerBrowser;
-(id)_unpairedAccessoryWithServerIdentifier:(id)arg1 ;
-(void)_discoverAccessories:(id)arg1 ;
-(void)_addDiscoveredBridgeableAccessories:(id)arg1 ;
-(id)_tombstonedAccessoryServerWithServerIdentifier:(id)arg1 ;
-(BOOL)_isAccessoryServerTombstoned:(id)arg1 ;
-(BOOL)_shouldAccessoryServerBeTombstoned:(id)arg1 ;
-(void)_resurrectAccessoryServer:(id)arg1 ;
-(void)_addUnpairedAccessoryForServer:(id)arg1 ;
-(NSMutableSet *)discoveredAccessoryServerIdentifiers;
-(void)_pairAccessory:(id)arg1 home:(id)arg2 password:(id)arg3 setupCodeProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_source>)reachabilityTimerForBTLE;
-(void)setReachabilityTimerForBTLE:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_notifyDelegatesOfReachabilityChange:(BOOL)arg1 forBTLEAccessories:(id)arg2 ;
-(NSHashTable *)discoveringBLEAccessoryServerIdentifiers;
-(void)_tombstoneAccessoryServer:(id)arg1 ;
-(void)_handleRequestFetchNewAccessories:(id)arg1 ;
-(void)_handleRequestSearchForNewAccessories:(id)arg1 ;
-(void)_handleInvalidatedXPCConnection:(id)arg1 ;
-(NSMapTable *)addAccessoryCompletionHandlersForAccessoryServers;
-(NSMapTable *)pairSetupProviderCompletionHandlersForAccessoryServers;
-(unsigned long long)generationCounter;
-(NSMutableSet *)browsingXPCConnections;
-(void)_stopSearchingWithXPCConnection:(id)arg1 ;
-(void)_notifyDelegatesOfNewAccessory:(id)arg1 ;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(void)_sendNewAccessoryData:(id)arg1 added:(BOOL)arg2 ;
-(id)_unpairedAccessoryForServer:(id)arg1 ;
-(void)_sendPairingCompletionStatusForServer:(id)arg1 error:(id)arg2 ;
-(NSMapTable *)pairingRetryTimersForAccessoryServers;
-(void)_promptForPairingPasswordForServer:(id)arg1 reason:(id)arg2 ;
-(NSHashTable *)tombstonedHAPAccessoryServers;
-(void)_notifyDelegatesOfTombstonedAccessoryServer:(id)arg1 ;
-(void)_notifyDelegatesOfNewPairedAccessoryServer:(id)arg1 stateChanged:(BOOL)arg2 stateNumber:(id)arg3 ;
-(void)_notifyDelegatesOfDiscoveryFailure:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3 ;
-(void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1 ;
-(void)_updatePairingRetryTimerForServer:(id)arg1 delay:(long long)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didStopPairingWithError:(id)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(void)_checkDelegatesofBlockedAccessoryServer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateHasPairings:(BOOL)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateCategory:(id)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateName:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2 ;
-(void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2 ;
-(void)accessoryServer:(id)arg1 requestUserPermission:(long long)arg2 ;
-(void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2 ;
-(void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)accessoryServer:(id)arg1 didUpdateHasPairings:(BOOL)arg2 ;
-(void)accessoryServerDidUpdateStateNumber:(id)arg1 ;
-(void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2 ;
-(void)accessoryServer:(id)arg1 didUpdateName:(id)arg2 ;
-(id)allUnpairedAccessories;
-(void)startDiscoveringAccessories;
-(void)stopDiscoveringAccessories;
-(void)activate:(BOOL)arg1 ;
-(id)discoveredAccessoryServers;
-(void)_stopBtleAccessoryReachabilityProbeTimer;
-(void)_notifyDelegatesToRetrieveAccessoryServers:(id)arg1 ;
-(id)dumpUnpairedAccessories;
-(id)dumpRegisteredPairedAccessories;
-(void)setBrowsingXPCConnections:(NSMutableSet *)arg1 ;
-(void)setAccessoryServerBrowsers:(NSMutableArray *)arg1 ;
-(void)setIpAccessoryServerBrowser:(HAPAccessoryServerBrowserIP *)arg1 ;
-(void)setBtleAccessoryServerBrowser:(HAPAccessoryServerBrowserBTLE *)arg1 ;
-(BOOL)appIsInForeground;
-(void)setIdentifiersOfBTLEPairedAccessories:(NSMutableArray *)arg1 ;
-(void)setIdentifiersOfPairedAccessories:(NSMutableArray *)arg1 ;
-(void)setCurrentlyPairingAccessories:(NSMutableSet *)arg1 ;
-(void)setAddAccessoryCompletionHandlersForAccessoryServers:(NSMapTable *)arg1 ;
-(void)setPairSetupProviderCompletionHandlersForAccessoryServers:(NSMapTable *)arg1 ;
-(void)setPairingRetryTimersForAccessoryServers:(NSMapTable *)arg1 ;
-(void)setDiscoveredAccessoryServerIdentifiers:(NSMutableSet *)arg1 ;
@end

