/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLLocationMatchInfoInternal : NSObject <NSCopying> {

	long long fMatchQuality;
	CLLocationCoordinate2D fMatchCoordinate;
	double fMatchCourse;
	int fMatchFormOfWay;
	int fMatchRoadClass;
	BOOL fMatchShifted;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMatchQuality:(long long)arg1 matchCoordinate:(CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(BOOL)arg6 ;
@end

