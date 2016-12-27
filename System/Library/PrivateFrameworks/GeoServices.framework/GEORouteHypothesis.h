/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, GEOLocation, GEORouteHypothesisIncident, NSError, NSString;

@interface GEORouteHypothesis : NSObject <NSSecureCoding> {

	NSDate* _generationDate;
	GEOLocation* _lastLocation;
	int _transportType;
	NSDate* _suggestedDepartureDate;
	double _estimatedTravelTime;
	unsigned long long _currentTrafficDensity;
	unsigned long long _historicTrafficDensity;
	GEORouteHypothesisIncident* _mostRelevantIncident;
	long long _travelState;
	BOOL _supportsLiveTraffic;
	NSError* _error;
	NSDate* _conservativeDepartureDate;
	NSDate* _aggressiveDepartureDate;
	double _conservativeTravelTime;
	double _aggressiveTravelTime;
	NSString* _routeName;
	NSString* _trafficDensityDescription;

}

@property (nonatomic,retain,readonly) NSDate * generationDate;                                        //@synthesize generationDate=_generationDate - In the implementation block
@property (nonatomic,retain,readonly) GEOLocation * lastLocation;                                     //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) int transportType;                                                     //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain,readonly) NSDate * suggestedDepartureDate;                                //@synthesize suggestedDepartureDate=_suggestedDepartureDate - In the implementation block
@property (nonatomic,readonly) double estimatedTravelTime;                                            //@synthesize estimatedTravelTime=_estimatedTravelTime - In the implementation block
@property (nonatomic,readonly) unsigned long long currentTrafficDensity;                              //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (nonatomic,readonly) unsigned long long historicTrafficDensity;                             //@synthesize historicTrafficDensity=_historicTrafficDensity - In the implementation block
@property (nonatomic,readonly) NSString * trafficDensityDescription; 
@property (nonatomic,copy,readonly) NSString * routeName;                                             //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,retain,readonly) GEORouteHypothesisIncident * mostRelevantIncident;              //@synthesize mostRelevantIncident=_mostRelevantIncident - In the implementation block
@property (nonatomic,readonly) long long travelState;                                                 //@synthesize travelState=_travelState - In the implementation block
@property (nonatomic,readonly) BOOL supportsLiveTraffic;                                              //@synthesize supportsLiveTraffic=_supportsLiveTraffic - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain,readonly) NSDate * conservativeDepartureDate;                             //@synthesize conservativeDepartureDate=_conservativeDepartureDate - In the implementation block
@property (nonatomic,retain,readonly) NSDate * aggressiveDepartureDate;                               //@synthesize aggressiveDepartureDate=_aggressiveDepartureDate - In the implementation block
@property (nonatomic,readonly) double conservativeTravelTime;                                         //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,readonly) double aggressiveTravelTime;                                           //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_routeHypothesisErrorWithUnderlyingError:(id)arg1 ;
+(BOOL)supportsTravelState:(long long)arg1 forTransportType:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)transportType;
-(NSDate *)suggestedDepartureDate;
-(unsigned long long)currentTrafficDensity;
-(unsigned long long)historicTrafficDensity;
-(long long)travelState;
-(BOOL)supportsLiveTraffic;
-(NSString *)routeName;
-(void)setSupportsLiveTraffic:(BOOL)arg1 ;
-(void)setRouteName:(NSString *)arg1 ;
-(NSString *)trafficDensityDescription;
-(void)_updateDepartureAndArrivalSuggestionsForArrivalDate:(id)arg1 travelTimeWithTraffic:(double)arg2 conservativeTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4 transportType:(int)arg5 ;
-(void)_updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(void)_updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(void)_updateTrafficDensityDescription:(id)arg1 ;
-(void)_updateTrafficIncidents:(id)arg1 ;
-(void)_updateTravelStateHasArrived:(BOOL)arg1 isTraveling:(BOOL)arg2 travelScore:(double)arg3 ;
-(void)_clearHypothesisAndSetErrorWithCode:(long long)arg1 ;
-(NSDate *)generationDate;
-(double)estimatedTravelTime;
-(GEORouteHypothesisIncident *)mostRelevantIncident;
-(NSDate *)conservativeDepartureDate;
-(NSDate *)aggressiveDepartureDate;
-(double)conservativeTravelTime;
-(double)aggressiveTravelTime;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(void)setLastLocation:(GEOLocation *)arg1 ;
-(GEOLocation *)lastLocation;
@end
