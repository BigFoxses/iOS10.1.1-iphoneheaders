/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class MPModelSong, MPModelAlbum, MPModelArtist, MPModelPlaylist;

@interface MPModelGenericObject : MPModelObject {

	MPModelSong* _song;
	MPModelAlbum* _album;
	MPModelArtist* _artist;
	MPModelPlaylist* _playlist;

}

@property (nonatomic,retain) MPModelSong * song;                      //@synthesize song=_song - In the implementation block
@property (nonatomic,retain) MPModelAlbum * album;                    //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) MPModelArtist * artist;                  //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) MPModelPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
+(id)__album__KEY;
+(id)__artist__KEY;
+(id)__playlist__KEY;
+(id)__song__KEY;
+(id)__MPModelRelationshipGenericSong__PROPERTY;
+(id)__MPModelRelationshipGenericAlbum__PROPERTY;
+(id)__MPModelRelationshipGenericArtist__PROPERTY;
+(id)__MPModelRelationshipGenericPlaylist__PROPERTY;
-(long long)type;
-(void)setPlaylist:(MPModelPlaylist *)arg1 ;
-(void)setSong:(MPModelSong *)arg1 ;
-(MPModelArtist *)artist;
-(void)setArtist:(MPModelArtist *)arg1 ;
-(MPModelSong *)song;
-(MPModelPlaylist *)playlist;
-(MPModelAlbum *)album;
-(void)setAlbum:(MPModelAlbum *)arg1 ;
@end
