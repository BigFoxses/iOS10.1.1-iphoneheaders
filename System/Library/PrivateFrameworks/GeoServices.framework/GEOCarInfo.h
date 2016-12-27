/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOCarInfo : PBCodable <NSCopying> {

	GEOScreenResolution _screenResolution;
	int _deviceConnection;
	int _interactionModel;
	NSString* _manufacturer;
	NSString* _model;
	SCD_Struct_GE20 _has;

}

@property (assign,nonatomic) BOOL hasInteractionModel; 
@property (assign,nonatomic) int interactionModel;                              //@synthesize interactionModel=_interactionModel - In the implementation block
@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                           //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                                  //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasScreenResolution; 
@property (assign,nonatomic) GEOScreenResolution screenResolution;              //@synthesize screenResolution=_screenResolution - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceConnection; 
@property (assign,nonatomic) int deviceConnection;                              //@synthesize deviceConnection=_deviceConnection - In the implementation block
+(id)carInfoWithTraits:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)interactionModel;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(id)initWithTraits:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setInteractionModel:(int)arg1 ;
-(void)setHasInteractionModel:(BOOL)arg1 ;
-(BOOL)hasInteractionModel;
-(id)interactionModelAsString:(int)arg1 ;
-(int)StringAsInteractionModel:(id)arg1 ;
-(BOOL)hasManufacturer;
-(BOOL)hasModel;
-(void)setScreenResolution:(GEOScreenResolution)arg1 ;
-(void)setHasScreenResolution:(BOOL)arg1 ;
-(BOOL)hasScreenResolution;
-(int)deviceConnection;
-(void)setDeviceConnection:(int)arg1 ;
-(void)setHasDeviceConnection:(BOOL)arg1 ;
-(BOOL)hasDeviceConnection;
-(id)deviceConnectionAsString:(int)arg1 ;
-(int)StringAsDeviceConnection:(id)arg1 ;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(GEOScreenResolution)screenResolution;
-(void)setModel:(NSString *)arg1 ;
@end
