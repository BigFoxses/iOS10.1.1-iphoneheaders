/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RTVisitMonitorStatus : NSObject <NSCopying> {

	BOOL _monitoringVisitIncidents;
	BOOL _monitoringLeechedVisitIncidents;
	BOOL _monitoringLowConfidenceVisitIncidents;
	unsigned long long _engineDependentCount;

}

@property (assign,nonatomic) BOOL monitoringVisitIncidents;                           //@synthesize monitoringVisitIncidents=_monitoringVisitIncidents - In the implementation block
@property (assign,nonatomic) BOOL monitoringLeechedVisitIncidents;                    //@synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents - In the implementation block
@property (assign,nonatomic) BOOL monitoringLowConfidenceVisitIncidents;              //@synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents - In the implementation block
@property (assign,nonatomic) unsigned long long engineDependentCount;                 //@synthesize engineDependentCount=_engineDependentCount - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)invalid;
-(unsigned long long)engineDependentCount;
-(void)setEngineDependentCount:(unsigned long long)arg1 ;
-(void)setMonitoringVisitIncidents:(BOOL)arg1 ;
-(void)setMonitoringLeechedVisitIncidents:(BOOL)arg1 ;
-(void)setMonitoringLowConfidenceVisitIncidents:(BOOL)arg1 ;
-(BOOL)monitoringLowConfidenceVisitIncidents;
-(BOOL)monitoringVisitIncidents;
-(BOOL)monitoringLeechedVisitIncidents;
-(id)initWithMonitoringVisitIncidents:(BOOL)arg1 monitoringLeechedVisitIncidents:(BOOL)arg2 monitoringLowConfidenceVisitIncidents:(BOOL)arg3 engineDependentCount:(unsigned long long)arg4 ;
@end

