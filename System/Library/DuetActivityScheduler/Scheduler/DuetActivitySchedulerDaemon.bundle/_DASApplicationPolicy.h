/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicyPredicting.h>

@class NSString, NSArray, _DKPredictor, NSMutableDictionary, _DKPredictionTimeline, NSDate;

@interface _DASApplicationPolicy : NSObject <_DASActivityPolicyPredicting> {

	NSString* _policyName;
	NSArray* _triggers;
	_DKPredictor* _predictor;
	NSMutableDictionary* _timelines;
	_DKPredictionTimeline* _topNPrediction;
	NSDate* _lastPredictionTimelineUpdate;
	NSMutableDictionary* _lastApplicationTimelineUpdate;

}

@property (nonatomic,copy) NSString * policyName;                                              //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                               //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) _DKPredictor * predictor;                                         //@synthesize predictor=_predictor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * timelines;                                  //@synthesize timelines=_timelines - In the implementation block
@property (nonatomic,retain) _DKPredictionTimeline * topNPrediction;                           //@synthesize topNPrediction=_topNPrediction - In the implementation block
@property (nonatomic,retain) NSDate * lastPredictionTimelineUpdate;                            //@synthesize lastPredictionTimelineUpdate=_lastPredictionTimelineUpdate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastApplicationTimelineUpdate;              //@synthesize lastApplicationTimelineUpdate=_lastApplicationTimelineUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(NSString *)policyName;
-(_DKPredictionTimeline *)topNPrediction;
-(void)setPolicyName:(NSString *)arg1 ;
-(BOOL)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(BOOL)appliesToActivity:(id)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(BOOL)shouldLogScoreToPowerLog;
-(double)predictedScoreForActivity:(id)arg1 atDate:(id)arg2 ;
-(void)setTopNPrediction:(_DKPredictionTimeline *)arg1 ;
-(double)scoreForAnyAppActivity:(id)arg1 atDate:(id)arg2 ;
-(double)scoreForActivity:(id)arg1 atDate:(id)arg2 withRationale:(id)arg3 ;
-(NSDate *)lastPredictionTimelineUpdate;
-(void)setLastPredictionTimelineUpdate:(NSDate *)arg1 ;
-(void)setLastApplicationTimelineUpdate:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lastApplicationTimelineUpdate;
-(void)setTimelines:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)setPredictor:(_DKPredictor *)arg1 ;
-(_DKPredictor *)predictor;
-(NSMutableDictionary *)timelines;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end
