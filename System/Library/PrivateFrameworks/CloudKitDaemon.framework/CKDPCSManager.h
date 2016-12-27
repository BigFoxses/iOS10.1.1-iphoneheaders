/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/CKDProtocolTranslatorIdentityDelegate.h>

@protocol NSObject, OS_dispatch_source;
@class NSArray, CKDClientContext, NSOperationQueue, NSString, NSMutableDictionary, NSObject;

@interface CKDPCSManager : NSObject <CKDProtocolTranslatorIdentityDelegate> {

	NSArray* _sharingIdentityFingerprints;
	CKDClientContext* _context;
	NSOperationQueue* _operationQueue;
	NSString* _currentAccountIdentifier;
	NSMutableDictionary* _PCSIdentityWrappersByServiceName;
	PCSIdentityDataRef _debugIdentity;
	NSString* _serviceName;
	NSString* _liverpoolPublicKey;
	id<NSObject> _contextObserver;
	NSObject*<OS_dispatch_source> _pcsUpdateSource;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSString * currentAccountIdentifier;                                           //@synthesize currentAccountIdentifier=_currentAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * PCSIdentityWrappersByServiceName;              //@synthesize PCSIdentityWrappersByServiceName=_PCSIdentityWrappersByServiceName - In the implementation block
@property (assign,nonatomic) PCSIdentityDataRef debugIdentity;                                    //@synthesize debugIdentity=_debugIdentity - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSArray * sharingIdentityFingerprints;                               //@synthesize sharingIdentityFingerprints=_sharingIdentityFingerprints - In the implementation block
@property (nonatomic,retain) NSString * liverpoolPublicKey;                                       //@synthesize liverpoolPublicKey=_liverpoolPublicKey - In the implementation block
@property (nonatomic,retain) id<NSObject> contextObserver;                                        //@synthesize contextObserver=_contextObserver - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> pcsUpdateSource;                       //@synthesize pcsUpdateSource=_pcsUpdateSource - In the implementation block
@property (nonatomic,__weak,readonly) CKDClientContext * context;                                 //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CKDClientContext *)context;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithClientContext:(id)arg1 ;
-(id)pcsDataFromFetchedShare:(id)arg1 withServiceType:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)removePublicKeys:(id)arg1 fromPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)wrapEncrypedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 forField:(id)arg3 ;
-(id)unwrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 forField:(id)arg3 ;
-(PCSIdentityDataRef)createRandomSharingIdentityWithError:(id*)arg1 ;
-(id)dataFromSharingIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(id)dataFromZonePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)etagFromZonePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createZonePCSWithError:(id*)arg1 ;
-(OpaquePCSShareProtectionRef)createZonePCSFromData:(id)arg1 error:(id*)arg2 ;
-(id)_serviceNameForContainerID:(id)arg1 ;
-(NSString *)currentAccountIdentifier;
-(void)setCurrentAccountIdentifier:(NSString *)arg1 ;
-(void)setSharingIdentityFingerprints:(NSArray *)arg1 ;
-(void)setPCSIdentityWrappersByServiceName:(NSMutableDictionary *)arg1 ;
-(void)setLiverpoolPublicKey:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_source>)pcsUpdateSource;
-(PCSIdentitySetDataRef)_reallyCopyIdentityForService:(id)arg1 withError:(id*)arg2 ;
-(id)_addServiceIdentitiesOfType:(id)arg1 toSet:(PCSIdentitySetDataRef)arg2 fromSet:(PCSIdentitySetDataRef)arg3 markCurrent:(BOOL)arg4 ;
-(PCSIdentitySetDataRef)_createInMemoryIdentitySetForService:(id)arg1 error:(id*)arg2 ;
-(id)_internalServicesToCombineWithLiverpoolKey;
-(PCSIdentitySetDataRef)_createIdentitySetByAddingLiverpoolIdentity:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)PCSIdentityWrappersByServiceName;
-(PCSIdentitySetDataRef)copyServiceIdentityForDSID:(id)arg1 withError:(id*)arg2 ;
-(id)_PCSServiceStringFromCKServiceType:(unsigned long long)arg1 ;
-(PCSIdentitySetDataRef)_copyIdentityForService:(id)arg1 useCache:(BOOL)arg2 withError:(id*)arg3 ;
-(PCSIdentitySetDataRef)_copyServiceIdentityWithType:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)_copyPublicKeyDataForIdentitySet:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 withError:(id*)arg3 ;
-(PCSPublicIdentityDataRef)copyDiversifiedIdentityForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(PCSIdentityDataRef)createCombinedIdentityWithOutOfNetworkPrivateKey:(id)arg1 publicSharingIdentity:(id)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 sharingIdentity:(PCSIdentityDataRef)arg2 error:(id*)arg3 ;
-(id)copyDiversifiedPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(PCSPublicIdentityDataRef)createPublicSharingIdentityFromPublicKey:(id)arg1 error:(id*)arg2 ;
-(id)addPublicIdentity:(PCSPublicIdentityDataRef)arg1 toSharePCS:(OpaquePCSShareProtectionRef)arg2 permission:(unsigned long long)arg3 ;
-(id)removeSharingIdentity:(PCSIdentityDataRef)arg1 fromSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)dataFromSharePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 withService:(unsigned long long)arg2 error:(id*)arg3 ;
-(OpaquePCSShareProtectionRef)createRecordPCSFromData:(id)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(PCSIdentitySetDataRef)_copyServiceIdentityWithType:(unsigned long long)arg1 useCache:(BOOL)arg2 withError:(id*)arg3 ;
-(id)_addIdentity:(PCSIdentitySetDataRef)arg1 withService:(unsigned long long)arg2 toPCS:(OpaquePCSShareProtectionRef)arg3 ;
-(id)_fingerprintsFromIdentitySet:(PCSIdentitySetDataRef)arg1 ;
-(id)addIdentityForService:(unsigned long long)arg1 toPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)etagFromPCSData:(id)arg1 ;
-(NSString *)liverpoolPublicKey;
-(OpaquePCSShareProtectionRef)createRecordPCSFromData:(id)arg1 zonePCS:(OpaquePCSShareProtectionRef)arg2 logFailure:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createRecordPCSFromData:(id)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 logFailure:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)addSharePCS:(OpaquePCSShareProtectionRef)arg1 toRecordPCS:(OpaquePCSShareProtectionRef)arg2 permission:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)dataFromRecordPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createEmptySharePCSWithError:(id*)arg1 ;
-(OpaquePCSShareProtectionRef)_addPublicIdentityForService:(unsigned long long)arg1 toSharePCS:(OpaquePCSShareProtectionRef)arg2 withError:(id*)arg3 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 sharingIdentity:(PCSIdentityDataRef)arg2 logFailure:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromData:(id)arg1 withService:(unsigned long long)arg2 logFailure:(BOOL)arg3 error:(id*)arg4 ;
-(id)decryptPCSDataOnSharePCS:(id)arg1 ;
-(id)addSharingIdentity:(PCSIdentityDataRef)arg1 toSharePCS:(OpaquePCSShareProtectionRef)arg2 permission:(unsigned long long)arg3 ;
-(id)removePublicIdentity:(PCSPublicIdentityDataRef)arg1 fromSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSFromEncryptedData:(id)arg1 error:(id*)arg2 ;
-(PCSIdentityDataRef)createSharingIdentityFromData:(id)arg1 error:(id*)arg2 ;
-(id)referenceIdentifierStringFromAssetKey:(id)arg1 ;
-(NSArray *)sharingIdentityFingerprints;
-(PCSIdentityDataRef)debugSharingIdentity;
-(id)copyPublicKeyForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)copyPublicIdentityForDSID:(id)arg1 withError:(id*)arg2 ;
-(id)createProtectionInfoFromOONPrivateKey:(id)arg1 privateToken:(id)arg2 OONProtectionInfo:(id)arg3 error:(id*)arg4 ;
-(BOOL)canDecryptInvitedProtectionData:(id)arg1 participantProtectionInfo:(id)arg2 serviceType:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)publicKeyIDFromIdentity:(OpaquePCSShareProtectionRef)arg1 ;
-(id)repairZonePCSData:(id)arg1 error:(id*)arg2 ;
-(BOOL)zonePCSNeedsUpdate:(OpaquePCSShareProtectionRef)arg1 ;
-(id)updateServiceIdentityOnZonePCS:(OpaquePCSShareProtectionRef)arg1 ;
-(OpaquePCSShareProtectionRef)createRecordPCSWithZonePCS:(OpaquePCSShareProtectionRef)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 createLite:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createRecordPCSWithEncryptedZonePCS:(CFDataRef)arg1 sharePCS:(OpaquePCSShareProtectionRef)arg2 createLite:(BOOL)arg3 error:(id*)arg4 ;
-(OpaquePCSShareProtectionRef)createRecordPCSFromData:(id)arg1 zonePCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(BOOL)addSharePCS:(OpaquePCSShareProtectionRef)arg1 toRecordPCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(BOOL)removeSharePCS:(OpaquePCSShareProtectionRef)arg1 fromRecordPCS:(OpaquePCSShareProtectionRef)arg2 error:(id*)arg3 ;
-(id)etagFromRecordPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePCSForService:(unsigned long long)arg1 withError:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createSharePublicPCSWithIdentity:(PCSIdentityDataRef)arg1 error:(id*)arg2 ;
-(OpaquePCSShareProtectionRef)createChainPCSWithError:(id*)arg1 ;
-(id)etagFromSharePCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)addIdentityBackToPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(id)removeEncryptedPCS:(id)arg1 fromSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)removePublicKeyID:(id)arg1 fromPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)sharingIdentityDataFromPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)decryptChainPCSForRecordPCS:(id)arg1 ;
-(id)unwrapAssetKey:(id)arg1 withRecordPCS:(OpaquePCSShareProtectionRef)arg2 withError:(id*)arg3 ;
-(id)wrapAssetKey:(id)arg1 withRecordPCS:(OpaquePCSShareProtectionRef)arg2 withError:(id*)arg3 ;
-(id)newAssetKeyWithError:(id*)arg1 ;
-(id)referenceSignatureFromAssetKey:(id)arg1 ;
-(id)protectionIdentifierFromShareProtection:(OpaquePCSShareProtectionRef)arg1 ;
-(PCSIdentityDataRef)debugIdentity;
-(void)setDebugIdentity:(PCSIdentityDataRef)arg1 ;
-(id<NSObject>)contextObserver;
-(void)setContextObserver:(id<NSObject>)arg1 ;
-(void)setPcsUpdateSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
@end
