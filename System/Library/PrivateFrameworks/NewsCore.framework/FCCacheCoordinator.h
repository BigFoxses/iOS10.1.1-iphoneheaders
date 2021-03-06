/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol FCCacheCoordinatorDelegate, FCOperationThrottler;
@class NSMutableSet, NSCountedSet, FCThreadSafeMutableDictionary, FCMutexLock, FCReadWriteLock, FCCacheCoordinatorFlushPolicy, NSString;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate> {

	BOOL _flushingEnabled;
	id<FCCacheCoordinatorDelegate> _delegate;
	NSMutableSet* _storedKeys;
	NSCountedSet* _interestedKeys;
	FCThreadSafeMutableDictionary* _cacheHintsByKey;
	FCMutexLock* _interestLock;
	FCReadWriteLock* _dataLock;
	id<FCOperationThrottler> _flushThrottler;
	FCCacheCoordinatorFlushPolicy* _flushPolicy;

}

@property (nonatomic,retain) NSMutableSet * storedKeys;                                    //@synthesize storedKeys=_storedKeys - In the implementation block
@property (nonatomic,retain) NSCountedSet * interestedKeys;                                //@synthesize interestedKeys=_interestedKeys - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableDictionary * cacheHintsByKey;              //@synthesize cacheHintsByKey=_cacheHintsByKey - In the implementation block
@property (nonatomic,retain) FCMutexLock * interestLock;                                   //@synthesize interestLock=_interestLock - In the implementation block
@property (nonatomic,retain) FCReadWriteLock * dataLock;                                   //@synthesize dataLock=_dataLock - In the implementation block
@property (nonatomic,retain) id<FCOperationThrottler> flushThrottler;                      //@synthesize flushThrottler=_flushThrottler - In the implementation block
@property (nonatomic,retain) FCCacheCoordinatorFlushPolicy * flushPolicy;                  //@synthesize flushPolicy=_flushPolicy - In the implementation block
@property (getter=isFlushingEnabled) BOOL flushingEnabled;                                 //@synthesize flushingEnabled=_flushingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<FCCacheCoordinatorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<FCCacheCoordinatorDelegate>)arg1 ;
-(id<FCCacheCoordinatorDelegate>)delegate;
-(void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2 ;
-(id)holdTokensForKeys:(id)arg1 ;
-(void)performCacheWrite:(/*^block*/id)arg1 ;
-(void)enableFlushingWithPolicy:(id)arg1 ;
-(BOOL)cacheContainsKey:(id)arg1 ;
-(void)performCacheRead:(/*^block*/id)arg1 ;
-(void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2 ;
-(id)persistableHints;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(BOOL)isFlushingEnabled;
-(NSMutableSet *)storedKeys;
-(NSCountedSet *)interestedKeys;
-(FCThreadSafeMutableDictionary *)cacheHintsByKey;
-(id)holdTokenForKeys:(id)arg1 ;
-(void)addInterestInKeys:(id)arg1 ;
-(void)removeInterestInKeys:(id)arg1 ;
-(FCReadWriteLock *)dataLock;
-(void)_modifyCacheHintForKeys:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setFlushPolicy:(FCCacheCoordinatorFlushPolicy *)arg1 ;
-(void)setFlushingEnabled:(BOOL)arg1 ;
-(id<FCOperationThrottler>)flushThrottler;
-(FCCacheCoordinatorFlushPolicy *)flushPolicy;
-(FCMutexLock *)interestLock;
-(id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2 ;
-(void)didAccessKeys:(id)arg1 ;
-(void)setupWithInitialKeys:(id)arg1 ;
-(id)holdTokenForKey:(id)arg1 ;
-(void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2 ;
-(void)setStoredKeys:(NSMutableSet *)arg1 ;
-(void)setInterestedKeys:(NSCountedSet *)arg1 ;
-(void)setCacheHintsByKey:(FCThreadSafeMutableDictionary *)arg1 ;
-(void)setInterestLock:(FCMutexLock *)arg1 ;
-(void)setDataLock:(FCReadWriteLock *)arg1 ;
-(void)setFlushThrottler:(id<FCOperationThrottler>)arg1 ;
@end

