/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKDiscoverUserIdentitiesOperation : CKOperation {

	NSArray* _userIdentityLookupInfos;
	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverUserIdentitiesCompletionBlock;

}

@property (nonatomic,copy) NSArray * userIdentityLookupInfos;                     //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                        //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverUserIdentitiesCompletionBlock;              //@synthesize discoverUserIdentitiesCompletionBlock=_discoverUserIdentitiesCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(void)setDiscoverUserIdentitiesCompletionBlock:(id)arg1 ;
-(id)userIdentityDiscoveredBlock;
-(id)discoverUserIdentitiesCompletionBlock;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationInfoClass;
-(NSArray *)userIdentityLookupInfos;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(id)initWithUserIdentityLookupInfos:(id)arg1 ;
@end

