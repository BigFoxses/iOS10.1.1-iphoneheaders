/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, GEOMapItemAttribution;


@protocol GEOEncyclopedicInfo <NSObject>
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,readonly) NSString * textBlockTitle; 
@property (nonatomic,readonly) NSString * textBlockText; 
@property (nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (nonatomic,readonly) NSArray * factoids; 
@property (nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@required
-(BOOL)hasTextBlock;
-(NSString *)textBlockTitle;
-(NSString *)textBlockText;
-(BOOL)hasPairOfFactoids;
-(NSArray *)factoids;
-(GEOMapItemAttribution *)encyclopedicAttribution;

@end

