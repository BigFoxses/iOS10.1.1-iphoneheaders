/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate, NSTimer, ICCloudThrottlingLevel;

@interface ICCloudThrottlingPolicy : NSObject {

	NSArray* _throttlingLevels;
	double _resetInterval;
	unsigned long long _currentBatchCount;
	unsigned long long _currentLevelIndex;
	NSDate* _policyStartDate;
	NSTimer* _policyResetTimer;

}

@property (assign,nonatomic) unsigned long long currentBatchCount;                 //@synthesize currentBatchCount=_currentBatchCount - In the implementation block
@property (nonatomic,retain) NSArray * throttlingLevels;                           //@synthesize throttlingLevels=_throttlingLevels - In the implementation block
@property (assign,nonatomic) unsigned long long currentLevelIndex;                 //@synthesize currentLevelIndex=_currentLevelIndex - In the implementation block
@property (nonatomic,readonly) ICCloudThrottlingLevel * currentLevel; 
@property (assign) double resetInterval;                                           //@synthesize resetInterval=_resetInterval - In the implementation block
@property (retain) NSDate * policyStartDate;                                       //@synthesize policyStartDate=_policyStartDate - In the implementation block
@property (retain) NSTimer * policyResetTimer;                                     //@synthesize policyResetTimer=_policyResetTimer - In the implementation block
@property (nonatomic,readonly) double batchInterval; 
+(void)resetSavedPolicyState;
-(id)init;
-(void)dealloc;
-(unsigned long long)currentBatchCount;
-(id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2 ;
-(void)setThrottlingLevels:(NSArray *)arg1 ;
-(void)setResetInterval:(double)arg1 ;
-(void)loadSavedPolicyState;
-(NSDate *)policyStartDate;
-(double)resetInterval;
-(void)resetPolicy;
-(void)startPolicyResetTimer;
-(void)savePolicyState;
-(NSTimer *)policyResetTimer;
-(void)setPolicyResetTimer:(NSTimer *)arg1 ;
-(void)setCurrentBatchCount:(unsigned long long)arg1 ;
-(ICCloudThrottlingLevel *)currentLevel;
-(unsigned long long)currentLevelIndex;
-(NSArray *)throttlingLevels;
-(void)changeLevelIfNecessary;
-(void)setCurrentLevelIndex:(unsigned long long)arg1 ;
-(double)batchInterval;
-(void)setPolicyStartDate:(NSDate *)arg1 ;
-(void)incrementBatchCount;
@end

