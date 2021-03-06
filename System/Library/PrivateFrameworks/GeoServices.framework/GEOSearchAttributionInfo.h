/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOSearchAttributionSource, NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {

	GEOSearchAttributionSource* _source;
	NSArray* _logoPaths;
	NSArray* _snippetLogoPaths;
	NSString* _displayName;
	unsigned _attributionRequirementsMask;

}

@property (nonatomic,readonly) GEOSearchAttributionSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned requirementsMask;                        //@synthesize attributionRequirementsMask=_attributionRequirementsMask - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) NSArray * attributionApps; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(GEOSearchAttributionSource *)source;
-(unsigned)version;
-(NSString *)displayName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)attributionApps;
-(NSString *)webBaseActionURL;
-(id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4 ;
-(BOOL)supportsActionURLs;
-(BOOL)hasAttributionRequirement:(int)arg1 ;
-(id)logoPathForScale:(double)arg1 ;
-(id)snippetLogoPathForScale:(double)arg1 ;
-(void)addLogoPath:(id)arg1 ;
-(unsigned)requirementsMask;
@end

