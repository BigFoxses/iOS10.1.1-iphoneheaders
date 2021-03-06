/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LifetimeServoAFLUTColumn;

@interface LifetimeServoAFLUT : NSObject {

	int _columnCount;
	int _minVoltage;
	int _maxVoltage;
	LifetimeServoAFLUTColumn* _afLUTColumns[26];

}
-(id)initWithAFTableColumns:(id)arg1 ;
-(float)accelerationFactor:(int)arg1 voltage:(int)arg2 ;
@end

