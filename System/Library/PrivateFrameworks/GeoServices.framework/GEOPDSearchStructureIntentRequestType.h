/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSearchStructureIntentRequestType : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _intentType;
	int _structureType;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasStructureType; 
@property (assign,nonatomic) int structureType;                              //@synthesize structureType=_structureType - In the implementation block
@property (assign,nonatomic) BOOL hasIntentType; 
@property (assign,nonatomic) int intentType;                                 //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)structureType;
-(void)setStructureType:(int)arg1 ;
-(void)setHasStructureType:(BOOL)arg1 ;
-(BOOL)hasStructureType;
-(id)structureTypeAsString:(int)arg1 ;
-(int)StringAsStructureType:(id)arg1 ;
-(int)intentType;
-(void)setIntentType:(int)arg1 ;
-(void)setHasIntentType:(BOOL)arg1 ;
-(BOOL)hasIntentType;
-(id)intentTypeAsString:(int)arg1 ;
-(int)StringAsIntentType:(id)arg1 ;
@end

