/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingEnergyEventEntry.h>

@class NSNumber, NSDate;

@interface PLAccountingEnergyEstimateEventEntry : PLAccountingEnergyEventEntry {

	BOOL _isRootNodeEnergyAggregated;

}

@property (nonatomic,readonly) NSNumber * rootNodeID; 
@property (nonatomic,readonly) int parentEntryID; 
@property (nonatomic,readonly) int numAncestors; 
@property (nonatomic,readonly) NSNumber * distributionRuleID; 
@property (nonatomic,readonly) NSNumber * qualificationRuleIDSum; 
@property (assign,nonatomic) double correctionEnergy; 
@property (assign,nonatomic) double terminationRatio; 
@property (nonatomic,retain) NSDate * distributionDate; 
@property (nonatomic,retain) NSDate * correctionDate; 
@property (nonatomic,retain) NSDate * qualificationDate; 
@property (assign) BOOL isRootNodeEnergyAggregated;                            //@synthesize isRootNodeEnergyAggregated=_isRootNodeEnergyAggregated - In the implementation block
+(void)load;
+(id)entryKey;
-(NSNumber *)qualificationRuleIDSum;
-(double)terminationRatio;
-(double)correctionEnergy;
-(void)setQualificationDate:(NSDate *)arg1 ;
-(void)setCorrectionDate:(NSDate *)arg1 ;
-(void)setCorrectionEnergy:(double)arg1 ;
-(int)numAncestors;
-(NSNumber *)distributionRuleID;
-(void)setDistributionDate:(NSDate *)arg1 ;
-(NSNumber *)rootNodeID;
-(id)initWithNodeID:(id)arg1 withRootNodeID:(id)arg2 withParentEntryID:(int)arg3 withNumAncestors:(int)arg4 withEnergy:(double)arg5 withRange:(id)arg6 withEntryDate:(id)arg7 ;
-(NSDate *)correctionDate;
-(BOOL)isRootNodeEnergyAggregated;
-(NSDate *)distributionDate;
-(void)setIsRootNodeEnergyAggregated:(BOOL)arg1 ;
-(int)parentEntryID;
-(void)setTerminationRatio:(double)arg1 ;
-(NSDate *)qualificationDate;
@end

