/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCPlaybackIntentDataSource, NSSecureCoding;
@class NSString, NSData;

@interface MPCPlaybackIntent : NSObject {

	id<MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
	long long _kind;
	NSString* _title;
	long long _tracklistSource;
	id<NSSecureCoding> _tracklistToken;
	long long _artworkSource;
	id<NSSecureCoding> _artworkToken;
	long long _shuffleMode;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;

}

@property (nonatomic,readonly) id<MPCPlaybackIntentDataSource> tracklistDataSource; 
@property (assign,nonatomic) long long kind;                                                     //@synthesize kind=_kind - In the implementation block
@property (assign,nonatomic) long long tracklistSource;                                          //@synthesize tracklistSource=_tracklistSource - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> tracklistToken;                                  //@synthesize tracklistToken=_tracklistToken - In the implementation block
@property (assign,nonatomic) long long artworkSource;                                            //@synthesize artworkSource=_artworkSource - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> artworkToken;                                    //@synthesize artworkToken=_artworkToken - In the implementation block
@property (assign,nonatomic) long long shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,copy) NSString * playActivityFeatureName;                                   //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;                              //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
+(id)tracklistDataSourceForSource:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(long long)kind;
-(id<NSSecureCoding>)artworkToken;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(id)artworkCatalog;
-(long long)shuffleMode;
-(void)setShuffleMode:(long long)arg1 ;
-(void)setKind:(long long)arg1 ;
-(id<MPCPlaybackIntentDataSource>)tracklistDataSource;
-(void)configureContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)populateItemsForContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_legacyRepresentationForPlayer:(id)arg1 ;
-(long long)tracklistSource;
-(void)setTracklistSource:(long long)arg1 ;
-(id<NSSecureCoding>)tracklistToken;
-(void)setTracklistToken:(id<NSSecureCoding>)arg1 ;
-(long long)artworkSource;
-(void)setArtworkSource:(long long)arg1 ;
-(void)setArtworkToken:(id<NSSecureCoding>)arg1 ;
@end
