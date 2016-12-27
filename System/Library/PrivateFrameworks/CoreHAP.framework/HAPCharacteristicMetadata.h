/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : NSObject <NSCopying> {

	HAPMetadataConstraints* _constraints;
	NSString* _manufacturerDescription;
	NSString* _format;
	NSString* _units;

}

@property (nonatomic,retain) HAPMetadataConstraints * constraints;              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) NSString * manufacturerDescription;                  //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,retain) NSString * format;                                 //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * units;                                  //@synthesize units=_units - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)format;
-(HAPMetadataConstraints *)constraints;
-(void)setConstraints:(HAPMetadataConstraints *)arg1 ;
-(NSString *)units;
-(void)setUnits:(NSString *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4 ;
-(BOOL)isEqualToCharacteristicMetadata:(id)arg1 ;
-(id)_generateValidConstraints:(id)arg1 ;
-(void)setManufacturerDescription:(NSString *)arg1 ;
-(NSString *)manufacturerDescription;
@end
