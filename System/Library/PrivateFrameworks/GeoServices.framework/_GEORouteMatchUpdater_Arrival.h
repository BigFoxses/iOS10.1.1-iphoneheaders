/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_Arrival : _GEORouteMatchUpdater {

	GEOComposedRouteStep* _arrivalStep;
	GEOComposedRouteStep* _previousExitStationStep;
	PolylineCoordinate _arrivalRouteCoordinate;
	SCD_Struct_GE26 _destinationLocationCoordinate;

}
-(void)dealloc;
-(BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)initWithRoute:(id)arg1 arrivalStep:(id)arg2 ;
@end
