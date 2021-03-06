/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, MSPDirectionsSearch, NSString, MSPPlaceDisplay, MSPQuerySearch, MSPRidesharingTrip, MSPTransitStorageLineItem;

@interface MSPHistoryEntryStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	MSPDirectionsSearch* _directionsSearch;
	NSString* _identifier;
	MSPPlaceDisplay* _placeDisplay;
	MSPQuerySearch* _querySearch;
	MSPRidesharingTrip* _ridesharingTrip;
	int _searchType;
	MSPTransitStorageLineItem* _transitLineItem;
	SCD_Struct_MS3 _has;

}

@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType;                                           //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                          //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL hasQuerySearch; 
@property (nonatomic,retain) MSPQuerySearch * querySearch;                             //@synthesize querySearch=_querySearch - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsSearch; 
@property (nonatomic,retain) MSPDirectionsSearch * directionsSearch;                   //@synthesize directionsSearch=_directionsSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceDisplay; 
@property (nonatomic,retain) MSPPlaceDisplay * placeDisplay;                           //@synthesize placeDisplay=_placeDisplay - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitLineItem; 
@property (nonatomic,retain) MSPTransitStorageLineItem * transitLineItem;              //@synthesize transitLineItem=_transitLineItem - In the implementation block
@property (nonatomic,readonly) BOOL hasRidesharingTrip; 
@property (nonatomic,retain) MSPRidesharingTrip * ridesharingTrip;                     //@synthesize ridesharingTrip=_ridesharingTrip - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(id)initWithHistoryItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(NSString *)identifier;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)searchType;
-(void)setSearchType:(int)arg1 ;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasPosition;
-(void)setTransitLineItem:(MSPTransitStorageLineItem *)arg1 ;
-(MSPTransitStorageLineItem *)transitLineItem;
-(void)setHasPosition:(BOOL)arg1 ;
-(BOOL)hasQuerySearch;
-(BOOL)hasDirectionsSearch;
-(BOOL)hasPlaceDisplay;
-(BOOL)hasTransitLineItem;
-(BOOL)hasRidesharingTrip;
-(MSPQuerySearch *)querySearch;
-(void)setQuerySearch:(MSPQuerySearch *)arg1 ;
-(MSPDirectionsSearch *)directionsSearch;
-(void)setDirectionsSearch:(MSPDirectionsSearch *)arg1 ;
-(MSPPlaceDisplay *)placeDisplay;
-(void)setPlaceDisplay:(MSPPlaceDisplay *)arg1 ;
-(MSPRidesharingTrip *)ridesharingTrip;
-(void)setRidesharingTrip:(MSPRidesharingTrip *)arg1 ;
@end

