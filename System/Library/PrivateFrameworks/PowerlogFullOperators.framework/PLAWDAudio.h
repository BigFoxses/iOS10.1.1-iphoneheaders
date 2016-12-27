/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition, NSDate;

@interface PLAWDAudio : PLAWDAuxMetrics {

	PLEntryNotificationOperatorComposition* _audioRailCallback;
	NSDate* _startTime;

}

@property (retain) PLEntryNotificationOperatorComposition * audioRailCallback;              //@synthesize audioRailCallback=_audioRailCallback - In the implementation block
@property (retain) NSDate * startTime;                                                      //@synthesize startTime=_startTime - In the implementation block
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitionAwdAudio;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)resetAudioTable;
-(void)setAudioRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)finalizeAudioTable;
-(void)handleAudioRailCallback:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)audioRailCallback;
@end
