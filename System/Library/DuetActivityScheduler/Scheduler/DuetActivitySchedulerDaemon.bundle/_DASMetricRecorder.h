/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DASMetricRecorder : NSObject
+(void)updateAverageForKey:(id)arg1 withNumerator:(double)arg2 withDenominator:(double)arg3 ;
+(void)recordOccurrenceForKey:(id)arg1 ;
+(id)metricQueue;
+(void)incrementOccurrencesForKey:(id)arg1 byCount:(long long)arg2 ;
@end

