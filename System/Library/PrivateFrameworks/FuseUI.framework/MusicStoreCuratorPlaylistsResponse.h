/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPChangeDetails, NSArray;

@interface MusicStoreCuratorPlaylistsResponse : MPModelResponse {

	MPChangeDetails* _changeDetails;
	NSArray* _additionalPlaylistIdentifiers;

}

@property (nonatomic,copy) NSArray * additionalPlaylistIdentifiers;              //@synthesize additionalPlaylistIdentifiers=_additionalPlaylistIdentifiers - In the implementation block
@property (nonatomic,retain) MPChangeDetails * changeDetails;                    //@synthesize changeDetails=_changeDetails - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalPlaylists; 
-(NSArray *)additionalPlaylistIdentifiers;
-(void)setAdditionalPlaylistIdentifiers:(NSArray *)arg1 ;
-(BOOL)hasAdditionalPlaylists;
-(void)setChangeDetails:(MPChangeDetails *)arg1 ;
-(MPChangeDetails *)changeDetails;
@end
