/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFSearchResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSArray, NSData, NSMutableArray;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding> {

	BOOL _coreSpotlightSourced;
	BOOL _isParsecResult;
	NSString* _queryString;
	NSString* _protectionClass;
	NSDictionary* _featuresSet;
	NSNumber* _fileIdentifier;
	NSNumber* _parentFileIdentifier;
	NSString* _filename;
	NSNumber* _documentIdentifier;
	unsigned long long _topHitScore;
	unsigned long long _rank;
	unsigned long long _score;
	NSString* _launchString;
	NSArray* _launchDates;
	NSString* _userActivityType;
	NSString* _userActivitySecondaryString;
	NSData* _userActivityData;
	NSMutableArray* _duplicatedItems;

}

@property (nonatomic,retain) NSString * queryString;                              //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSString * protectionClass;                          //@synthesize protectionClass=_protectionClass - In the implementation block
@property (assign,nonatomic) BOOL coreSpotlightSourced;                           //@synthesize coreSpotlightSourced=_coreSpotlightSourced - In the implementation block
@property (nonatomic,retain) NSDictionary * featuresSet;                          //@synthesize featuresSet=_featuresSet - In the implementation block
@property (nonatomic,retain) NSNumber * fileIdentifier;                           //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * parentFileIdentifier;                     //@synthesize parentFileIdentifier=_parentFileIdentifier - In the implementation block
@property (nonatomic,retain) NSString * filename;                                 //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSNumber * documentIdentifier;                       //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long topHitScore;                      //@synthesize topHitScore=_topHitScore - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                             //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) unsigned long long score;                            //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL isParsecResult;                                 //@synthesize isParsecResult=_isParsecResult - In the implementation block
@property (nonatomic,retain) NSString * launchString;                             //@synthesize launchString=_launchString - In the implementation block
@property (nonatomic,retain) NSArray * launchDates;                               //@synthesize launchDates=_launchDates - In the implementation block
@property (nonatomic,retain) NSString * userActivityType;                         //@synthesize userActivityType=_userActivityType - In the implementation block
@property (nonatomic,retain) NSString * userActivitySecondaryString;              //@synthesize userActivitySecondaryString=_userActivitySecondaryString - In the implementation block
@property (nonatomic,retain) NSData * userActivityData;                           //@synthesize userActivityData=_userActivityData - In the implementation block
@property (nonatomic,retain) NSMutableArray * duplicatedItems;                    //@synthesize duplicatedItems=_duplicatedItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUrl:(id)arg1 ;
-(void)setDocumentIdentifier:(NSNumber *)arg1 ;
-(NSData *)userActivityData;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setScore:(unsigned long long)arg1 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(void)setProtectionClass:(NSString *)arg1 ;
-(NSNumber *)fileIdentifier;
-(NSNumber *)parentFileIdentifier;
-(NSNumber *)documentIdentifier;
-(unsigned long long)score;
-(BOOL)coreSpotlightSourced;
-(void)setCoreSpotlightSourced:(BOOL)arg1 ;
-(NSDictionary *)featuresSet;
-(void)setFeaturesSet:(NSDictionary *)arg1 ;
-(unsigned long long)topHitScore;
-(void)setTopHitScore:(unsigned long long)arg1 ;
-(BOOL)isParsecResult;
-(void)setIsParsecResult:(BOOL)arg1 ;
-(void)setLaunchString:(NSString *)arg1 ;
-(NSArray *)launchDates;
-(void)setLaunchDates:(NSArray *)arg1 ;
-(NSString *)userActivitySecondaryString;
-(void)setUserActivitySecondaryString:(NSString *)arg1 ;
-(void)setUserActivityData:(NSData *)arg1 ;
-(void)setDuplicatedItems:(NSMutableArray *)arg1 ;
-(void)setParentFileIdentifier:(NSNumber *)arg1 ;
-(void)setFileIdentifier:(NSNumber *)arg1 ;
-(NSString *)protectionClass;
-(id)objectForFeedback;
-(NSString *)launchString;
-(NSMutableArray *)duplicatedItems;
-(void)setUserActivityType:(NSString *)arg1 ;
-(NSString *)userActivityType;
@end

