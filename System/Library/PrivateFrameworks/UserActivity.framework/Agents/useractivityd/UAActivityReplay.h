/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <useractivityd/SFActivityAdvertiserDelegate.h>
#import <useractivityd/SFActivityScannerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, SFPeerDevice, UAActivityReplayAdvertiser, UAActivityReplayReceiver, UAReplayClientController, UAMockActivityAdvertiser, UAMockActivityScanner, NSString;

@interface UAActivityReplay : UACornerActionManagerHandler <NSNetServiceDelegate, SFActivityAdvertiserDelegate, SFActivityScannerDelegate> {

	NSMutableDictionary* _pendingPayloadFetches;
	NSObject*<OS_dispatch_queue> _queue;
	SFPeerDevice* _pairedPeer;
	UAActivityReplayAdvertiser* _advertiser;
	UAActivityReplayReceiver* _receiver;
	UAReplayClientController* _client;
	UAMockActivityAdvertiser* _mockAdvertiser;
	UAMockActivityScanner* _mockScanner;
	NSMutableDictionary* _items;

}

@property (retain) UAActivityReplayAdvertiser * advertiser;                         //@synthesize advertiser=_advertiser - In the implementation block
@property (retain) UAActivityReplayReceiver * receiver;                             //@synthesize receiver=_receiver - In the implementation block
@property (retain) UAReplayClientController * client;                               //@synthesize client=_client - In the implementation block
@property (retain,readonly) UAMockActivityAdvertiser * mockAdvertiser;              //@synthesize mockAdvertiser=_mockAdvertiser - In the implementation block
@property (retain,readonly) UAMockActivityScanner * mockScanner;                    //@synthesize mockScanner=_mockScanner - In the implementation block
@property (retain) NSMutableDictionary * items;                                     //@synthesize items=_items - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (retain) SFPeerDevice * pairedPeer;                                       //@synthesize pairedPeer=_pairedPeer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(void)setPairedPeer:(SFPeerDevice *)arg1 ;
-(id)sharingAdvertiser;
-(UAMockActivityAdvertiser *)mockAdvertiser;
-(id)sharingReceiver;
-(UAMockActivityScanner *)mockScanner;
-(SFPeerDevice *)pairedPeer;
-(id)scanMockAdvertisement:(id)arg1 ;
-(BOOL)processCommand:(id)arg1 ;
-(void)doAdvertiseAdvertisementPayload:(id)arg1 options:(id)arg2 ;
-(BOOL)processCommands:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)sendResponse:(id)arg1 ;
-(NSMutableDictionary *)items;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(UAReplayClientController *)client;
-(void)setReceiver:(UAActivityReplayReceiver *)arg1 ;
-(UAActivityReplayReceiver *)receiver;
-(void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 command:(id)arg3 requestedByDevice:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(UAActivityReplayAdvertiser *)advertiser;
-(void)setAdvertiser:(UAActivityReplayAdvertiser *)arg1 ;
-(BOOL)terminate;
-(void)setClient:(UAReplayClientController *)arg1 ;
@end
