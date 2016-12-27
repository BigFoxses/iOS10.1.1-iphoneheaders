/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PSYServiceSyncSessionDelegate;
@class NSObject, NRDevice, NSUUID, PSYSyncCoordinator;

@interface PSYServiceSyncSession : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isComplete;
	BOOL _complete;
	NRDevice* _pairedDevice;
	unsigned long long _syncSessionType;
	NSUUID* _sessionIdentifier;
	PSYSyncCoordinator* _syncCoordinator;
	unsigned long long _switchID;
	id<PSYServiceSyncSessionDelegate> _delegate;

}

@property (nonatomic,retain) NRDevice * pairedDevice;                                        //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;                             //@synthesize syncSessionType=_syncSessionType - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                                     //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic,__weak) PSYSyncCoordinator * syncCoordinator;                    //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<PSYServiceSyncSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long switchID;                                    //@synthesize switchID=_switchID - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete;                              //@synthesize complete=_complete - In the implementation block
-(void)setDelegate:(id<PSYServiceSyncSessionDelegate>)arg1 ;
-(id<PSYServiceSyncSessionDelegate>)delegate;
-(NSUUID *)sessionIdentifier;
-(id)initWithQueue:(id)arg1 ;
-(NRDevice *)pairedDevice;
-(void)setPairedDevice:(NRDevice *)arg1 ;
-(BOOL)isComplete;
-(void)setSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
-(unsigned long long)switchID;
-(void)setSwitchID:(unsigned long long)arg1 ;
-(void)syncDidCompleteSending;
-(void)syncDidFailWithError:(id)arg1 ;
-(void)syncDidComplete;
-(unsigned long long)syncSessionType;
-(PSYSyncCoordinator *)syncCoordinator;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(void)reportProgress:(double)arg1 ;
@end
