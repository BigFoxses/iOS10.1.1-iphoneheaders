/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation {

	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverAllUserIdentitiesCompletionBlock;
	NSMutableArray* _discoveredIdentities;

}

@property (nonatomic,retain) NSMutableArray * discoveredIdentities;                  //@synthesize discoveredIdentities=_discoveredIdentities - In the implementation block
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                           //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverAllUserIdentitiesCompletionBlock;              //@synthesize discoverAllUserIdentitiesCompletionBlock=_discoverAllUserIdentitiesCompletionBlock - In the implementation block
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(void)setDiscoverAllUserIdentitiesCompletionBlock:(id)arg1 ;
-(id)discoverAllUserIdentitiesCompletionBlock;
-(id)userIdentityDiscoveredBlock;
-(NSMutableArray *)discoveredIdentities;
-(void)setDiscoveredIdentities:(NSMutableArray *)arg1 ;
-(void)setLongLived:(BOOL)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationInfoClass;
@end

